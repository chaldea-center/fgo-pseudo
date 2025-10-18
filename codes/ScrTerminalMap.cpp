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

  if ( (byte_4C40181 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&StringLiteral_8896/*"MapEffect_{0:D6}_{1:D2}"*/);
    sub_1C37058(&StringLiteral_10953/*"RAID_TIME_OVER_NOTICE_"*/);
    sub_1C37058(&StringLiteral_8921/*"MapSpotPath_{0}"*/);
    sub_1C37058(&StringLiteral_15601/*"Water"*/);
    sub_1C37058(&StringLiteral_13693/*"Terminal/QuestMap/Capter{0:D4}"*/);
    sub_1C37058(&StringLiteral_8915/*"MapGimmickPath_{0}"*/);
    sub_1C37058(&StringLiteral_1394/*"3DSpot"*/);
    sub_1C37058(&StringLiteral_20548/*"img_road{0:D4}_{1:D2}"*/);
    sub_1C37058(&StringLiteral_8895/*"MapEffect_{0:D4}_{1:D2}"*/);
    sub_1C37058(&StringLiteral_13694/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/);
    sub_1C37058(&StringLiteral_19387/*"fadeIn"*/);
    sub_1C37058(&StringLiteral_1393/*"3DMap"*/);
    sub_1C37058(&StringLiteral_8918/*"MapGimmick_{0:D4}"*/);
    sub_1C37058(&StringLiteral_20534/*"img_questmap_{0:D6}"*/);
    sub_1C37058(&StringLiteral_13689/*"Terminal/MapImgs/"*/);
    sub_1C37058(&StringLiteral_10811/*"QMap_Cap{0:D4}_Atlas"*/);
    sub_1C37058(&StringLiteral_10812/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/);
    byte_4C40181 = 1;
  }
  ScrTerminalMap_TypeInfo->static_fields->RAID_TIME_OVER_NOTICE_KEY = (struct System_String_o *)StringLiteral_10953/*"RAID_TIME_OVER_NOTICE_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)ScrTerminalMap_TypeInfo->static_fields, StringLiteral_10953/*"RAID_TIME_OVER_NOTICE_"*/, v1, v2);
  v3 = StringLiteral_13689/*"Terminal/MapImgs/"*/;
  static_fields = ScrTerminalMap_TypeInfo->static_fields;
  static_fields->MAP_IMAGE_ASSET_PATH = (struct System_String_o *)StringLiteral_13689/*"Terminal/MapImgs/"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->MAP_IMAGE_ASSET_PATH, v3, v5, v6);
  v7 = StringLiteral_13693/*"Terminal/QuestMap/Capter{0:D4}"*/;
  v8 = ScrTerminalMap_TypeInfo->static_fields;
  v8->ASSETS_NAME_PACK = (struct System_String_o *)StringLiteral_13693/*"Terminal/QuestMap/Capter{0:D4}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->ASSETS_NAME_PACK, v7, v9, v10);
  v11 = StringLiteral_13694/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/;
  v12 = ScrTerminalMap_TypeInfo->static_fields;
  v12->ASSETS_NAME_PACK_MULTI_MAP = (struct System_String_o *)StringLiteral_13694/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->ASSETS_NAME_PACK_MULTI_MAP, v11, v13, v14);
  v15 = StringLiteral_20534/*"img_questmap_{0:D6}"*/;
  v16 = ScrTerminalMap_TypeInfo->static_fields;
  v16->ASSETS_NAME_BG = (struct System_String_o *)StringLiteral_20534/*"img_questmap_{0:D6}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->ASSETS_NAME_BG, v15, v17, v18);
  v19 = StringLiteral_10811/*"QMap_Cap{0:D4}_Atlas"*/;
  v20 = ScrTerminalMap_TypeInfo->static_fields;
  v20->ASSETS_NAME_ATLAS = (struct System_String_o *)StringLiteral_10811/*"QMap_Cap{0:D4}_Atlas"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20->ASSETS_NAME_ATLAS, v19, v21, v22);
  v23 = StringLiteral_10812/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/;
  v24 = ScrTerminalMap_TypeInfo->static_fields;
  v24->ASSETS_NAME_ATLAS_MULTI_MAP = (struct System_String_o *)StringLiteral_10812/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->ASSETS_NAME_ATLAS_MULTI_MAP, v23, v25, v26);
  v27 = StringLiteral_8895/*"MapEffect_{0:D4}_{1:D2}"*/;
  v28 = ScrTerminalMap_TypeInfo->static_fields;
  v28->ASSETS_NAME_MAP_EFFECT = (struct System_String_o *)StringLiteral_8895/*"MapEffect_{0:D4}_{1:D2}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v28->ASSETS_NAME_MAP_EFFECT, v27, v29, v30);
  v31 = StringLiteral_8896/*"MapEffect_{0:D6}_{1:D2}"*/;
  v32 = ScrTerminalMap_TypeInfo->static_fields;
  v32->ASSETS_NAME_MAP_EFFECT_UPPER = (struct System_String_o *)StringLiteral_8896/*"MapEffect_{0:D6}_{1:D2}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v32->ASSETS_NAME_MAP_EFFECT_UPPER, v31, v33, v34);
  v35 = ScrTerminalMap_TypeInfo->static_fields;
  v36 = StringLiteral_8918/*"MapGimmick_{0:D4}"*/;
  v35->ASSETS_NAME_MAP_GIMMICK = (struct System_String_o *)StringLiteral_8918/*"MapGimmick_{0:D4}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->ASSETS_NAME_MAP_GIMMICK, v36, v37, v38);
  v39 = ScrTerminalMap_TypeInfo->static_fields;
  v40 = StringLiteral_20548/*"img_road{0:D4}_{1:D2}"*/;
  v39->ASSETS_NAME_SPOT_ROAD = (struct System_String_o *)StringLiteral_20548/*"img_road{0:D4}_{1:D2}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v39->ASSETS_NAME_SPOT_ROAD, v40, v41, v42);
  v43 = ScrTerminalMap_TypeInfo->static_fields;
  v44 = StringLiteral_8921/*"MapSpotPath_{0}"*/;
  v43->ASSETS_NAME_SPOT_PATH = (struct System_String_o *)StringLiteral_8921/*"MapSpotPath_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v43->ASSETS_NAME_SPOT_PATH, v44, v45, v46);
  v47 = ScrTerminalMap_TypeInfo->static_fields;
  v48 = StringLiteral_8915/*"MapGimmickPath_{0}"*/;
  v47->ASSETS_NAME_MAP_GIMMICK_PATH = (struct System_String_o *)StringLiteral_8915/*"MapGimmickPath_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v47->ASSETS_NAME_MAP_GIMMICK_PATH, v48, v49, v50);
  v51 = ScrTerminalMap_TypeInfo->static_fields;
  v52 = StringLiteral_19387/*"fadeIn"*/;
  v51->FIRST_FADE_TYPE_DURATION = (struct System_String_o *)StringLiteral_19387/*"fadeIn"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v51->FIRST_FADE_TYPE_DURATION, v52, v53, v54);
  v55 = ScrTerminalMap_TypeInfo->static_fields;
  v56 = StringLiteral_15601/*"Water"*/;
  v55->MAP_DISP_LAYER_DEFAULT = (struct System_String_o *)StringLiteral_15601/*"Water"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v55->MAP_DISP_LAYER_DEFAULT, v56, v57, v58);
  v59 = ScrTerminalMap_TypeInfo->static_fields;
  v60 = StringLiteral_1393/*"3DMap"*/;
  v59->MAP_DISP_LAYER_MODEL = (struct System_String_o *)StringLiteral_1393/*"3DMap"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v59->MAP_DISP_LAYER_MODEL, v60, v61, v62);
  v63 = ScrTerminalMap_TypeInfo->static_fields;
  v64 = StringLiteral_1394/*"3DSpot"*/;
  v63->MAP_DISP_LAYER_SPOT = (struct System_String_o *)StringLiteral_1394/*"3DSpot"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v63->MAP_DISP_LAYER_SPOT, v64, v65, v66);
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

  if ( (byte_4C40180 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapEffectComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_MapGimmickComponent__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_MapEffectComponent__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
    sub_1C37058(&MapModelManager_TypeInfo);
    byte_4C40180 = 1;
  }
  this->fields.PLAYER_ICON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.currentWarId = -1;
  *(_QWORD *)&this->fields.PLAYER_ICON_POS.fields.x = 0x4220000000000000LL;
  this->fields.currentAssetId = -1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.assetsAtlases = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetsAtlases, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  this->fields.spotList = (struct System_Collections_Generic_List_SrcSpotBasePrefab__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.spotList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MapGimmickComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MapGimmickComponent___ctor__);
  this->fields.gimmickList = (struct System_Collections_Generic_List_MapGimmickComponent__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.gimmickList, (int32_t)v9, v10, v11);
  *(_QWORD *)&this->fields.requestFocusSpotId = -1;
  v12 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v12 = MapModelManager_TypeInfo;
  }
  this->fields.currentMapLayerId = v12->static_fields->LAYER_LOWER_ID;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mapEffectPrefabList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapEffectPrefabList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MapEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MapEffectComponent___ctor__);
  this->fields.mapEffectList = (struct System_Collections_Generic_List_MapEffectComponent__o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapEffectList, (int32_t)v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScrTerminalMap__AfterActionPlay(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x19
  System_Action_o *v4; // x20
  __int64 v5; // x0
  EventMapManagerInterface_c *klass; // x8
  __int64 v7; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v9; // x0

  if ( (byte_4C40126 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__AfterActionPlay_b__339_0__);
    byte_4C40126 = 1;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrTerminalMap__AfterActionPlay_b__339_0__, 0);
  if ( !eventMapManagerInterface_k__BackingField )
    sub_1C372B4(v5);
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
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6];
  }
  else
  {
LABEL_8:
    v9 = sub_1C87870(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 6);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, System_Action_o *, _QWORD))v9)(
    eventMapManagerInterface_k__BackingField,
    v4,
    *(_QWORD *)(v9 + 8));
}


void ScrTerminalMap__AllMaskEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *allMaskPanel; // x0

  if ( (byte_4C4011F & 1) == 0 )
  {
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4C4011F = 1;
  }
  allMaskPanel = (UnityEngine_GameObject_o *)this->fields.allMaskPanel;
  if ( !allMaskPanel
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))allMaskPanel->klass[1]._1.element_class)(
          allMaskPanel,
          allMaskPanel->klass[1]._1.castClass,
          1.0),
        (allMaskPanel = this->fields.allMaskObj) == 0) )
  {
    sub_1C372B4(allMaskPanel);
  }
  UnityEngine_GameObject__SetActive(allMaskPanel, 1, 0);
  GameObjectExtensions__SafeGetComponent_object_(
    this->fields.allMaskObj,
    (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  TweenAlpha__Begin(this->fields.allMaskObj, 0.25, 0.0, 0);
}


void ScrTerminalMap__AllMaskStart(
        ScrTerminalMap_o *this,
        bool isClearMask,
        bool isFixedAllMask,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x0
  void (__fastcall *element_class)(float); // x2

  if ( (byte_4C4011E & 1) == 0 )
  {
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4C4011E = 1;
  }
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf(spotMaskObj, 0) )
  {
    GameObjectExtensions__SafeGetComponent_object_(
      this->fields.spotMaskObj,
      (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    TweenAlpha__Begin(this->fields.spotMaskObj, 0.25, 0.0, 0);
  }
  spotMaskObj = this->fields.allMaskObj;
  if ( !spotMaskObj
    || (UnityEngine_GameObject__SetActive(spotMaskObj, 1, 0),
        (spotMaskObj = (UnityEngine_GameObject_o *)this->fields.allMaskPanel) == 0) )
  {
LABEL_12:
    sub_1C372B4(spotMaskObj);
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
        (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
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
  if ( (byte_4C40111 & 1) == 0 )
  {
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_BillBoard___);
    this = (ScrTerminalMap_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40111 = 1;
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
                                   (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_BillBoard___);
      if ( this )
      {
        *(_QWORD *)&this->fields.PLAYER_ICON_POS.fields.x = cameraInstance;
        p_PLAYER_ICON_POS = &this->fields.PLAYER_ICON_POS;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.PLAYER_ICON_POS, (int32_t)cameraInstance, v10, v11);
        LOWORD(p_PLAYER_ICON_POS->fields.z) = 257;
        return;
      }
LABEL_15:
      sub_1C372B4(this);
    }
  }
}


void ScrTerminalMap__AttachEventMapManager(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
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
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  struct EventMapManagerInterface_o *v20; // x19
  EventMapManagerInterface_c *v21; // x8
  __int64 v22; // x9
  EventMapManagerInterface_c **v23; // x10
  __int64 v24; // x0

  if ( (byte_4C400E8 & 1) == 0 )
  {
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    byte_4C400E8 = 1;
  }
  ScrTerminalMap__DetachEventMapManager(this, method);
  v3 = EventMapManagerFactory__AttachToTerminalMap(this, this->fields.mMapInfo, this->fields.mWarInfo, 0);
  this->fields._eventMapManagerInterface_k__BackingField = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._eventMapManagerInterface_k__BackingField, (int32_t)v3, v4, v5);
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
  v17 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((EventMapManagerInterface_c **)p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_8;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v19 = sub_1C87870(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 0);
  }
  v6 = (*(__int64 (__fastcall **)(struct EventMapManagerInterface_o *, ScrTerminalMap_o *, struct MapControl_MapInfo_o *, struct MapControl_WarInfo_o *, struct MapCamera_o *, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, _QWORD))v19)(
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
         *(_QWORD *)(v19 + 8));
  v20 = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !v20 )
LABEL_18:
    sub_1C372B4(v6);
  v21 = v20->klass;
  v22 = *(unsigned __int16 *)&v20->klass->_2.rank;
  if ( *(_WORD *)&v20->klass->_2.rank )
  {
    v23 = (EventMapManagerInterface_c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_15;
    }
    v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1];
  }
  else
  {
LABEL_15:
    v24 = sub_1C87870(v20, EventMapManagerInterface_TypeInfo, 1);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8));
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

  if ( (byte_4C400D0 & 1) == 0 )
  {
    sub_1C37058(&EventMapManagerIdle_TypeInfo);
    sub_1C37058(&MapModelManager_TypeInfo);
    byte_4C400D0 = 1;
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
  v5 = (EventMapManagerIdle_o *)sub_1C372A4(EventMapManagerIdle_TypeInfo);
  EventMapManagerIdle___ctor(v5, 0);
  this->fields._eventMapManagerInterface_k__BackingField = (struct EventMapManagerInterface_o *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._eventMapManagerInterface_k__BackingField, (int32_t)v5, v6, v7);
  v8 = (MapModelManager_o *)sub_1C372A4(MapModelManager_TypeInfo);
  MapModelManager___ctor(v8, 0);
  this->fields.mapModelManager = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapModelManager, (int32_t)v8, v9, v10);
  spotMaskObj = (char *)this->fields.mapModelManager;
  if ( !spotMaskObj )
    goto LABEL_10;
  *((_QWORD *)spotMaskObj + 2) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(spotMaskObj + 16), (int32_t)this, v11, v12);
  spotMaskObj = (char *)this->fields.mapModelManager;
  if ( !spotMaskObj )
    goto LABEL_10;
  mapModelScreen = this->fields.mapModelScreen;
  *((_QWORD *)spotMaskObj + 7) = mapModelScreen;
  sub_1C36FFC((CGThumbnailListItem_o *)(spotMaskObj + 56), (int32_t)mapModelScreen, v13, v14);
  spotMaskObj = (char *)this->fields.mapModelManager;
  if ( !spotMaskObj )
    goto LABEL_10;
  spotModelScreen = this->fields.spotModelScreen;
  *((_QWORD *)spotMaskObj + 8) = spotModelScreen;
  sub_1C36FFC((CGThumbnailListItem_o *)(spotMaskObj + 64), (int32_t)spotModelScreen, v16, v17);
  spotMaskObj = (char *)this->fields.mapModelManager;
  if ( !spotMaskObj
    || (dispRoot = this->fields.dispRoot,
        *((_QWORD *)spotMaskObj + 9) = dispRoot,
        sub_1C36FFC((CGThumbnailListItem_o *)(spotMaskObj + 72), (int32_t)dispRoot, v19, v20),
        (spotMaskObj = (char *)this->fields.mapModelManager) == 0) )
  {
LABEL_10:
    sub_1C372B4(spotMaskObj);
  }
  subRootRoadP = this->fields.subRootRoadP;
  *((_QWORD *)spotMaskObj + 10) = subRootRoadP;
  sub_1C36FFC((CGThumbnailListItem_o *)(spotMaskObj + 80), (int32_t)subRootRoadP, v22, v23);
}


void ScrTerminalMap__BeginRaidUpdateRequest(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Request_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  NetworkManager_ResultCallbackFunc_o *v11; // x19

  if ( (byte_4C400D8 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_RaidAutoUpdateRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass248_0__BeginRaidUpdateRequest_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass248_0_TypeInfo);
    byte_4C400D8 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass248_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass248_0___ctor((ScrTerminalMap___c__DisplayClass248_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  this->fields._IsCheckExpiration_k__BackingField = 0;
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass248_0__BeginRaidUpdateRequest_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_RaidAutoUpdateRequest___);
  if ( !Request_object )
LABEL_8:
    sub_1C372B4(Request_object);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void ScrTerminalMap__ChangeBoardGameDiceButttonActive(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  AssetData_o *mapAssetData; // x0
  Il2CppObject *Object_object__51154888; // x20
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4C40164 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_8902/*"MapGimmickEffect_GappolyButtonActive"*/);
    byte_4C40164 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401C4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C4 = 1;
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
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              mapAssetData,
                              (System_String_o *)StringLiteral_8902/*"MapGimmickEffect_GappolyButtonActive"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__Instantiate_object_(
           Object_object__51154888,
           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields._EventBoardDiceButtonEffectObj_k__BackingField = (struct UnityEngine_GameObject_o *)v7;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields._EventBoardDiceButtonEffectObj_k__BackingField,
      (int32_t)v7,
      v8,
      v9);
    if ( !UnityEngine_Object__op_Equality(
            (UnityEngine_Object_o *)this->fields._EventBoardDiceButtonEffectObj_k__BackingField,
            0,
            0) )
    {
      GameObjectExtensions__SafeSetParent_36138184(
        this->fields._EventBoardDiceButtonEffectObj_k__BackingField,
        this->fields.rootEventObjP,
        0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C401C5 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401C5 = 1;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4C4017F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass439_0__ChangeMapUIStateDelayCall_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass439_0_TypeInfo);
    byte_4C4017F = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass439_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass439_0___ctor((ScrTerminalMap___c__DisplayClass439_0_o *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 24) = state;
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass439_0__ChangeMapUIStateDelayCall_b__0__,
    0);
  v10 = BasicHelper__WaitForEndOfFrameCall(v9, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v10, 0);
}


void ScrTerminalMap__ChangeSceneOnActionEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  const MethodInfo *v4; // x1
  void *SceneMoveQuestClearedInfo_k__BackingField; // x0
  TerminalPramsManager_c *v6; // x0
  int32_t v7; // w2
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

  if ( (byte_4C40135 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40135 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401BE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401BE = 1;
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
    if ( !byte_4C401BE )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401BE = 1;
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
        sub_1C372BC(SceneMoveQuestClearedInfo_k__BackingField);
      v11 = System_Int32__Parse(*((System_String_o **)SceneMoveQuestClearedInfo_k__BackingField + 4), 0);
      if ( *((int *)v10 + 6) >= 2 )
      {
        v12 = System_Int32__Parse(v10[5], 0);
LABEL_27:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = StringLiteral_1/*""*/;
        if ( !byte_4C401BF )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C401BF = 1;
        }
        v14 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v14 = TerminalPramsManager_TypeInfo;
        }
        p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v14->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
        p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v13;
        sub_1C36FFC(p_SceneMoveQuestClearedInfo_k__BackingField, v13, v7, v8);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SceneMoveQuestClearedInfo_k__BackingField = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
            SceneMoveQuestClearedInfo_k__BackingField = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !SceneMoveQuestClearedInfo_k__BackingField )
              goto LABEL_48;
            WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                (QuestTree_o *)SceneMoveQuestClearedInfo_k__BackingField,
                                v11,
                                0);
            EventID = WarMaster__getEventID(WarID_ByQuestID, 0);
            v19 = v16[6] < 2 ? 1 : v16[9] + 1;
            v20 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_41479180(v20, (System_String_o *)StringLiteral_1/*""*/, EventID, v19, 0);
            SceneMoveQuestClearedInfo_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C372B4(SceneMoveQuestClearedInfo_k__BackingField);
  }
}


void ScrTerminalMap__CheckAndWarningEventQuestBoardAllClear(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 IsEventBoardGameQuestAllClear; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  struct MapCamera_o *mapCamera; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  System_String_o *v18; // x24
  CommonConfirmDialog_ClickDelegate_o *v19; // x25

  if ( (byte_4C40152 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass385_0__CheckAndWarningEventQuestBoardAllClear_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass385_0_TypeInfo);
    sub_1C37058(&StringLiteral_5530/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_CANCEL"*/);
    sub_1C37058(&StringLiteral_5532/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_MESSAGE"*/);
    sub_1C37058(&StringLiteral_5533/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_TITLE"*/);
    sub_1C37058(&StringLiteral_5531/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_DECIDE"*/);
    byte_4C40152 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass385_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass385_0___ctor((ScrTerminalMap___c__DisplayClass385_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  v9 = v5 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  IsEventBoardGameQuestAllClear = ScrTerminalMap__IsEventBoardGameQuestAllClear(this, v12);
  if ( IsEventBoardGameQuestAllClear )
  {
    mapCamera = this->fields.mapCamera;
    if ( mapCamera )
    {
      mapCamera->fields._IsTouchEnable_k__BackingField = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_TITLE"*/, 0);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5532/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_MESSAGE"*/, 0);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5531/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_DECIDE"*/, 0);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5530/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_CANCEL"*/, 0);
      v19 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v19,
        (Il2CppObject *)v5,
        Method_ScrTerminalMap___c__DisplayClass385_0__CheckAndWarningEventQuestBoardAllClear_b__0__,
        0);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(
          (CommonUI_o *)Instance,
          v15,
          v16,
          v17,
          v18,
          v19,
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
    sub_1C372B4(IsEventBoardGameQuestAllClear);
  }
  if ( *(_QWORD *)v9 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v9 + 64LL),
      *(_QWORD *)(*(_QWORD *)v9 + 40LL));
}


bool ScrTerminalMap__CheckNoticeLoginQuest(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct TerminalSceneComponent_o *terminalScene; // x8

  terminalScene = this->fields.terminalScene;
  if ( !terminalScene || (this = (ScrTerminalMap_o *)terminalScene->fields.mTerminalList) == 0 )
    sub_1C372B4(this);
  return ScrTerminalListTop__CheckNoticeLoginQuest((ScrTerminalListTop_o *)this, 0);
}


void ScrTerminalMap__CheckRaidTimeLimit(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass252_0_o *v3; // x21
  EventRaidMaster_o *Master_object; // x0
  struct WarEntity_o *mWarEnt; // x8
  int32_t *p_eventId; // x19
  EventRaidMaster_o *v7; // x22
  _BOOL8 IsEventRaidAliveAny; // x0
  const MethodInfo *v9; // x2
  int64_t TimeLimitAt; // x0
  int64_t v11; // x23
  EventRaidMaster_o *v12; // x22
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v14; // x8
  int32_t v15; // w22
  ScrTerminalMap_c *v16; // x0
  System_String_o *RAID_TIME_OVER_NOTICE_KEY; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x20
  ScrTerminalMap_c *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  System_String_o *v26; // x19

  if ( (byte_4C400DC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass252_0__CheckRaidTimeLimit_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass252_0_TypeInfo);
    sub_1C37058(&StringLiteral_5679/*"EVENT_RAID_TIME_OVER_NOTICE_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C400DC = 1;
  }
  v3 = (ScrTerminalMap___c__DisplayClass252_0_o *)sub_1C372A4(ScrTerminalMap___c__DisplayClass252_0_TypeInfo);
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
    Master_object = (EventRaidMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventRaidMaster___);
    if ( !Master_object )
      goto LABEL_48;
    v7 = Master_object;
    IsEventRaidAliveAny = EventRaidMaster__IsEventRaidAliveAny(Master_object, *p_eventId, 0);
    if ( IsEventRaidAliveAny )
    {
      TimeLimitAt = ScrTerminalMap__GetTimeLimitAt((ScrTerminalMap_o *)IsEventRaidAliveAny, *p_eventId, v9);
      if ( TimeLimitAt >= 1 )
      {
        v11 = TimeLimitAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( v11 - NetworkManager__getTime(0) <= 0 )
        {
          if ( !byte_4C401A5 )
          {
            sub_1C37058(&RaidAutoUpdateRequest_TypeInfo);
            byte_4C401A5 = 1;
          }
          if ( RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap >= v11 )
          {
            Master_object = (EventRaidMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(v7, *p_eventId, 1, 0);
            if ( !Master_object )
              goto LABEL_48;
            v12 = Master_object;
            if ( Master_object->fields._MasterName_k__BackingField )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (EventRaidMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
              if ( !LODWORD(v12->fields._MasterName_k__BackingField) )
                goto LABEL_49;
              if ( !Master_object )
                goto LABEL_48;
              Master_object = (EventRaidMaster_o *)QuestReleaseMaster__getListByQuestID(
                                                     (QuestReleaseMaster_o *)Master_object,
                                                     v12->fields.revision,
                                                     0);
              if ( !Master_object )
                goto LABEL_48;
              MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
              if ( MasterName_k__BackingField )
              {
                if ( (_DWORD)MasterName_k__BackingField )
                {
                  v14 = *(_QWORD *)&Master_object->fields.revision;
                  if ( !v14 )
                    goto LABEL_48;
                  v15 = *(_DWORD *)(v14 + 24);
                  if ( !v15 )
                    return;
                  if ( !CondType_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  if ( !CondType__IsQuestClear_40324848(v15, -1, 0, 0) )
                    return;
                  goto LABEL_31;
                }
LABEL_49:
                sub_1C372BC(Master_object);
              }
            }
LABEL_31:
            if ( !this->fields.isLoadRaidTimerOverNotice )
            {
              this->fields.isLoadRaidTimerOverNotice = 1;
              v16 = ScrTerminalMap_TypeInfo;
              if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
                v16 = ScrTerminalMap_TypeInfo;
              }
              RAID_TIME_OVER_NOTICE_KEY = v16->static_fields->RAID_TIME_OVER_NOTICE_KEY;
              v18 = System_Int32__ToString((int)v3 + 16, 0);
              v19 = System_String__Concat_63561656(RAID_TIME_OVER_NOTICE_KEY, v18, 0);
              if ( UnityEngine_PlayerPrefs__GetInt_71224996(v19, 0) <= 0 )
              {
                v20 = sub_1C372A4(System_Action_TypeInfo);
                System_Action___ctor(
                  (System_Action_o *)v20,
                  (Il2CppObject *)v3,
                  Method_ScrTerminalMap___c__DisplayClass252_0__CheckRaidTimeLimit_b__0__,
                  0);
                v21 = ScrTerminalMap_TypeInfo;
                if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
                if ( !ScrTerminalMap__IsDialogOnActive((const MethodInfo *)v21) )
                {
                  v22 = System_Int32__ToString((int)v3 + 16, 0);
                  v23 = System_String__Concat_63561656((System_String_o *)StringLiteral_5679/*"EVENT_RAID_TIME_OVER_NOTICE_"*/, v22, 0);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Master_object = (EventRaidMaster_o *)LocalizationManager__ContainsKey(v23, 0);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    v24 = System_Int32__ToString((int32_t)p_eventId, 0);
                    v25 = System_String__Concat_63561656((System_String_o *)StringLiteral_5679/*"EVENT_RAID_TIME_OVER_NOTICE_"*/, v24, 0);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v26 = LocalizationManager__Get(v25, 0);
                    Master_object = (EventRaidMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( Master_object )
                    {
                      CommonUI__OpenNotificationDialog(
                        (CommonUI_o *)Master_object,
                        (System_String_o *)StringLiteral_1/*""*/,
                        v26,
                        (System_Action_o *)v20,
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
                  else if ( v20 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 24))(*(_QWORD *)(v20 + 64), *(_QWORD *)(v20 + 40));
                    return;
                  }
LABEL_48:
                  sub_1C372B4(Master_object);
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

  if ( (byte_4C400D5 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C400D5 = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v13, 0);
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
  UnityEngine_Vector2_o TouchPos; // kr00_8 OVERLAPPED
  struct MapCamera_o *mapCamera; // x8
  int v6; // s2
  struct MapModelManager_o *mapModelManager; // x8
  UnityEngine_Object_o *v8; // x19
  Il2CppObject *Component_object; // x19
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4013C & 1) == 0 )
  {
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4013C = 1;
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
  v6 = 0;
  v10 = UnityEngine_Camera__ScreenToWorldPoint_71073044(
          (UnityEngine_Camera_o *)*(_QWORD *)&mCamera,
          *(UnityEngine_Vector3_o *)&TouchPos.fields.x,
          0);
  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_19;
  mCamera = (UnityEngine_Vector2_o)mapModelManager->fields._SpotModelCamera_k__BackingField;
  if ( !*(_QWORD *)&mCamera )
    goto LABEL_19;
  v8 = (UnityEngine_Object_o *)MapModelCamera__RayCast(*(MapModelCamera_o **)&mCamera, v10, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mCamera = (UnityEngine_Vector2_o)UnityEngine_Object__op_Equality(v8, 0, 0);
  if ( (LOBYTE(mCamera.fields.x) & 1) == 0 )
  {
    if ( v8 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v8,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C372B4)(mCamera);
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
  const MethodInfo *v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  z = localPostion.fields.z;
  y = localPostion.fields.y;
  x = localPostion.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  v10 = UnityEngine_Transform__TransformPoint(transform, v9, 0);
  return ScrTerminalMap__ConvertWorldToScreenPosition(this, v10, v8);
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
  if ( (byte_4C40119 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    this = (ScrTerminalMap_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40119 = 1;
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
        v16 = UnityEngine_Camera__WorldToScreenPoint_71073020((UnityEngine_Camera_o *)this, v15, 0);
        this = (ScrTerminalMap_o *)v6->fields.mapModelScreen;
        v14 = v16.fields.x;
        v13 = v16.fields.y;
        if ( this )
        {
          this = (ScrTerminalMap_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_1C372B4(this);
  }
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
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
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *mapEffectList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C400DF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_MapEffectComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C400DF = 1;
  }
  memset(&v16, 0, sizeof(v16));
  mapEffectPrefabList = this->fields.mapEffectPrefabList;
  if ( !mapEffectPrefabList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)mapEffectPrefabList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__Instantiate_object_(
           current,
           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      sub_1C372B4(0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v5,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !v7 )
    {
      if ( !Component_object )
        sub_1C372B4(v7);
      MapEffectComponent__Setup(
        (MapEffectComponent_o *)Component_object,
        this->fields.rootEffectP,
        this->fields.mapCamera,
        0);
      mapEffectList = (System_Collections_Generic_List_object__o *)this->fields.mapEffectList;
      if ( !mapEffectList )
        sub_1C372B4(0);
      items = mapEffectList->fields._items;
      v12 = Method_System_Collections_Generic_List_MapEffectComponent__Add__;
      ++mapEffectList->fields._version;
      if ( !items )
        sub_1C372B4(mapEffectList);
      size = mapEffectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          mapEffectList,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        mapEffectList->fields._size = size + 1;
        v14[4] = (Il2CppClass *)Component_object;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)Component_object, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x24
  Il2CppObject *v19; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v24; // x8
  float v25; // s13
  float v26; // s14
  float w; // s11
  float v28; // s12
  MapGimmickComponent_o *v29; // x24
  UnityEngine_Object_o *subRootGimmickP; // x23
  bool v31; // w0
  __int64 v32; // x8
  const MethodInfo *v33; // x2
  bool v34; // w0
  __int64 v35; // x8
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v37; // x2
  MapGimmickPathEntity_o *v38; // x23
  Custom2dSplineMesh_o *PathByMapGimmickId; // x24
  int32_t id; // w25
  int32_t moveTime; // w23
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v42; // x21
  Il2CppObject *Component_object; // x0
  MapCamera_o *mapCamera; // x21
  System_Collections_Generic_List_UIAtlas__o *assetsAtlases; // x22
  AssetData_o *mapAssetData; // x23
  AssetData_o *mapMultiAssetData; // x25
  NetworkManager_ResultCallbackFunc_o *v48; // x26
  int32_t currentWarId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPositionOnMapModel; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v54; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v6 = this;
  if ( (byte_4C40110 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_MapGimmickComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&EventMapGimmickMoveManager_MapGimmickMoveData_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78193024);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__CreateMapGimmick_b__311_0__);
    this = (ScrTerminalMap_o *)sub_1C37058(&StringLiteral_8917/*"MapGimmick_{0:0000}"*/);
    byte_4C40110 = 1;
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
    v16 = 0;
    if ( MapGimmickEntity__IsMonoColorRect(v9, 0) )
    {
      currentWarId = v6->fields.currentWarId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentWarId, v10, v11, v12, v13, v14, v15);
      v18 = System_String__Format((System_String_o *)StringLiteral_8917/*"MapGimmick_{0:0000}"*/, v17, 0);
      v16 = (Il2CppObject *)sub_1C372A4(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)v16, v18, 0);
      if ( !v16 )
        goto LABEL_47;
      this = (ScrTerminalMap_o *)UnityEngine_GameObject__AddComponent_object_(
                                   (UnityEngine_GameObject_o *)v16,
                                   (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_MapGimmickComponent___);
      if ( !this )
        goto LABEL_47;
      MapGimmickComponent__InitDefaultParam((MapGimmickComponent_o *)this, 0);
    }
  }
  else
  {
    v19 = (Il2CppObject *)v6->fields.mapGimmickPrefab;
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !byte_4C3C927 )
    {
      sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
      byte_4C3C927 = 1;
    }
    v24 = UnityEngine_Quaternion_TypeInfo->static_fields;
    v26 = v24->identityQuaternion.fields.x;
    v25 = v24->identityQuaternion.fields.y;
    v28 = v24->identityQuaternion.fields.z;
    w = v24->identityQuaternion.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v51.fields.x = x;
    v51.fields.y = y;
    v51.fields.z = z;
    v54.fields.x = v26;
    v54.fields.y = v25;
    v54.fields.z = v28;
    v54.fields.w = w;
    v16 = UnityEngine_Object__Instantiate_object__51855900(
            v19,
            v51,
            v54,
            (const MethodInfo_317421C *)Method_UnityEngine_Object_Instantiate_GameObject____78193024);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0, 0);
  v29 = 0;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v9 )
      goto LABEL_47;
    this = (ScrTerminalMap_o *)MapGimmickComponent__GetGobjName(v9->fields.id, 0);
    if ( !v16 )
      goto LABEL_47;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, (System_String_o *)this, 0);
    if ( isMapModel )
    {
      subRootGimmickP = (UnityEngine_Object_o *)v6->fields.subRootGimmickP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v31 = UnityEngine_Object__op_Inequality(subRootGimmickP, 0, 0);
      v32 = 168;
      if ( v31 )
        v32 = 184;
      GameObjectExtensions__SafeSetParent_36138184(
        (UnityEngine_GameObject_o *)v16,
        *(UnityEngine_GameObject_o **)((char *)&v6->klass + v32),
        0);
      LocalPositionOnMapModel = MapGimmickEntity__GetLocalPositionOnMapModel(v9, 0);
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v16, LocalPositionOnMapModel, 0);
      if ( MapGimmickEntity__IsEnabledBillBoard(v9, 0) )
        ScrTerminalMap__AttachBillBoard(v6, (UnityEngine_GameObject_o *)v16, v33);
    }
    else
    {
      v34 = MapGimmickEntity__InParentUIPanel(v9, 0);
      v35 = 168;
      if ( v34 )
        v35 = 176;
      GameObjectExtensions__SafeSetParent_36138184(
        (UnityEngine_GameObject_o *)v16,
        *(UnityEngine_GameObject_o **)((char *)&v6->klass + v35),
        0);
      v53.fields.x = (float)((float)v9->fields.x - v6->fields.mapImageOffsetX) + 0.0;
      v53.fields.y = (float)((float)((float)v6->fields._currentMapImageH_k__BackingField - (float)v9->fields.y)
                           - v6->fields.mapImageOffsetY)
                   + 0.0;
      v53.fields.z = 0.0;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v16, v53, 0);
      if ( v6->fields.isRaidMap )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
        if ( !this )
          goto LABEL_47;
        MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                                 (MapGimmickPathMaster_o *)this,
                                 v9->fields.id,
                                 0);
        if ( MapGimmickPathEntity )
        {
          v38 = MapGimmickPathEntity;
          PathByMapGimmickId = ScrTerminalMap__mfMap2d_Create_PathByMapGimmickId(v6, v9->fields.id, v37);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PathByMapGimmickId, 0, 0) )
          {
            id = v9->fields.id;
            moveTime = v38->fields.moveTime;
            v42 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)sub_1C372A4(EventMapGimmickMoveManager_MapGimmickMoveData_TypeInfo);
            EventMapGimmickMoveManager_MapGimmickMoveData___ctor(
              v42,
              id,
              (UnityEngine_GameObject_o *)v16,
              PathByMapGimmickId,
              moveTime,
              0);
            this = (ScrTerminalMap_o *)v6->fields.eventMapGimmickMoveManager;
            if ( !this )
              goto LABEL_47;
            EventMapGimmickMoveManager__Add((EventMapGimmickMoveManager_o *)this, v42, 0);
            this = (ScrTerminalMap_o *)v6->fields.eventMapGimmickMoveManager;
            if ( !this )
              goto LABEL_47;
            EventMapGimmickMoveManager__UpdateAllMapGimmickPosition((EventMapGimmickMoveManager_o *)this, 0);
          }
        }
      }
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v16,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    mapCamera = v6->fields.mapCamera;
    assetsAtlases = v6->fields.assetsAtlases;
    mapAssetData = v6->fields.mapAssetData;
    mapMultiAssetData = v6->fields.mapMultiAssetData;
    v29 = (MapGimmickComponent_o *)Component_object;
    v48 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v48,
      (Il2CppObject *)v6,
      Method_ScrTerminalMap__CreateMapGimmick_b__311_0__,
      0);
    if ( v29 )
    {
      MapGimmickComponent__Setup(v29, mapGimmickInfo, mapCamera, assetsAtlases, mapAssetData, mapMultiAssetData, v48, 0);
      return v29;
    }
LABEL_47:
    sub_1C372B4(this);
  }
  return v29;
}


UnityEngine_GameObject_o *ScrTerminalMap__CreatePathLengthObject(
        ScrTerminalMap_o *this,
        int64_t length,
        const MethodInfo *method)
{
  Il2CppObject *pfbPathLength; // x20
  Il2CppObject *v6; // x20
  bool v7; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *Component_object; // x21
  System_String_o *v10; // x22
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4010E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5666/*"EVENT_RACE_PATH_LENGTH"*/);
    byte_4C4010E = 1;
  }
  pfbPathLength = (Il2CppObject *)this->fields.pfbPathLength;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         pfbPathLength,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0, 0);
  result = 0;
  if ( !v7 )
  {
    if ( !v6 )
      goto LABEL_12;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v6,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_RACE_PATH_LENGTH"*/, 0);
    v18 = length;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18, v11, v12, v13, v14, v15, v16);
    result = (UnityEngine_GameObject_o *)System_String__Format(v10, v17, 0);
    if ( !Component_object )
LABEL_12:
      sub_1C372B4(result);
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
  if ( (byte_4C400CB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_13708/*"TerminalPlayerIcon"*/);
    byte_4C400CB = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  v5 = mapId < 1;
  v6 = v4;
  if ( v5 )
    return System_String__Concat_63561656((System_String_o *)StringLiteral_13708/*"TerminalPlayerIcon"*/, v4, 0);
  v7 = System_Int32__ToString((int32_t)&v9, 0);
  return System_String__Concat_63601908(
           (System_String_o *)StringLiteral_13708/*"TerminalPlayerIcon"*/,
           v6,
           (System_String_o *)StringLiteral_16109/*"_"*/,
           v7,
           0);
}


System_String_o *ScrTerminalMap__CreateSaveKey_PlayerMap(int32_t warId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = warId;
  if ( (byte_4C400CD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13709/*"TerminalPlayerMap"*/);
    byte_4C400CD = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63561656((System_String_o *)StringLiteral_13709/*"TerminalPlayerMap"*/, v2, 0);
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

  if ( (byte_4C400FC & 1) == 0 )
  {
    this = (ScrTerminalMap_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C400FC = 1;
  }
  if ( !pearentObj || (this = (ScrTerminalMap_o *)UnityEngine_GameObject__get_transform(pearentObj, 0)) == 0 )
LABEL_16:
    sub_1C372B4(this);
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
        UnityEngine_Object__Destroy_71266752(gameObject, 0);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  EventQuestCooltimeComponent_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *coolTimeButtonObj; // x20
  UnityEngine_Object_o *v10; // x19

  if ( (byte_4C40171 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40171 = 1;
  }
  eventQuestCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventQuestCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_eventQuestCooltimeComponent = &this->fields.eventQuestCooltimeComponent;
  if ( UnityEngine_Object__op_Inequality(eventQuestCooltimeComponent, 0, 0) )
  {
    v7 = *p_eventQuestCooltimeComponent;
    if ( !*p_eventQuestCooltimeComponent
      || (EventQuestCooltimeComponent__DestroyObjects(v7, 0), (v7 = *p_eventQuestCooltimeComponent) == 0) )
    {
      sub_1C372B4(v7);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
  this->fields.eventQuestCooltimeComponent = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventQuestCooltimeComponent, 0, v5, v6);
  coolTimeButtonObj = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coolTimeButtonObj, 0, 0) )
  {
    v10 = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v10, 0);
  }
}


void ScrTerminalMap__DestroyEventActionEffect(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventActionEffect; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C400DE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C400DE = 1;
  }
  eventActionEffect = (UnityEngine_Object_o *)this->fields.eventActionEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventActionEffect, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.eventActionEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v4, 0);
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
  const MethodInfo *v17; // x2
  struct EventBoardGameDiceCounter_o *EventBoardDiceVoiceServantId; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *VoiceAssetName_42795352; // x20
  struct System_Int32_array *EventBoardGameArrivalVoiceSvtIdList_k__BackingField; // x8
  unsigned __int64 v25; // x23
  __int64 max_length; // x24
  System_String_o *v27; // x20
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C40149 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C40149 = 1;
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
    UnityEngine_Object__Destroy_71266752(v7, 0);
  }
  EventBoardPieceObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardPieceObj_k__BackingField, 0, 0) )
  {
    v9 = (UnityEngine_Object_o *)this->fields._EventBoardPieceObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v9, 0);
  }
  EventBoardQuestArrivalPanelObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardQuestArrivalPanelObj_k__BackingField, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v11, 0);
  }
  EventBoardStopPanelObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardStopPanelObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardStopPanelObj_k__BackingField, 0, 0) )
  {
    v13 = (UnityEngine_Object_o *)this->fields._EventBoardStopPanelObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v13, 0);
  }
  EventBoardDiceButtonEffectObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardDiceButtonEffectObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardDiceButtonEffectObj_k__BackingField, 0, 0) )
  {
    v15 = (UnityEngine_Object_o *)this->fields._EventBoardDiceButtonEffectObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v15, 0);
  }
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diceCounterComponent, 0, 0) )
  {
    EventBoardDiceVoiceServantId = this->fields.diceCounterComponent;
    if ( !EventBoardDiceVoiceServantId )
LABEL_57:
      sub_1C372B4(EventBoardDiceVoiceServantId);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)EventBoardDiceVoiceServantId,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
  ScrTerminalMap__SetActiveDiceButton(this, 0, v17);
  EventBoardDiceVoiceServantId = (struct EventBoardGameDiceCounter_o *)ScrTerminalMap__GetEventBoardDiceVoiceServantId(
                                                                         this,
                                                                         v20);
  if ( (_DWORD)EventBoardDiceVoiceServantId )
  {
    VoiceAssetName_42795352 = ServantVoiceEntity__getVoiceAssetName_42795352((int32_t)EventBoardDiceVoiceServantId, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_42795352, 0);
  }
  EventBoardGameArrivalVoiceSvtIdList_k__BackingField = this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
  if ( EventBoardGameArrivalVoiceSvtIdList_k__BackingField
    && (int)EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length >= 1 )
  {
    v25 = 0;
    max_length = (unsigned int)EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length;
    while ( 1 )
    {
      if ( v25 >= LODWORD(EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length) )
        sub_1C372BC(EventBoardDiceVoiceServantId);
      EventBoardDiceVoiceServantId = (struct EventBoardGameDiceCounter_o *)(unsigned int)EventBoardGameArrivalVoiceSvtIdList_k__BackingField->m_Items[v25];
      if ( (int)EventBoardDiceVoiceServantId >= 1 )
      {
        v27 = ServantVoiceEntity__getVoiceAssetName_42795352((int32_t)EventBoardDiceVoiceServantId, 0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__releaseAudioAssetStorage(v27, 0);
      }
      if ( max_length == ++v25 )
        break;
      EventBoardGameArrivalVoiceSvtIdList_k__BackingField = this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
      if ( !EventBoardGameArrivalVoiceSvtIdList_k__BackingField )
        goto LABEL_57;
    }
  }
  if ( this->fields._EventBoardDiceVoiceInfo_k__BackingField )
  {
    this->fields._EventBoardDiceVoiceInfo_k__BackingField = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._EventBoardDiceVoiceInfo_k__BackingField, 0, v21, v22);
  }
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventBoardGameSpotPrefab, 0, 0) )
  {
    this->fields.eventBoardGameSpotPrefab = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventBoardGameSpotPrefab, 0, v29, v30);
  }
}


void ScrTerminalMap__DestroyMapEff(ScrTerminalMap_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mapEffectList; // x0
  UnityEngine_Object_o *gameObject; // x20
  __int64 v5; // x0
  struct System_Collections_Generic_List_MapEffectComponent__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C400E0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapEffectComponent__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapEffectComponent__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C400E0 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  mapEffectList = (System_Collections_Generic_List_object__o *)this->fields.mapEffectList;
  if ( mapEffectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      mapEffectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapEffectComponent__GetEnumerator__);
    v10 = v9;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C372B4(0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v10.fields._current,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71266752(gameObject, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__Dispose__);
    v6 = this->fields.mapEffectList;
    if ( !v6 )
      sub_1C372B4(v5);
    size = v6->fields._size;
    v8 = v6->fields._version + 1;
    v6->fields._size = 0;
    v6->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  }
}


void ScrTerminalMap__DestroyMapObjs(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapButtonGrid; // x20
  MapButtonControl_o *v4; // x0
  UnityEngine_Object_o *mapCamera; // x20
  struct MapCamera_o *v6; // x8
  MapScroll_o *mScrl; // x20
  UnityEngine_Object_o *rootSpotP; // x20
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *subRootSpotP; // x20
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x2
  EventSpotMoveManager_o *eventSpotMoveManager; // x0
  EventMapGimmickMoveManager_o *eventMapGimmickMoveManager; // x0
  UnityEngine_Object_o *rootPathP; // x20
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *rootRoadP; // x20
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *subRootRoadP; // x20
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *rootGimmickP; // x20
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *subRootGimmickP; // x20
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *rootUIGimmickP; // x20
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  EventMapManagerInterface_c *klass; // x8
  __int64 v39; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v41; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1

  if ( (byte_4C400FB & 1) == 0 )
  {
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C400FB = 1;
  }
  mapButtonGrid = (UnityEngine_Object_o *)this->fields.mapButtonGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapButtonGrid, 0, 0) )
  {
    v4 = this->fields.mapButtonGrid;
    if ( !v4 )
      goto LABEL_61;
    MapButtonControl__DestroyButtons(v4, 0);
  }
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapCamera, 0, 0) )
  {
    v4 = (MapButtonControl_o *)this->fields.mapCamera;
    if ( !v4 )
      goto LABEL_61;
    MapCamera__RemoveMapTexture((MapCamera_o *)v4, 0);
    v6 = this->fields.mapCamera;
    if ( !v6 )
      goto LABEL_61;
    mScrl = v6->fields.mScrl;
    if ( mScrl )
    {
      if ( !byte_4C3C81A )
      {
        sub_1C37058(&UnityEngine_Vector2_TypeInfo);
        byte_4C3C81A = 1;
      }
      MapScroll__SetScrlPos(mScrl, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
    }
  }
  rootSpotP = (UnityEngine_Object_o *)this->fields.rootSpotP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(rootSpotP, 0, 0);
  if ( v9 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v9, this->fields.rootSpotP, v10);
  subRootSpotP = (UnityEngine_Object_o *)this->fields.subRootSpotP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(subRootSpotP, 0, 0);
  if ( v12 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v12, this->fields.subRootSpotP, v13);
  eventSpotMoveManager = this->fields.eventSpotMoveManager;
  if ( eventSpotMoveManager )
    EventSpotMoveManager__Clear(eventSpotMoveManager, 0);
  eventMapGimmickMoveManager = this->fields.eventMapGimmickMoveManager;
  if ( eventMapGimmickMoveManager )
    EventMapGimmickMoveManager__Clear(eventMapGimmickMoveManager, 0);
  rootPathP = (UnityEngine_Object_o *)this->fields.rootPathP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Inequality(rootPathP, 0, 0);
  if ( v17 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v17, this->fields.rootPathP, v18);
  rootRoadP = (UnityEngine_Object_o *)this->fields.rootRoadP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Inequality(rootRoadP, 0, 0);
  if ( v20 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v20, this->fields.rootRoadP, v21);
  subRootRoadP = (UnityEngine_Object_o *)this->fields.subRootRoadP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__op_Inequality(subRootRoadP, 0, 0);
  if ( v23 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v23, this->fields.subRootRoadP, v24);
  rootGimmickP = (UnityEngine_Object_o *)this->fields.rootGimmickP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v26 = UnityEngine_Object__op_Inequality(rootGimmickP, 0, 0);
  if ( v26 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v26, this->fields.rootGimmickP, v27);
  subRootGimmickP = (UnityEngine_Object_o *)this->fields.subRootGimmickP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__op_Inequality(subRootGimmickP, 0, 0);
  if ( v29 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v29, this->fields.subRootGimmickP, v30);
  rootUIGimmickP = (UnityEngine_Object_o *)this->fields.rootUIGimmickP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v32 = UnityEngine_Object__op_Inequality(rootUIGimmickP, 0, 0);
  if ( v32 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v32, this->fields.rootUIGimmickP, v34);
  ScrTerminalMap__DestroyMapEff(this, v33);
  ScrTerminalMap__DestroyEventBoardGameObj(this, v35);
  ScrTerminalMap__DestroyCooltimeObject(this, v36);
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
LABEL_61:
    sub_1C372B4(v4);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v39 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v39;
      p_offset += 2;
      if ( !v39 )
        goto LABEL_58;
    }
    v41 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 10];
  }
  else
  {
LABEL_58:
    v41 = sub_1C87870(this->fields._eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 10);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v41)(
    eventMapManagerInterface_k__BackingField,
    *(_QWORD *)(v41 + 8));
  ScrTerminalMap__DestroySpotCooltimeObjects(this, v42);
  ScrTerminalMap__ReleaseMapUseVoiceData(this, v43);
}


void ScrTerminalMap__DestroySpotCooltimeObjects(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  EventSpotCooltimeComponent_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *coolTimeButtonObj; // x20
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *rewardReceiveButtonObj; // x20
  UnityEngine_Object_o *v11; // x19

  if ( (byte_4C40172 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40172 = 1;
  }
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
  {
    v6 = this->fields.eventSpotCooltimeComponent;
    if ( !v6 || (EventSpotCooltimeComponent__DestroyObjects(v6, 0), (v6 = this->fields.eventSpotCooltimeComponent) == 0) )
      sub_1C372B4(v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
  this->fields.eventQuestCooltimeComponent = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventQuestCooltimeComponent, 0, v4, v5);
  coolTimeButtonObj = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coolTimeButtonObj, 0, 0) )
  {
    v9 = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v9, 0);
  }
  rewardReceiveButtonObj = (UnityEngine_Object_o *)this->fields.rewardReceiveButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardReceiveButtonObj, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)this->fields.rewardReceiveButtonObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v11, 0);
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
  if ( (byte_4C400E9 & 1) == 0 )
  {
    sub_1C37058(&EventMapManagerIdle_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&EventMapManagerInterface_TypeInfo);
    byte_4C400E9 = 1;
  }
  eventMapManagerInterface_k__BackingField = v2->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
    sub_1C372B4(this);
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
    v7 = sub_1C87870(v2->fields._eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 11);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v7)(
    eventMapManagerInterface_k__BackingField,
    *(_QWORD *)(v7 + 8));
  EventMapManagerFactory__DetachFromTerminalMap(v2, 0);
  v8 = (EventMapManagerIdle_o *)sub_1C372A4(EventMapManagerIdle_TypeInfo);
  EventMapManagerIdle___ctor(v8, 0);
  v2->fields._eventMapManagerInterface_k__BackingField = (struct EventMapManagerInterface_o *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._eventMapManagerInterface_k__BackingField, (int32_t)v8, v9, v10);
}


void ScrTerminalMap__EndBoardGameDiceEffect(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *terminalScene; // x0
  const MethodInfo *v4; // x1

  UnityEngine_RenderSettings__set_ambientLight(this->fields.eventBoardGameColorBuffer, 0);
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    sub_1C372B4(0);
  TerminalSceneComponent__SetDirectionalLightActive(terminalScene, 1, 0);
  ScrTerminalMap__PlayBoardGamePieceEffect(this, v4);
}


void ScrTerminalMap__EndBoardGamePieceEffect(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *EventBoardPieceObj_k__BackingField; // x0
  Il2CppObject *Component_object; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Object_object__51154888; // x20
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

  if ( (byte_4C4015D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__EndBoardGamePieceEffect_b__398_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_10647/*"PlayBoardGameStopPiecePanel"*/);
    sub_1C37058(&StringLiteral_8914/*"MapGimmickEffect_StopPiece"*/);
    byte_4C4015D = 1;
  }
  entity = 0;
  EventBoardPieceObj_k__BackingField = this->fields._EventBoardPieceObj_k__BackingField;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       EventBoardPieceObj_k__BackingField,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)Component_object, 0);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.animationNameBuffer, 0) )
  {
    EventBoardPieceObj_k__BackingField = this->fields._EventBoardPieceObj_k__BackingField;
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_45;
    EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       EventBoardPieceObj_k__BackingField,
                                                                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_45;
    UnityEngine_Animation__Stop_71011180(
      (UnityEngine_Animation_o *)EventBoardPieceObj_k__BackingField,
      this->fields.animationNameBuffer,
      0);
    this->fields.animationNameBuffer = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animationNameBuffer, 0, v5, v6);
  }
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)this->fields.mapAssetData;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_45;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              (AssetData_o *)EventBoardPieceObj_k__BackingField,
                              (System_String_o *)StringLiteral_8914/*"MapGimmickEffect_StopPiece"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         Object_object__51154888,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)v8,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)EventBoardPieceObj_k__BackingField & 1) != 0 )
  {
    GameObjectExtensions__SafeSetParent_36138184(
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
         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
  {
    v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrTerminalMap__EndBoardGamePieceEffect_b__398_0__, 0);
    if ( !v9 )
      goto LABEL_45;
    v9[2].monitor = v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&v9[2].monitor, (int32_t)v10, v11, v12);
  }
  else
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10647/*"PlayBoardGameStopPiecePanel"*/,
      0.3,
      0);
  }
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)this->fields.mWarInfo;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_45;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)EventBoardPieceObj_k__BackingField, 0);
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)EventBoardPieceObj_k__BackingField,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
    sub_1C372B4(EventBoardPieceObj_k__BackingField);
  value = entity->fields.value;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401C1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C1 = 1;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct MapCamera_o *mapCamera; // x8
  Il2CppObject *v12; // x0
  int32_t currentWarId; // w21
  QuestTree_o *v14; // x22
  System_Action_o *v15; // x23
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4C40158 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass391_0__EndRequestDiceUse_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass391_0_TypeInfo);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C40158 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass391_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass391_0___ctor((ScrTerminalMap___c__DisplayClass391_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = result;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)result, v7, v8);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseEventItemListDialog((CommonUI_o *)Instance, 0);
  Instance = (Il2CppObject *)System_String__op_Equality(
                               *(System_String_o **)(v5 + 16),
                               (System_String_o *)StringLiteral_22215/*"ng"*/,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    mapCamera = this->fields.mapCamera;
    if ( mapCamera )
    {
      mapCamera->fields._IsTouchEnable_k__BackingField = 1;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
        return;
      }
    }
LABEL_11:
    sub_1C372B4(Instance);
  }
  v12 = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  currentWarId = this->fields.currentWarId;
  v14 = (QuestTree_o *)v12;
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass391_0__EndRequestDiceUse_b__0__,
    0);
  if ( !v14 )
    goto LABEL_11;
  v16 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v14, currentWarId, v15, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void ScrTerminalMap__EventActionPlay(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  MapButtonControl_o *mapButtonGrid; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct WarEntity_o *mWarEnt; // x8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x21
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  struct TitleInfoControl_o *v13; // x19
  System_Action_o *v14; // x21
  TitleInfoControl_o *v15; // x0
  System_Action_o *v16; // x2
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // w21
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2
  TitleInfoControl_o *titleInfoControl; // x21
  int32_t v25; // w20
  System_Action_o *v26; // x22
  struct TitleInfoControl_o *v27; // x21
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x2
  TitleInfoControl_o *v30; // x19
  System_Action_o *v31; // x21
  TerminalPramsManager_c *v32; // x0
  struct TitleInfoControl_o *v33; // x20
  System_Action_o *v34; // x19
  TerminalPramsManager_c *v35; // x0
  Il2CppObject *Master_object; // x20
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x2
  _BOOL8 IsEventPanel; // x0
  TerminalPramsManager_c *v40; // x0
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x1
  EventDetailEntity_o *eventDetailEntity; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C40127 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&EventInfoUIProgressControl_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_EventScriptPlay__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__0__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__1__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__2__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__3__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass340_0_TypeInfo);
    byte_4C40127 = 1;
  }
  eventDetailEntity = 0;
  entity = 0;
  v3 = sub_1C372A4(ScrTerminalMap___c__DisplayClass340_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass340_0___ctor((ScrTerminalMap___c__DisplayClass340_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_96;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_96;
  MapButtonControl__PlayNewButtonEntryAnim(mapButtonGrid, 0);
  mWarEnt = this->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_96;
  *(_DWORD *)(v3 + 24) = mWarEnt->fields.eventId;
  mapButtonGrid = (MapButtonControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mapButtonGrid )
    goto LABEL_96;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)mapButtonGrid, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mapButtonGrid = (MapButtonControl_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !mapButtonGrid )
    goto LABEL_96;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)mapButtonGrid,
          &entity,
          *(_DWORD *)(v3 + 24),
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    goto LABEL_92;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mapButtonGrid = (MapButtonControl_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !mapButtonGrid )
    goto LABEL_96;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)mapButtonGrid,
          (Il2CppObject **)&eventDetailEntity,
          *(_DWORD *)(v3 + 24),
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_92;
  mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_96;
  if ( EventDetailEntity__isGroupRanking(eventDetailEntity, 0) )
  {
    v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)v3,
      Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__0__,
      0);
    ScrTerminalMap__ShowEventRaceBoostEffect(this, v11, v10, v12);
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
      v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      ScrTerminalMap__HarvestGrowthDialogOpen(this, v17, v18);
      return;
    }
    v21 = *(_DWORD *)(v3 + 24);
    if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    if ( EventInfoUIProgressControl__IsDispEventProgress(v21, 0) )
    {
      v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      ScrTerminalMap__PlayEventProgressEffect(this, v22, v23);
      return;
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsEventUiCushion(eventDetailEntity, 0) )
    {
      titleInfoControl = this->fields.titleInfoControl;
      v25 = *(_DWORD *)(v3 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      if ( !titleInfoControl )
        goto LABEL_96;
      TitleInfoControl__StartEventUICushionAnimation(titleInfoControl, v25, 1, v26, 0);
      return;
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsSpotCooltime(eventDetailEntity, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FA9E )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FA9E = 1;
      }
      mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
      }
      v27 = this->fields.titleInfoControl;
      if ( SLODWORD(mapButtonGrid[1].fields.buttons->bounds) < 1 )
      {
        v34 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v34,
          (Il2CppObject *)v3,
          Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__2__,
          0);
        if ( v27 )
        {
          v15 = v27;
          v16 = v34;
          goto LABEL_25;
        }
        goto LABEL_96;
      }
      if ( !v27 )
        goto LABEL_96;
      TitleInfoControl__RedisplayEventUI(this->fields.titleInfoControl, 0);
      v28 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      ScrTerminalMap__EventAreaImproveResultDialogOpen(this, v28, v29);
      return;
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsPersonalBoss(eventDetailEntity, 0) )
    {
      v30 = this->fields.titleInfoControl;
      v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v31,
        (Il2CppObject *)v3,
        Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__3__,
        0);
      if ( !v30 )
        goto LABEL_96;
      TitleInfoControl__CheckPersonalBossHpAnim(v30, v31, 0);
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
      if ( !byte_4C3F9BB )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3F9BB = 1;
      }
      v32 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v32 = TerminalPramsManager_TypeInfo;
      }
      if ( !v32->static_fields->_IsAutoResume_k__BackingField )
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
      v33 = this->fields.titleInfoControl;
      v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      if ( v33 )
      {
        v15 = v33;
        goto LABEL_24;
      }
LABEL_96:
      sub_1C372B4(mapButtonGrid);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C401B5 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401B5 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    if ( v35->static_fields->_EventActionQuestId_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C401B5 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401B5 = 1;
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
        v37 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v37, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
        ScrTerminalMap__SkillGetDialogOpen(this, v37, v38);
        return;
      }
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    IsEventPanel = EventDetailEntity__IsEventPanel(eventDetailEntity, 0);
    if ( IsEventPanel )
      ScrTerminalMap__StartEventQuestCheckNewOpen((ScrTerminalMap_o *)IsEventPanel, eventDetailEntity, v8);
LABEL_92:
    v40 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (CGThumbnailListItem_o *)&v40->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = 0;
    sub_1C36FFC(p_eventConquestInfos, 0, (int32_t)v8, v9);
    TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(0);
    p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = 0;
    sub_1C36FFC(p_eventHarvestGrowthInfo, 0, v43, v44);
    TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(0);
    TerminalPramsManager__MapModelClearQuestInfo_SaveData(0);
    ScrTerminalMap__EventScriptPlay(this, v45);
    return;
  }
  if ( EventDetailEntity__IsMakeFarm(eventDetailEntity, 0) )
  {
    v13 = this->fields.titleInfoControl;
    v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v3,
      Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__1__,
      0);
    if ( v13 )
    {
      v15 = v13;
LABEL_24:
      v16 = v14;
LABEL_25:
      TitleInfoControl__StartEventUIAnimation(v15, 1, v16, 0);
      return;
    }
    goto LABEL_96;
  }
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
  ScrTerminalMap__ProductivityGrowthDialogOpen(this, v19, v20);
}


void ScrTerminalMap__EventAreaImproveResultDialogOpen(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v13; // x22

  if ( (byte_4C4012A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass343_0__EventAreaImproveResultDialogOpen_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass343_0_TypeInfo);
    byte_4C4012A = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass343_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass343_0___ctor((ScrTerminalMap___c__DisplayClass343_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass343_0__EventAreaImproveResultDialogOpen_b__0__,
          0),
        !titleInfoControl) )
  {
LABEL_14:
    sub_1C372B4(v6);
  }
  TitleInfoControl__EventAreaImproveResultDialogOpen(titleInfoControl, mActionPanel, v13, 0);
}


void ScrTerminalMap__EventBoardCameraAction(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        bool isZoomUp,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x23
  ConstantStrMaster_o *v11; // x24
  float RateValue; // s8
  const MethodInfo *v13; // x2
  float v14; // s4
  UnityEngine_Vector3_o ValueVector3; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40153 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_5538/*"EVENT_BOARD_GAME_MAP_POSITION"*/);
    byte_4C40153 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  v11 = (ConstantStrMaster_o *)Instance;
  RateValue = 1.0;
  if ( !isZoomUp )
  {
    if ( !MasterData_object )
      goto LABEL_12;
    RateValue = ConstantMaster__GetRateValue(
                  (ConstantMaster_o *)MasterData_object,
                  (System_String_o *)StringLiteral_5538/*"EVENT_BOARD_GAME_MAP_POSITION"*/,
                  1.8,
                  0);
  }
  if ( !v11 )
LABEL_12:
    sub_1C372B4(Instance);
  ValueVector3 = ConstantStrMaster__GetValueVector3(v11, (System_String_o *)StringLiteral_5538/*"EVENT_BOARD_GAME_MAP_POSITION"*/, 0);
  v14 = 0.0;
  if ( !isForce )
    v14 = 0.25;
  ScrTerminalMap__EventBoardCameraAction_37139204(this, ValueVector3, RateValue, v14, callback, v13);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C40160 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_TypeInfo);
    byte_4C40160 = 1;
  }
  v11 = sub_1C372A4(ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_TypeInfo);
  ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401___ctor(
    (ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_o *)v11,
    0,
    0);
  if ( !v11 )
    sub_1C372B4(v12);
  *(_QWORD *)(v11 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 40), (int32_t)this, v13, v14);
  *(_DWORD *)(v11 + 48) = squareId;
  *(_DWORD *)(v11 + 52) = clearCount;
  *(_DWORD *)(v11 + 56) = maxClearCount;
  *(_QWORD *)(v11 + 32) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)callback, v15, v16);
  return (System_Collections_IEnumerator_o *)v11;
}


void ScrTerminalMap__EventBoardCameraAction_37139204(
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
  struct MapCamera_o *v15; // x8
  struct MapCamera_o *v16; // x8
  MapCamera_o *v17; // x20
  const MethodInfo_38CD368 *v18; // x2
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v20; // x3
  System_Nullable_float__o size; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector3__o v22; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v23; // 0:x0.16
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  z = cameraPosition.fields.z;
  y = cameraPosition.fields.y;
  x = cameraPosition.fields.x;
  if ( (byte_4C40154 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_Vector3___ctor__);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40154 = 1;
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
    v15 = this->fields.mapCamera;
    if ( !v15 )
      goto LABEL_13;
    mZoom = v15->fields.mZoom;
    if ( !mZoom )
      goto LABEL_13;
    MapZoom__Stop(mZoom, 1, 0);
    v16 = this->fields.mapCamera;
    if ( !v16 )
      goto LABEL_13;
    mZoom = (MapZoom_o *)v16->fields.mScrl;
    if ( !mZoom )
      goto LABEL_13;
    MapScroll__Stop((MapScroll_o *)mZoom, 1, 0);
    v17 = this->fields.mapCamera;
    *(_QWORD *)&v23.fields.hasValue = &v22;
    v24.fields.x = x;
    v24.fields.y = y;
    *(_QWORD *)&v23.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    v24.fields.z = z;
    *(_QWORD *)&v22.fields.hasValue = 0;
    *(_QWORD *)&v22.fields.value.fields.y = 0;
    System_Nullable_Vector3____ctor(v23, v24, v18);
    p_size = (System_Nullable_float__o)&size;
    size = 0;
    System_Nullable_float____ctor(p_size, zoomScale, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
    if ( !v17 )
LABEL_13:
      sub_1C372B4(mZoom);
    v20 = size;
    MapCamera__StartAutoWork(v17, actTime, v22, v20, 5, callback, 0);
  }
}


void ScrTerminalMap__EventScriptCaller(ScrTerminalMap_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  EventScriptEntity_o *v12; // x1
  DataManager_o *v13; // x23
  EventScriptEntity_o **v14; // x25
  __int64 v15; // x8
  int32_t v16; // w26
  int v17; // w19
  __int64 v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject **v21; // x22
  const MethodInfo *v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  __int64 v28; // x8
  int v29; // w9
  int32_t v30; // w27
  int32_t v31; // w19
  int32_t RankedGroupId; // w21
  Il2CppObject *v33; // x22
  _QWORD *monitor; // x8
  __int64 v35; // x8
  int v36; // w9
  int64_t v37; // x23
  __int64 v38; // x8
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v40; // x0
  Il2CppObject *Object_object__51154888; // x21
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *v44; // x19
  struct System_Int32_array *groupIds; // x8
  __int64 v46; // x1
  __int64 v47; // x22
  int64_t v48; // x24
  ScriptManager_CallbackFunc_o *v49; // x25
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v51; // x27
  System_Text_StringBuilder_o *v52; // x25
  unsigned __int64 v53; // x26
  BalanceConfig_c *v54; // x0
  struct System_Int32_array *giftIds; // x19
  Il2CppObject *v56; // x28
  __int64 v57; // x8
  __int64 v58; // x21
  int v59; // w19
  unsigned int v60; // w29
  __int64 v61; // x22
  __int64 v62; // x8
  __int64 v63; // x22
  __int64 v64; // t1
  System_String_o *v65; // x24
  Il2CppObject *v66; // x23
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  Il2CppObject *v73; // x20
  Il2CppObject *v74; // x0
  Il2CppObject *v75; // x0
  EventRaceMaster_o *v76; // x21
  unsigned __int64 v77; // x19
  __int64 v78; // x24
  __int64 v79; // x28
  __int64 v80; // x20
  float GoalRate; // s0
  float v82; // s0
  __int64 v83; // x8
  System_Text_StringBuilder_o *v84; // x21
  __int64 v85; // x8
  __int64 v86; // x28
  int v87; // w26
  unsigned int v88; // w19
  __int64 v89; // x29
  __int64 v90; // x8
  __int64 v91; // x29
  __int64 v92; // t1
  System_Text_StringBuilder_o *v93; // x20
  System_String_o *v94; // x21
  Il2CppObject *v95; // x24
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  __int64 v99; // x5
  __int64 v100; // x6
  __int64 v101; // x7
  Il2CppObject *v102; // x23
  Il2CppObject *v103; // x0
  TerminalPramsManager_c *v104; // x0
  System_Text_StringBuilder_o *v105; // x26
  System_Collections_Generic_List_object__o *eventScriptMessages; // x21
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  struct System_Object_array *items; // x8
  _QWORD *v110; // x9
  __int64 size; // x10
  __int64 v112; // x1
  Il2CppClass **v113; // x0
  struct System_String_o *name; // x21
  Il2CppObject *v115; // x28
  System_Collections_Generic_List_object__o *v116; // x20
  System_String_o *v117; // x23
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  System_Object_array *v120; // x27
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  Il2CppObject *v125; // x21
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  Il2CppObject *v128; // x21
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x1
  Il2CppClass **v135; // x0
  Il2CppObject *Component_object; // x0
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  __int64 v139; // x8
  __int64 v140; // x8
  int32_t v141; // w23
  EventRaceResultEffect_o *v142; // x20
  System_Int64_array *v143; // x21
  System_Action_o *v144; // x24
  __int64 v145; // x0
  GiftMaster_o *v146; // [xsp+10h] [xbp-E0h]
  UnityEngine_GameObject_o *v147; // [xsp+18h] [xbp-D8h]
  __int64 v148; // [xsp+20h] [xbp-D0h]
  DataManager_o *v149; // [xsp+28h] [xbp-C8h]
  SpotPathMaster_o *v150; // [xsp+30h] [xbp-C0h]
  System_Int64_array *restDistances; // [xsp+38h] [xbp-B8h]
  __int64 v152; // [xsp+40h] [xbp-B0h]
  int32_t termId; // [xsp+48h] [xbp-A8h]
  int32_t termIda[2]; // [xsp+48h] [xbp-A8h]
  int32_t eventId; // [xsp+54h] [xbp-9Ch]
  __int64 v156; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *v157; // [xsp+60h] [xbp-90h] BYREF
  int64_t goalTime; // [xsp+68h] [xbp-88h] BYREF
  System_Int64_array *v159; // [xsp+70h] [xbp-80h] BYREF
  EventRaceEntity_o *entity; // [xsp+78h] [xbp-78h] BYREF

  if ( (byte_4C40136 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventRaceResultEffect___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass356_0__EventScriptCaller_b__1__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass356_0_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass356_1__EventScriptCaller_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass356_1_TypeInfo);
    sub_1C37058(&StringLiteral_6240/*"EventRaceResultEffect_{0}"*/);
    sub_1C37058(&StringLiteral_5668/*"EVENT_RACE_RESULT_REWARD_DLG_ITEM"*/);
    sub_1C37058(&StringLiteral_5669/*"EVENT_RACE_RESULT_REWARD_DLG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_5670/*"EVENT_RACE_RESULT_REWARD_DLG_TITLE"*/);
    byte_4C40136 = 1;
  }
  v159 = 0;
  entity = 0;
  v157 = 0;
  goalTime = 0;
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass356_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass356_0___ctor((ScrTerminalMap___c__DisplayClass356_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_144;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  eventScriptCallingList = this->fields.eventScriptCallingList;
  if ( !eventScriptCallingList )
    goto LABEL_144;
  if ( LODWORD(eventScriptCallingList->max_length) <= index )
    goto LABEL_107;
  v12 = eventScriptCallingList->m_Items[index];
  v13 = (DataManager_o *)Instance;
  *(_QWORD *)(v5 + 24) = v12;
  v14 = (EventScriptEntity_o **)(v5 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v12, v9, v10);
  v15 = *(_QWORD *)(v5 + 24);
  if ( !v15 )
    goto LABEL_144;
  v16 = *(_DWORD *)(v15 + 16);
  v17 = *(_DWORD *)(v15 + 40);
  v18 = sub_1C372A4(ScrTerminalMap___c__DisplayClass356_1_TypeInfo);
  ScrTerminalMap___c__DisplayClass356_1___ctor((ScrTerminalMap___c__DisplayClass356_1_o *)v18, 0);
  if ( !v18 )
    goto LABEL_144;
  *(_QWORD *)(v18 + 24) = v5;
  v21 = (Il2CppObject **)(v18 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 24), v5, v19, v20);
  if ( !*(_QWORD *)(v18 + 24) )
    goto LABEL_144;
  v28 = *(_QWORD *)(*(_QWORD *)(v18 + 24) + 24LL);
  if ( !v28 )
    goto LABEL_144;
  v29 = *(_DWORD *)(v28 + 28);
  v30 = v17 % 100;
  if ( v29 != 2 )
  {
    if ( v29 == 1 && *(_QWORD *)(v28 + 32) )
    {
      if ( !v13 )
        goto LABEL_144;
      v31 = *(_DWORD *)(v28 + 44);
      Instance = (__int64)DataManager__GetMasterData_object_(
                            v13,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
      if ( !Instance )
        goto LABEL_144;
      RankedGroupId = EventRaceResultMaster__GetRankedGroupId(
                        (EventRaceResultMaster_o *)Instance,
                        v16,
                        v30,
                        v31,
                        &goalTime,
                        0);
      Instance = (__int64)DataManager__GetMasterData_object_(
                            v13,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceMaster___);
      if ( !Instance )
        goto LABEL_144;
      Instance = EventRaceMaster__GetGroupIndex((EventRaceMaster_o *)Instance, v16, v30, RankedGroupId, 0);
      if ( (Instance & 0x80000000) != 0 )
      {
        v33 = *v21;
      }
      else
      {
        v33 = *v21;
        if ( !v33 )
          goto LABEL_144;
        monitor = v33[1].monitor;
        if ( !monitor )
          goto LABEL_144;
        v35 = monitor[4];
        if ( !v35 )
          goto LABEL_144;
        v36 = *(_DWORD *)(v35 + 24);
        if ( (int)Instance < v36 )
        {
          if ( (unsigned int)Instance < v36 )
          {
            v37 = *(_QWORD *)(v35 + 8LL * (unsigned int)Instance + 32);
LABEL_44:
            v48 = goalTime;
            v49 = (ScriptManager_CallbackFunc_o *)sub_1C372A4(ScriptManager_CallbackFunc_TypeInfo);
            ScriptManager_CallbackFunc___ctor(
              v49,
              v33,
              Method_ScrTerminalMap___c__DisplayClass356_0__EventScriptCaller_b__1__,
              0);
            if ( !ScriptManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            ScriptManager__PlayRaceResult(v37, v16, v30, RankedGroupId, v31, v48, v49, 0, 0);
            return;
          }
          goto LABEL_107;
        }
      }
      v37 = 0;
      goto LABEL_44;
    }
LABEL_41:
    ScrTerminalMap__OnEndEventScripts(this, *v14, v22);
    return;
  }
  v38 = *(_QWORD *)(v28 + 32);
  if ( !v38 )
    goto LABEL_144;
  if ( !*(_DWORD *)(v38 + 24) )
    goto LABEL_107;
  mapAssetData = this->fields.mapAssetData;
  v156 = *(_QWORD *)(v38 + 32);
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v156, v22, v23, v24, v25, v26, v27);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_6240/*"EventRaceResultEffect_{0}"*/, v40, 0);
  if ( !mapAssetData )
    goto LABEL_144;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              mapAssetData,
                              (System_String_o *)Instance,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    goto LABEL_41;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        Object_object__51154888,
                        (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_144;
  mTerminalList = terminalScene->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_144;
  v44 = (UnityEngine_GameObject_o *)Instance;
  GameObjectExtensions__SafeSetParent_36138184(
    (UnityEngine_GameObject_o *)Instance,
    mTerminalList->fields.mActionPanel,
    0);
  GameObjectExtensions__ResetLocalScale(v44, 0);
  GameObjectExtensions__ResetLocalPosition(v44, 0);
  if ( !v13 )
    goto LABEL_144;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v13,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !Instance )
    goto LABEL_144;
  if ( !EventRaceMaster__TryGetEntity((EventRaceMaster_o *)Instance, &entity, v16, v30, 0) )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v13,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_144;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, v16, v30, &v159, 0);
  if ( !Instance )
    goto LABEL_144;
  if ( !entity )
    goto LABEL_144;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_144;
  v46 = *(unsigned int *)(Instance + 24);
  v47 = Instance;
  if ( (int)v46 < SLODWORD(groupIds->max_length) )
    goto LABEL_41;
  termId = v30;
  v147 = v44;
  v148 = v18;
  eventId = v16;
  restDistances = (System_Int64_array *)sub_1C37100(long___TypeInfo, v46);
  MasterData_object = DataManager__GetMasterData_object_(
                        v13,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  v51 = DataManager__GetMasterData_object_(
          v13,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  v149 = v13;
  v150 = (SpotPathMaster_o *)DataManager__GetMasterData_object_(
                               v13,
                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotPathMaster___);
  v52 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v52, 0);
  v53 = 0;
  v152 = v47;
  while ( 1 )
  {
    v54 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v54 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v53 >= v54->static_fields->raceRewardRankMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_144;
    if ( v53 >= *(unsigned int *)(v47 + 24) )
      goto LABEL_107;
    giftIds = entity->fields.giftIds;
    Instance = EventRaceEntity__GetGroupIdx(entity, *(_DWORD *)(v47 + 4 * v53 + 32), 0);
    if ( !giftIds )
      goto LABEL_144;
    if ( (unsigned int)Instance >= LODWORD(giftIds->max_length) )
      goto LABEL_107;
    if ( !MasterData_object )
      goto LABEL_144;
    v56 = MasterData_object;
    Instance = (__int64)GiftMaster__GetGiftListById(
                          (GiftMaster_o *)MasterData_object,
                          giftIds->m_Items[(int)Instance],
                          0);
    if ( !Instance )
      goto LABEL_144;
    v57 = *(_QWORD *)(Instance + 24);
    v58 = Instance;
    v59 = v57 - 1;
    if ( (int)v57 >= 1 )
    {
      v60 = 0;
      while ( 1 )
      {
        v61 = v58 + 8LL * (int)v60;
        v64 = *(_QWORD *)(v61 + 32);
        v63 = v61 + 32;
        v62 = v64;
        if ( !v64 || !v51 )
          goto LABEL_144;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v51,
                     &v157,
                     *(_DWORD *)(v62 + 24),
                     (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_RACE_RESULT_REWARD_DLG_ITEM"*/, 0);
          if ( !v157 )
            goto LABEL_144;
          v65 = (System_String_o *)Instance;
          v66 = (Il2CppObject *)v157[1].monitor;
          Instance = (__int64)ItemType__GetCountableString((int32_t)v157[3].klass, 0);
          if ( v60 >= *(_DWORD *)(v58 + 24) )
            goto LABEL_107;
          if ( !*(_QWORD *)v63 )
            goto LABEL_144;
          v73 = (Il2CppObject *)Instance;
          LODWORD(v156) = *(_DWORD *)(*(_QWORD *)v63 + 28LL);
          v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v156, v67, v68, v69, v70, v71, v72);
          Instance = (__int64)System_String__Format_63603016(v65, v66, v73, v74, 0);
          if ( !v52 )
            goto LABEL_144;
          Instance = (__int64)System_Text_StringBuilder__Append_63646720(v52, (System_String_o *)Instance, 0);
        }
        if ( v59 == v60 )
          break;
        if ( ++v60 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_107;
      }
    }
    v47 = v152;
    ++v53;
    MasterData_object = v56;
  }
  v146 = (GiftMaster_o *)MasterData_object;
  v75 = DataManager__GetMasterData_object_(
          v149,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( (int)*(_QWORD *)(v47 + 24) >= 1 )
  {
    v76 = (EventRaceMaster_o *)v75;
    v77 = 0;
    v78 = (unsigned int)*(_QWORD *)(v47 + 24) - 1LL;
    v79 = v47 + 32;
    while ( 1 )
    {
      Instance = (__int64)v150;
      if ( !v150 )
        break;
      Instance = (__int64)SpotPathMaster__GetSpotPathEntity(v150, eventId, termId, *(_DWORD *)(v79 + 4 * v77), 0);
      if ( v77 >= *(unsigned int *)(v47 + 24) )
        goto LABEL_107;
      if ( !v76 )
        break;
      v80 = Instance;
      GoalRate = EventRaceMaster__GetGoalRate(v76, eventId, termId, *(_DWORD *)(v79 + 4 * v77), 0);
      if ( !v80 )
        break;
      v82 = fmaxf(fminf(1.0 - GoalRate, 1.0), 0.0) * (float)*(__int64 *)(v80 + 40);
      v83 = (__int64)v82;
      if ( v82 == INFINITY )
        v83 = 0x8000000000000000LL;
      if ( v83 >= 9999999 )
        v83 = 9999999;
      if ( !restDistances )
        break;
      if ( v77 >= LODWORD(restDistances->max_length) )
        goto LABEL_107;
      restDistances->m_Items[v77] = v83 & ~(v83 >> 63);
      if ( v78 == v77 )
        goto LABEL_88;
      if ( ++v77 >= *(unsigned int *)(v47 + 24) )
        goto LABEL_107;
    }
LABEL_144:
    sub_1C372B4(Instance);
  }
LABEL_88:
  v84 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v84, 0);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v149,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
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
  if ( !v146 )
    goto LABEL_144;
  Instance = (__int64)GiftMaster__GetGiftListById(v146, entity->fields.bonusGiftId, 0);
  if ( !Instance )
    goto LABEL_144;
  v85 = *(_QWORD *)(Instance + 24);
  v86 = Instance;
  v87 = v85 - 1;
  if ( (int)v85 >= 1 )
  {
    v88 = 0;
    while ( 1 )
    {
      v89 = v86 + 8LL * (int)v88;
      v92 = *(_QWORD *)(v89 + 32);
      v91 = v89 + 32;
      v90 = v92;
      if ( !v92 || !v51 )
        goto LABEL_144;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v51,
                   &v157,
                   *(_DWORD *)(v90 + 24),
                   (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        v93 = v84;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_RACE_RESULT_REWARD_DLG_ITEM"*/, 0);
        if ( !v157 )
          goto LABEL_144;
        v94 = (System_String_o *)Instance;
        v95 = (Il2CppObject *)v157[1].monitor;
        Instance = (__int64)ItemType__GetCountableString((int32_t)v157[3].klass, 0);
        if ( v88 >= *(_DWORD *)(v86 + 24) )
          goto LABEL_107;
        if ( !*(_QWORD *)v91 )
          goto LABEL_144;
        v102 = (Il2CppObject *)Instance;
        v156 = *(_QWORD *)termIda * *(int *)(*(_QWORD *)v91 + 28LL);
        v103 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v156, v96, v97, v98, v99, v100, v101);
        Instance = (__int64)System_String__Format_63603016(v94, v95, v102, v103, 0);
        if ( !v93 )
          goto LABEL_144;
        v84 = v93;
        Instance = (__int64)System_Text_StringBuilder__Append_63646720(v93, (System_String_o *)Instance, 0);
      }
      if ( v87 == v88 )
        break;
      if ( ++v88 >= *(_DWORD *)(v86 + 24) )
        goto LABEL_107;
    }
  }
  v104 = TerminalPramsManager_TypeInfo;
  v105 = v84;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v104 = TerminalPramsManager_TypeInfo;
  }
  eventScriptMessages = (System_Collections_Generic_List_object__o *)v104->static_fields->eventScriptMessages;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5670/*"EVENT_RACE_RESULT_REWARD_DLG_TITLE"*/, 0);
  if ( !eventScriptMessages )
    goto LABEL_144;
  items = eventScriptMessages->fields._items;
  v110 = Method_System_Collections_Generic_List_string__Add__;
  ++eventScriptMessages->fields._version;
  if ( !items )
    goto LABEL_144;
  size = eventScriptMessages->fields._size;
  v112 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventScriptMessages,
      (Il2CppObject *)Instance,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v113 = &items->obj.klass + size;
    eventScriptMessages->fields._size = size + 1;
    v113[4] = (Il2CppClass *)v112;
    sub_1C36FFC((CGThumbnailListItem_o *)(v113 + 4), v112, v107, v108);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v149,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_144;
  Instance = (__int64)EventMaster__GetEventName((EventMaster_o *)Instance, eventId, 0);
  if ( !entity )
    goto LABEL_144;
  name = entity->fields.name;
  v115 = (Il2CppObject *)Instance;
  v116 = (System_Collections_Generic_List_object__o *)TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_5669/*"EVENT_RACE_RESULT_REWARD_DLG_MESSAGE"*/, 0);
  Instance = sub_1C37100(object___TypeInfo, 4);
  if ( !Instance )
    goto LABEL_144;
  v120 = (System_Object_array *)Instance;
  if ( v115 )
  {
    Instance = sub_1C37194(v115, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_145;
  }
  if ( !LODWORD(v120->max_length) )
    goto LABEL_107;
  v120->m_Items[0] = v115;
  sub_1C36FFC((CGThumbnailListItem_o *)v120->m_Items, (int32_t)v115, v118, v119);
  if ( name )
  {
    Instance = sub_1C37194(name, v120->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_145;
  }
  if ( LODWORD(v120->max_length) <= 1 )
    goto LABEL_107;
  v120->m_Items[1] = (Il2CppObject *)name;
  sub_1C36FFC((CGThumbnailListItem_o *)&v120->m_Items[1], (int32_t)name, v121, v122);
  if ( !v52 )
    goto LABEL_144;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v52->klass->vtable._3_ToString.methodPtr)(
               v52,
               v52->klass->vtable._3_ToString.method);
  v125 = (Il2CppObject *)Instance;
  if ( Instance )
  {
    Instance = sub_1C37194(Instance, v120->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_145;
  }
  if ( LODWORD(v120->max_length) <= 2 )
    goto LABEL_107;
  v120->m_Items[2] = v125;
  sub_1C36FFC((CGThumbnailListItem_o *)&v120->m_Items[2], (int32_t)v125, v123, v124);
  if ( !v105 )
    goto LABEL_144;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v105->klass->vtable._3_ToString.methodPtr)(
               v105,
               v105->klass->vtable._3_ToString.method);
  v128 = (Il2CppObject *)Instance;
  if ( Instance )
  {
    Instance = sub_1C37194(Instance, v120->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_145:
      v145 = sub_1C372D8();
      sub_1C37180(v145, 0);
    }
  }
  if ( LODWORD(v120->max_length) <= 3 )
LABEL_107:
    sub_1C372BC(Instance);
  v120->m_Items[3] = v128;
  sub_1C36FFC((CGThumbnailListItem_o *)&v120->m_Items[3], (int32_t)v128, v126, v127);
  Instance = (__int64)System_String__Format_63603084(v117, v120, 0);
  if ( !v116 )
    goto LABEL_144;
  v131 = v116->fields._items;
  v132 = Method_System_Collections_Generic_List_string__Add__;
  ++v116->fields._version;
  if ( !v131 )
    goto LABEL_144;
  v133 = v116->fields._size;
  v134 = Instance;
  if ( (unsigned int)v133 >= LODWORD(v131->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v116,
      (Il2CppObject *)Instance,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v135 = &v131->obj.klass + v133;
    v116->fields._size = v133 + 1;
    v135[4] = (Il2CppClass *)v134;
    sub_1C36FFC((CGThumbnailListItem_o *)(v135 + 4), v134, v129, v130);
  }
  if ( !v147 )
    goto LABEL_144;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v147,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventRaceResultEffect___);
  *(_QWORD *)(v148 + 16) = Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v148 + 16), (int32_t)Component_object, v137, v138);
  v139 = *(_QWORD *)(v148 + 24);
  if ( !v139 )
    goto LABEL_144;
  v140 = *(_QWORD *)(v139 + 24);
  if ( !v140 )
    goto LABEL_144;
  v141 = *(_DWORD *)(v140 + 16);
  v142 = *(EventRaceResultEffect_o **)(v148 + 16);
  v143 = v159;
  v144 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v144,
    (Il2CppObject *)v148,
    Method_ScrTerminalMap___c__DisplayClass356_1__EventScriptCaller_b__0__,
    0);
  if ( !v142 )
    goto LABEL_144;
  EventRaceResultEffect__SetUp(v142, v141, (System_Int32_array *)v47, v143, restDistances, v144, 0);
}


void ScrTerminalMap__EventScriptPlay(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  Il2CppObject *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x1

  if ( (byte_4C40132 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__EventScriptPlay_b__352_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40132 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401BD )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401BD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActionQuestId_k__BackingField = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  eventScriptCallingList = this->fields.eventScriptCallingList;
  if ( eventScriptCallingList && eventScriptCallingList->max_length )
  {
    this->fields.eventScriptCallingIdx = 0;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v9 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
    v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrTerminalMap__EventScriptPlay_b__352_0__, 0);
    if ( v8 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v8, 2, DEFAULT_FADE_TIME, v11, 0);
      return;
    }
LABEL_17:
    sub_1C372B4(Instance);
  }
  this->fields.eventScriptCallingList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventScriptCallingList, 0, v5, v6);
  ScrTerminalMap__OnEveryActionEnd(this, v12);
}


void ScrTerminalMap__FadeOutSpotMask(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x0
  UITweener_o *v4; // x20
  EventDelegate_Callback_o *v5; // x21

  if ( (byte_4C40120 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C37058(&Method_ScrTerminalMap__FadeOutSpotMask_b__328_0__);
    byte_4C40120 = 1;
  }
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(spotMaskObj, 0) )
  {
    this->fields.isFadingSpotmask = 1;
    GameObjectExtensions__SafeGetComponent_object_(
      this->fields.spotMaskObj,
      (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    v4 = (UITweener_o *)TweenAlpha__Begin(this->fields.spotMaskObj, 0.25, 0.0, 0);
    v5 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap__FadeOutSpotMask_b__328_0__, 0);
    if ( v4 )
    {
      UITweener__SetOnFinished(v4, v5, 0);
      return;
    }
LABEL_8:
    sub_1C372B4(spotMaskObj);
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

  if ( (byte_4C40148 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40148 = 1;
  }
  if ( ScrTerminalMap__IsEventBoardGame(this, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C401A8 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401A8 = 1;
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
    if ( !byte_4C401A8 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401A8 = 1;
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
  UnityEngine_GameObject_o *spotMaskObj; // x0

  if ( (byte_4C4011D & 1) == 0 )
  {
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4C4011D = 1;
  }
  GameObjectExtensions__SafeGetComponent_object_(
    this->fields.spotMaskObj,
    (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  TweenAlpha__Begin(this->fields.spotMaskObj, 0.0, 0.0, 0);
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj
    || (UnityEngine_GameObject__SetActive(spotMaskObj, 0, 0),
        (spotMaskObj = (UnityEngine_GameObject_o *)this->fields.spotLargeComponent) == 0) )
  {
    sub_1C372B4(spotMaskObj);
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
    sub_1C372B4(titleInfoControl);
  }
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)titleInfoControl, 0, 0);
  MainMenuBar__FrameIn(0, 0);
}


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
    sub_1C372B4(titleInfoControl);
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

  if ( (byte_4C400EE & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C400EE = 1;
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
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  int32_t ReferrerMapId; // w21
  ScrTerminalMap_c *v16; // x0
  System_String_o *ASSETS_NAME_PACK_MULTI_MAP; // x20
  Il2CppObject *v18; // x0
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C400F1 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C400F1 = 1;
  }
  if ( !mapEntity )
    sub_1C372B4(this);
  OverwriteMapAssetId = MapEntity__GetOverwriteMapAssetId(mapEntity, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(OverwriteMapAssetId, 0);
  if ( !IsNullOrEmpty )
    return ScrTerminalMap__GetAssetName((ScrTerminalMap_o *)IsNullOrEmpty, (Il2CppObject *)OverwriteMapAssetId, v8);
  ReferrerMapId = MapEntity__GetReferrerMapId(mapEntity, 0);
  if ( ReferrerMapId <= 0 )
    ReferrerMapId = mapEntity->fields.id;
  v16 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v16 = ScrTerminalMap_TypeInfo;
  }
  ASSETS_NAME_PACK_MULTI_MAP = v16->static_fields->ASSETS_NAME_PACK_MULTI_MAP;
  v20 = ReferrerMapId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v9, v10, v11, v12, v13, v14);
  return System_String__Format_63602948(ASSETS_NAME_PACK_MULTI_MAP, assetId, v18, 0);
}


System_String_o *ScrTerminalMap__GetAssetName(ScrTerminalMap_o *this, Il2CppObject *assetId, const MethodInfo *method)
{
  ScrTerminalMap_c *v4; // x0

  if ( (byte_4C400F0 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C400F0 = 1;
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

  if ( (byte_4C40165 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8907/*"MapGimmickEffect_GappolyPiece_4"*/);
    sub_1C37058(&StringLiteral_8905/*"MapGimmickEffect_GappolyPiece_2"*/);
    sub_1C37058(&StringLiteral_8904/*"MapGimmickEffect_GappolyPiece_1"*/);
    sub_1C37058(&StringLiteral_8906/*"MapGimmickEffect_GappolyPiece_3"*/);
    byte_4C40165 = 1;
  }
  if ( endSquareId != 11 )
    goto LABEL_7;
  if ( startSquareId == 6 )
  {
    v6 = (System_String_o **)&StringLiteral_8906/*"MapGimmickEffect_GappolyPiece_3"*/;
    return *v6;
  }
  if ( startSquareId == 16 )
  {
    v6 = (System_String_o **)&StringLiteral_8907/*"MapGimmickEffect_GappolyPiece_4"*/;
  }
  else
  {
LABEL_7:
    v6 = (System_String_o **)&StringLiteral_8904/*"MapGimmickEffect_GappolyPiece_1"*/;
    if ( (unsigned int)(startSquareId - 1) > 9 )
      v6 = (System_String_o **)&StringLiteral_8905/*"MapGimmickEffect_GappolyPiece_2"*/;
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
  DataManager_o *v10; // x23
  Il2CppObject *MasterData_object; // x21
  struct System_Collections_Generic_List_QuestReleaseEntity__o *EventBoardQuestReleaseList_k__BackingField; // x9
  UserQuestMaster_o *v13; // x22
  Il2CppClass *v14; // x28
  _BOOL8 v15; // x0
  int32_t klass; // w24
  NetworkManager_c *v17; // x0
  int32_t v18; // w24
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-A8h] BYREF
  UserQuestEntity_o *v20; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C40166 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C40166 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v20 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this->fields.mWarInfo
    || (v10 = (DataManager_o *)Instance,
        Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(this->fields.mWarInfo, 0),
        !v10)
    || (MasterData_object = DataManager__GetMasterData_object_(
                              v10,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___),
        Instance = DataManager__GetMasterData_object_(
                     v10,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        *clearCount = 0,
        *maxClearCount = 0,
        (EventBoardQuestReleaseList_k__BackingField = this->fields._EventBoardQuestReleaseList_k__BackingField) == 0) )
  {
    sub_1C372B4(Instance);
  }
  v13 = (UserQuestMaster_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)EventBoardQuestReleaseList_k__BackingField,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v14 = (Il2CppClass *)squareId;
  v22 = v19;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v15 )
      break;
    if ( !v22.fields._current )
      sub_1C372B4(v15);
    if ( v22.fields._current[2].klass == v14 )
    {
      if ( !MasterData_object )
        sub_1C372B4(v15);
      klass = (int32_t)v22.fields._current[1].klass;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             &entity,
             klass,
             (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C372B4(0);
        if ( !QuestEntity__HasFlag((QuestEntity_o *)entity, 0x8000000000LL, 0) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          v17 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v17 = NetworkManager_TypeInfo;
          }
          if ( !v13 )
            sub_1C372B4(v17);
          if ( UserQuestMaster__TryGetEntity(v13, &v20, v17->static_fields->userIdNumber, klass, 0) )
          {
            if ( !v20 )
              sub_1C372B4(0);
            v18 = *clearCount;
            *clearCount = UserQuestEntity__getClearNum(v20, 0) + v18;
          }
          ++*maxClearCount;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
}


int32_t ScrTerminalMap__GetEventBoardDiceVoiceServantId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *EventBoardDiceVoiceInfo_k__BackingField; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v4; // x0
  Il2CppObject *Item; // x0
  int32_t result; // w0
  ScrTerminalMap_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C4016C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_KeyValuePair_string__object____);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_23868/*"svtId"*/);
    byte_4C4016C = 1;
  }
  EventBoardDiceVoiceInfo_k__BackingField = this->fields._EventBoardDiceVoiceInfo_k__BackingField;
  if ( !EventBoardDiceVoiceInfo_k__BackingField
    || !System_Linq_Enumerable__Any_KeyValuePair_object__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventBoardDiceVoiceInfo_k__BackingField,
          (const MethodInfo_30F2D70 *)Method_System_Linq_Enumerable_Any_KeyValuePair_string__object____) )
  {
    return 0;
  }
  v4 = this->fields._EventBoardDiceVoiceInfo_k__BackingField;
  if ( !v4 )
    sub_1C372B4(0);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v4,
           (Il2CppObject *)StringLiteral_23868/*"svtId"*/,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return System_Int32__Parse((System_String_o *)Item, 0);
  sub_1C37574(Item);
  ScrTerminalMap__SetupEventBoardGame(v7, v8);
  return result;
}


int32_t ScrTerminalMap__GetEventBoardGameSpotId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0
  Il2CppObject *Instance; // x0
  MapControl_WarInfo_o *v5; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C40140 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C40140 = 1;
  }
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  if ( mWarInfo )
  {
    if ( MapControl_WarInfo__GetEventId(mWarInfo, 0) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_13;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v5 = this->fields.mWarInfo;
      if ( !v5 )
        goto LABEL_13;
      v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(v5, 0);
      if ( !v6 )
        goto LABEL_13;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v6,
             &entity,
             (int32_t)Instance,
             (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          LODWORD(mWarInfo) = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)entity, 0);
          return (int)mWarInfo;
        }
LABEL_13:
        sub_1C372B4(Instance);
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
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  bool v12; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C4016A & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_23630/*"square_{0:D2}"*/);
    byte_4C4016A = 1;
  }
  EventBoardGameObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardGameObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality(EventBoardGameObj_k__BackingField, 0, 0);
  result = 0;
  if ( !v12 )
  {
    v16 = index;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v6, v7, v8, v9, v10, v11);
    v15 = System_String__Format((System_String_o *)StringLiteral_23630/*"square_{0:D2}"*/, v14, 0);
    return GameObjectExtensions__FindDeepWithLog(this->fields._EventBoardGameObj_k__BackingField, v15, 0, 0);
  }
  return result;
}


UnityEngine_Vector3_o ScrTerminalMap__GetEventBoardSquarePos(
        ScrTerminalMap_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EventBoardSquareObject; // x19

  if ( (byte_4C40169 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40169 = 1;
  }
  EventBoardSquareObject = ScrTerminalMap__GetEventBoardSquareObject(this, index, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EventBoardSquareObject, 0, 0) )
    return GameObjectExtensions__GetPosition(EventBoardSquareObject, 0);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  return UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
}


SrcSpotBasePrefab_o *ScrTerminalMap__GetFocusSpot(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UnityEngine_Object_o *monitor; // x20

  if ( (byte_4C400CF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C400CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  System_String_o *v11; // x0
  int32_t pathId; // w10
  System_String_o *ASSETS_NAME_MAP_GIMMICK_PATH; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  Il2CppObject *Object_object__51154888; // x20
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C4010D & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C4010D = 1;
  }
  v11 = (System_String_o *)ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  if ( !mapGimmickPathEnt
    || (pathId = mapGimmickPathEnt->fields.pathId,
        ASSETS_NAME_MAP_GIMMICK_PATH = ScrTerminalMap_TypeInfo->static_fields->ASSETS_NAME_MAP_GIMMICK_PATH,
        v18 = pathId,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, assetData, multiAssetData, method, v5, v6, v7),
        v11 = System_String__Format(ASSETS_NAME_MAP_GIMMICK_PATH, v14, 0),
        !assetData) )
  {
    sub_1C372B4(v11);
  }
  v15 = v11;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              assetData,
                              v11,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
  {
    if ( !multiAssetData )
      return 0;
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                multiAssetData,
                                v15,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
      return 0;
  }
  return (UnityEngine_GameObject_o *)Object_object__51154888;
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

  if ( (byte_4C4013E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C4013E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
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
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  int32_t ReferrerMapId; // w21
  ScrTerminalMap_c *v16; // x0
  System_String_o *ASSETS_NAME_ATLAS_MULTI_MAP; // x20
  Il2CppObject *v18; // x0
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C400EF & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C400EF = 1;
  }
  if ( !mapEntity )
    sub_1C372B4(this);
  OverwriteMapAssetId = MapEntity__GetOverwriteMapAssetId(mapEntity, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(OverwriteMapAssetId, 0);
  if ( !IsNullOrEmpty )
    return ScrTerminalMap__GetAssetAtlasName((ScrTerminalMap_o *)IsNullOrEmpty, (Il2CppObject *)OverwriteMapAssetId, v8);
  ReferrerMapId = MapEntity__GetReferrerMapId(mapEntity, 0);
  if ( ReferrerMapId <= 0 )
    ReferrerMapId = mapEntity->fields.id;
  v16 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v16 = ScrTerminalMap_TypeInfo;
  }
  ASSETS_NAME_ATLAS_MULTI_MAP = v16->static_fields->ASSETS_NAME_ATLAS_MULTI_MAP;
  v20 = ReferrerMapId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v9, v10, v11, v12, v13, v14);
  return System_String__Format_63602948(ASSETS_NAME_ATLAS_MULTI_MAP, assetId, v18, 0);
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

  if ( (byte_4C40101 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    byte_4C40101 = 1;
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
      return UnityEngine_PlayerPrefs__GetInt_71224996(v6, 0);
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
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
        if ( mWarInfo )
        {
          if ( HIDWORD(mWarInfo->fields._items) != this->fields.currentMapId )
            return -1;
          goto LABEL_11;
        }
      }
    }
LABEL_15:
    sub_1C372B4(mWarInfo);
  }
LABEL_11:
  v8 = ScrTerminalMap__GetSaveKey_PlayerIcon(this, 0, v4);
  if ( UnityEngine_PlayerPrefs__HasKey(v8, 0) )
  {
    v6 = v8;
    return UnityEngine_PlayerPrefs__GetInt_71224996(v6, 0);
  }
  return -1;
}


System_String_o *ScrTerminalMap__GetSaveKey_BaseMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  int v2; // w19
  System_String_o *v3; // x0

  v2 = (int)this;
  if ( (byte_4C400CE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13695/*"TerminalBaseMap"*/);
    byte_4C400CE = 1;
  }
  v3 = System_Int32__ToString(v2 + 44, 0);
  return System_String__Concat_63561656((System_String_o *)StringLiteral_13695/*"TerminalBaseMap"*/, v3, 0);
}


System_String_o *ScrTerminalMap__GetSaveKey_PlayerIcon(
        ScrTerminalMap_o *this,
        bool isMultiMap,
        const MethodInfo *method)
{
  int32_t currentWarId; // w19
  int32_t currentMapId; // w20

  if ( (byte_4C400CA & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C400CA = 1;
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

  if ( (byte_4C400CC & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C400CC = 1;
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
  System_String_o *v6; // x19
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4C40103 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SrcSpotBasePrefab_TypeInfo);
    byte_4C40103 = 1;
  }
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  GobjName = SrcSpotBasePrefab__GetGobjName(spotId, 0);
  if ( !this->fields.mapModelManager )
LABEL_17:
    sub_1C372B4(GobjName);
  v6 = GobjName;
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
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)GobjName, v6, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  GobjName = (System_String_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
  if ( ((unsigned __int8)GobjName & 1) == 0 )
    return 0;
  if ( !v7 )
    goto LABEL_17;
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  System_String_o *v11; // x0
  int32_t pathId; // w10
  System_String_o *ASSETS_NAME_SPOT_PATH; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  Il2CppObject *Object_object__51154888; // x20
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C4010C & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C4010C = 1;
  }
  v11 = (System_String_o *)ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  if ( !spotPathEnt
    || (pathId = spotPathEnt->fields.pathId,
        ASSETS_NAME_SPOT_PATH = ScrTerminalMap_TypeInfo->static_fields->ASSETS_NAME_SPOT_PATH,
        v18 = pathId,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, assetData, multiAssetData, method, v5, v6, v7),
        v11 = System_String__Format(ASSETS_NAME_SPOT_PATH, v14, 0),
        !assetData) )
  {
    sub_1C372B4(v11);
  }
  v15 = v11;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              assetData,
                              v11,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
  {
    if ( !multiAssetData )
      return 0;
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                multiAssetData,
                                v15,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
      return 0;
  }
  return (UnityEngine_GameObject_o *)Object_object__51154888;
}


SrcSpotBasePrefab_o *ScrTerminalMap__GetSpotPrefab(ScrTerminalMap_o *this, int32_t spotId, const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass292_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *spotList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C40102 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
    sub_1C37058(&System_Predicate_SrcSpotBasePrefab__TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass292_0__GetSpotPrefab_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass292_0_TypeInfo);
    byte_4C40102 = 1;
  }
  v5 = (ScrTerminalMap___c__DisplayClass292_0_o *)sub_1C372A4(ScrTerminalMap___c__DisplayClass292_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass292_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.spotId = spotId,
        spotList = (System_Collections_Generic_List_object__o *)this->fields.spotList,
        v8 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_SrcSpotBasePrefab__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass292_0__GetSpotPrefab_b__0__,
          0),
        !spotList) )
  {
    sub_1C372B4(v6);
  }
  return (SrcSpotBasePrefab_o *)System_Collections_Generic_List_object___Find(
                                  spotList,
                                  (System_Predicate_T__o *)v8,
                                  (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
}


int64_t ScrTerminalMap__GetTimeLimitAt(ScrTerminalMap_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C400DB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C400DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return EventRaidMaster__GetEventRaidTimeLimitAt((EventRaidMaster_o *)Instance, eventId, 0);
}


int32_t ScrTerminalMap__GetUsedDiceItemId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  void *eventBoardGameUsingItem; // x0

  if ( (byte_4C4016D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4016D = 1;
  }
  eventBoardGameUsingItem = this->fields.eventBoardGameUsingItem;
  if ( !eventBoardGameUsingItem )
  {
    eventBoardGameUsingItem = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !eventBoardGameUsingItem
      || (eventBoardGameUsingItem = DataManager__GetMasterData_object_(
                                      (DataManager_o *)eventBoardGameUsingItem,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
      || (eventBoardGameUsingItem = ItemMaster__GetEntityListByType((ItemMaster_o *)eventBoardGameUsingItem, 26, 0)) == 0
      || (eventBoardGameUsingItem = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)eventBoardGameUsingItem,
                                      0,
                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__)) == 0 )
    {
      sub_1C372B4(eventBoardGameUsingItem);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v13; // x22

  if ( (byte_4C40129 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass342_0__HarvestGrowthDialogOpen_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass342_0_TypeInfo);
    byte_4C40129 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass342_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass342_0___ctor((ScrTerminalMap___c__DisplayClass342_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass342_0__HarvestGrowthDialogOpen_b__0__,
          0),
        !titleInfoControl) )
  {
LABEL_14:
    sub_1C372B4(v6);
  }
  TitleInfoControl__EventHarvestGrowthDialogOpen(titleInfoControl, mActionPanel, v13, 0);
}


void ScrTerminalMap__InitCheckUpdateRequest(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct MapControl_WarInfo_o *mWarInfo; // x8
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  const MethodInfo *v8; // x3
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  _BOOL4 IsEventMapLoading; // w9
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C400D4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C400D4 = 1;
  }
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  this->fields._IsCheckExpiration_k__BackingField = 0;
  if ( !mWarInfo )
    goto LABEL_29;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.mWarInfo )
    goto LABEL_31;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(this->fields.mWarInfo, 0);
  if ( !v7 )
    goto LABEL_31;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v7,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1C372B4(Instance);
  this->fields.isRaidMap = EventDetailEntity__IsRaid((EventDetailEntity_o *)entity, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->isCheckHomeExpirationDateEventMap )
  {
    ScrTerminalMap__CheckUpdateRequest(this, 1, callback, v8);
    return;
  }
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9);
  if ( !byte_4C401A4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A4 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  IsEventMapLoading = static_fields->IsEventMapLoading;
  static_fields->isCheckHomeExpirationDateEventMap = 1;
  if ( IsEventMapLoading )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
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
    sub_1C372B4(0);
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
    sub_1C372B4(titleInfoControl);
  }
  TitleInfoControl__setBackBtnColliderEnable(titleInfoControl, 1, 0);
}


bool ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  EventSpotCooltimeComponent_o *v4; // x0

  if ( (byte_4C4017A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4017A = 1;
  }
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
    return 0;
  v4 = this->fields.eventSpotCooltimeComponent;
  if ( !v4 )
    sub_1C372B4(0);
  return EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(v4, 0);
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
    sub_1C372B4(allMaskObj);
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

  if ( (byte_4C400FF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C400FF = 1;
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
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
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
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
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
  int32_t EventDataLostBattleId; // w0
  int32_t v9; // w20
  System_Collections_Generic_List_EventDataLostBattleResetEntity__o *DataLostBattleResetEntities; // x0

  if ( (byte_4C4012E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4012E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B6 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_20;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0);
  if ( EventDataLostBattleId == -1 )
    return 0;
  v9 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
  if ( !Master_object )
LABEL_20:
    sub_1C372B4(Master_object);
  DataLostBattleResetEntities = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                                  (EventDataLostBattleResetMaster_o *)Master_object,
                                  v9,
                                  eventId,
                                  0);
  if ( DataLostBattleResetEntities )
    return DataLostBattleResetEntities->fields._size != 0;
  return 0;
}


bool ScrTerminalMap__IsDialogOnActive(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v2; // x19

  if ( (byte_4C400DD & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C400DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  v2 = (CommonUI_o *)Instance;
  return CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0)
      || CommonUI__IsActive_ApRecvDlgComp(v2, 0)
      || CommonUI__IsActive_CommonConfirmDialog(v2, 0)
      || CommonUI__IsActive_NotifiDialog(v2, 0)
      || CommonUI__IsActive_TutorialBigDialog(v2, 0)
      || CommonUI__IsActive_MasterMission(v2, 0)
      || CommonUI__IsActive_MasterProfile(v2, 0)
      || CommonUI__IsActive_MissionListDialog(v2, 0)
      || CommonUI__IsActive_EventItemSelectDlgComp(v2, 0)
      || CommonUI__IsActive_AssistEffectConfirmDialog(v2, 0)
      || CommonUI__IsActive_CommandAssistConfirmDialog(v2, 0)
      || CommonUI__IsActive_ScrollMessageDialog(v2, 0);
}


bool ScrTerminalMap__IsDispEventBoardGameUI(ScrTerminalMap_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  System_Int32_array *EventBoardGameMapIdList; // x20
  System_Func_int__bool__o *v5; // x21

  if ( (byte_4C40141 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__IsDispEventBoardGameUI_b__368_0__);
    byte_4C40141 = 1;
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
  v5 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap__IsDispEventBoardGameUI_b__368_0__, 0);
  return BasicHelper__Any_int__51187064(
           EventBoardGameMapIdList,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
}


bool ScrTerminalMap__IsEnabledToUseEventItem(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0
  int32_t EventId; // w19

  if ( (byte_4C40142 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    byte_4C40142 = 1;
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
  MapControl_WarInfo_o *v5; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C4013F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4013F = 1;
  }
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  if ( mWarInfo )
  {
    if ( MapControl_WarInfo__GetEventId(mWarInfo, 0) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_13;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v5 = this->fields.mWarInfo;
      if ( !v5 )
        goto LABEL_13;
      v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(v5, 0);
      if ( !v6 )
        goto LABEL_13;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v6,
             &entity,
             (int32_t)Instance,
             (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          LOBYTE(mWarInfo) = EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0);
          return (unsigned __int8)mWarInfo & 1;
        }
LABEL_13:
        sub_1C372B4(Instance);
      }
    }
    LOBYTE(mWarInfo) = 0;
  }
  return (unsigned __int8)mWarInfo & 1;
}


bool ScrTerminalMap__IsEventBoardGameNextMapDisp(ScrTerminalMap_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0
  int32_t EventId; // w22
  DataManager_o *v7; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v9; // x23
  const MethodInfo *v10; // x1
  int32_t spotId; // w20
  clsQuestCheck_o *v12; // x19
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  QuestEntity_o *v16; // [xsp+0h] [xbp-50h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C40168 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40168 = 1;
  }
  v16 = 0;
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_57;
  EventId = MapControl_WarInfo__GetEventId(mWarInfo, 0);
  mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mWarInfo )
    goto LABEL_57;
  v7 = (DataManager_o *)mWarInfo;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)mWarInfo,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
    if ( !byte_4C401A8 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401A8 = 1;
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
    if ( !byte_4C401A8 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401A8 = 1;
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
          (Il2CppObject **)&v16,
          questId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 1;
  mWarInfo = (MapControl_WarInfo_o *)v16;
  if ( !v16 )
    goto LABEL_57;
  mWarInfo = (MapControl_WarInfo_o *)QuestEntity__GetTypeFlag(v16, 0);
  if ( (_DWORD)mWarInfo != 2 || this->fields.isEventBoardGameQuestListView )
    return 0;
  if ( !v16 )
    goto LABEL_57;
  spotId = v16->fields.spotId;
  if ( spotId != ScrTerminalMap__GetEventBoardGameSpotId(this, v10) )
    return 0;
  mWarInfo = (MapControl_WarInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v12 = (clsQuestCheck_o *)mWarInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v12 )
LABEL_57:
    sub_1C372B4(mWarInfo);
  if ( !clsQuestCheck__CheckQuestPlayableNow(
          v12,
          BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
          0,
          0) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFC0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFC0 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( v13->static_fields->_IsPlayScriptWithMap_k__BackingField )
    return 1;
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !byte_4C3FB59 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB59 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  return v14->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool ScrTerminalMap__IsEventBoardGameQuestAllClear(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t v4; // w20
  ScrTerminalMap_c *v5; // x0
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  int32_t maxClearCount[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C40155 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C40155 = 1;
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
    sub_1C372B4(0);
  return MapModelManager__get_IsMapModel(mapModelManager, 0);
}


bool ScrTerminalMap__IsNeedMapUpdateOnSchedule(ScrTerminalMap_o *this, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v6; // x19

  if ( (byte_4C400D6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C400D6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, warId, 0);
  if ( WarInfoByWarID )
  {
    v6 = WarInfoByWarID;
    if ( MapControl_WarInfo__IsMapUpdateStateEnabled(WarInfoByWarID, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
      if ( Instance )
        return MapUpdateScheduleMaster__IsNeedMapUpdate((MapUpdateScheduleMaster_o *)Instance, v6, 0);
LABEL_11:
      sub_1C372B4(Instance);
    }
  }
  return 0;
}


bool ScrTerminalMap__IsSkipCreateBoardGameGimmick(
        ScrTerminalMap_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v4; // x20
  ScrTerminalMap_o *v5; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 v7; // x20
  __int64 v8; // x23

  if ( (byte_4C40100 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C40100 = 1;
  }
  if ( !mapGimmickInfo )
    goto LABEL_28;
  this = (ScrTerminalMap_o *)MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0);
  if ( !this )
    return (char)this;
  v4 = this;
  if ( LODWORD(this->fields.PLAYER_ICON_POS.fields.z) == 17 )
  {
    this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
    if ( !this )
      goto LABEL_28;
    this = (ScrTerminalMap_o *)QuestReleaseMaster__getListByQuestID(
                                 (QuestReleaseMaster_o *)this,
                                 v4->fields.currentWarId,
                                 0);
    v5 = this;
  }
  else
  {
    v5 = 0;
  }
  if ( v4->fields.currentAssetId != 17 )
    goto LABEL_14;
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestReleaseMaster___)) == 0 )
  {
LABEL_28:
    sub_1C372B4(this);
  }
  this = (ScrTerminalMap_o *)QuestReleaseMaster__getListByQuestID(
                               (QuestReleaseMaster_o *)this,
                               v4->fields.currentMapImageId,
                               0);
  v5 = this;
LABEL_14:
  if ( !v5 || (m_CancellationTokenSource = v5->fields.m_CancellationTokenSource, (int)m_CancellationTokenSource < 1) )
  {
LABEL_25:
    LOBYTE(this) = 0;
    return (char)this;
  }
  v7 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= (unsigned int)m_CancellationTokenSource )
      sub_1C372BC(this);
    v8 = *((_QWORD *)&v5->fields.PLAYER_ICON_POS.fields.x + v7);
    if ( !v8 )
      goto LABEL_28;
    if ( *(_DWORD *)(v8 + 20) == 116 )
      break;
LABEL_24:
    if ( (int)++v7 >= (int)m_CancellationTokenSource )
      goto LABEL_25;
  }
  this = (ScrTerminalMap_o *)ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    this = (ScrTerminalMap_o *)ScrTerminalMap_TypeInfo;
  }
  if ( *(_QWORD *)(v8 + 32) != LODWORD(this->fields.subRootGimmickP[6].klass) )
  {
    m_CancellationTokenSource = v5->fields.m_CancellationTokenSource;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TerminalPramsManager_c *v11; // x0
  int32_t EventId; // w22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v14; // x1
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

  if ( (byte_4C40163 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventBoardGameCellMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass404_0_TypeInfo);
    byte_4C40163 = 1;
  }
  entity = 0;
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass404_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass404_0___ctor((ScrTerminalMap___c__DisplayClass404_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 56) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 56), (int32_t)callback, v9, v10);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v5 + 48) = v11->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  *(_DWORD *)(v5 + 52) = 1;
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_41;
  EventId = MapControl_WarInfo__GetEventId(mWarInfo, 0);
  mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mWarInfo )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)mWarInfo,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
    mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mWarInfo )
      goto LABEL_41;
    mWarInfo = (MapControl_WarInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)mWarInfo,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventBoardGameCellMaster___);
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
        mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( mWarInfo )
        {
          CommonUI__SetFadeMaskCollider((CommonUI_o *)mWarInfo, 1, 0);
          ScrTerminalMap__FrameOutUI(this, 0, v20);
          mWarInfo = (MapControl_WarInfo_o *)this->fields._EventBoardPieceObj_k__BackingField;
          if ( mWarInfo )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mWarInfo,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
            if ( v22 )
            {
              v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
              System_Action___ctor(
                v24,
                (Il2CppObject *)v5,
                Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__0__,
                0);
              if ( !Component_object )
                goto LABEL_41;
              Component_object[2].klass = (Il2CppClass *)v24;
              sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[2], (int32_t)v24, v25, v26);
            }
            BoardGamePieceAnimationNameBySquareId = ScrTerminalMap__GetBoardGamePieceAnimationNameBySquareId(
                                                      (ScrTerminalMap_o *)v22,
                                                      *(_DWORD *)(v5 + 48),
                                                      *(_DWORD *)(v5 + 52),
                                                      v23);
            this->fields.animationNameBuffer = BoardGamePieceAnimationNameBySquareId;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&this->fields.animationNameBuffer,
              (int32_t)BoardGamePieceAnimationNameBySquareId,
              v28,
              v29);
            mWarInfo = (MapControl_WarInfo_o *)this->fields._EventBoardPieceObj_k__BackingField;
            if ( mWarInfo )
            {
              mWarInfo = (MapControl_WarInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)mWarInfo,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              if ( mWarInfo )
              {
                UnityEngine_Animation__Play_71012036(
                  (UnityEngine_Animation_o *)mWarInfo,
                  this->fields.animationNameBuffer,
                  0);
                return;
              }
            }
          }
        }
LABEL_41:
        sub_1C372B4(mWarInfo);
      }
    }
  }
  if ( !ScrTerminalMap__TryAutoQuest(this, v14) )
    ActionExtensions__Call(*(System_Action_o **)(v5 + 56), 0);
}


void ScrTerminalMap__LoadAssetsAtlases(
        ScrTerminalMap_o *this,
        AssetData_o *assetData,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v6; // x19
  Il2CppObject *Object_object__51154888; // x22
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
  if ( (byte_4C400ED & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    this = (ScrTerminalMap_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C400ED = 1;
  }
  if ( !assetData )
    goto LABEL_25;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              assetData,
                              atlasName,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Object_object__51154888 )
    {
      this = (ScrTerminalMap_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)Object_object__51154888,
                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            assetsAtlases->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v14;
            sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v8, v9);
          }
          return;
        }
      }
    }
LABEL_25:
    sub_1C372B4(this);
  }
  for ( i = 1; ; i = v28 + 1 )
  {
    v28 = i;
    v17 = System_Int32__ToString((int32_t)&v28, 0);
    v18 = System_String__Concat_63561656(atlasName, v17, 0);
    v19 = AssetData__GetObject_object__51154888(
            assetData,
            v18,
            (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScrTerminalMap_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( !v19 )
      goto LABEL_25;
    this = (ScrTerminalMap_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v19,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &v23->obj.klass + v25;
      v22->fields._size = v25 + 1;
      v27[4] = (Il2CppClass *)v26;
      sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v20, v21);
    }
  }
}


void ScrTerminalMap__LoadCooltimeMapObject(ScrTerminalMap_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  UnityEngine_Object_o *eventQuestCooltimeComponent; // x22
  struct EventQuestCooltimeComponent_o **p_eventQuestCooltimeComponent; // x21
  UnityEngine_GameObject_o *Instance; // x0
  Il2CppObject *Object_object__51154888; // x22
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_Object_o *coolTimeButtonObj; // x21
  struct UnityEngine_GameObject_o **p_coolTimeButtonObj; // x21
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *v20; // x19
  UnityEngine_GameObject_o *v21; // x0

  if ( (byte_4C400F5 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventInfoCooltimeNoticeButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventQuestCooltimeComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_6221/*"EventHarvestNoticeButton"*/);
    sub_1C37058(&StringLiteral_8899/*"MapGimmickEffect_EventQuestCooltime"*/);
    byte_4C400F5 = 1;
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
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                assetData,
                                (System_String_o *)StringLiteral_8899/*"MapGimmickEffect_EventQuestCooltime"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             Object_object__51154888,
                                             (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_32;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Instance,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventQuestCooltimeComponent___);
    *p_eventQuestCooltimeComponent = (struct EventQuestCooltimeComponent_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventQuestCooltimeComponent, (int32_t)Component_object, v10, v11);
    Instance = (UnityEngine_GameObject_o *)*p_eventQuestCooltimeComponent;
    if ( !*p_eventQuestCooltimeComponent )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetParent_36138108(gameObject, this->fields.rootEventObjP, 0);
    Instance = (UnityEngine_GameObject_o *)this->fields.eventQuestCooltimeComponent;
    if ( !Instance )
      goto LABEL_32;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !byte_4C3C926 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    GameObjectExtensions__SetLocalScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        v16 = AssetData__GetObject_object__51154888(
                assetData,
                (System_String_o *)StringLiteral_6221/*"EventHarvestNoticeButton"*/,
                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v17 = UnityEngine_Object__Instantiate_object_(
                v16,
                (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.coolTimeButtonObj = (struct UnityEngine_GameObject_o *)v17;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.coolTimeButtonObj, (int32_t)v17, v18, v19);
        Instance = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
        if ( Instance )
        {
          v20 = *p_coolTimeButtonObj;
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent_36138184(v20, v21, 0);
          Instance = *p_coolTimeButtonObj;
          if ( *p_coolTimeButtonObj )
          {
            Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     Instance,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCooltimeNoticeButton___);
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
      sub_1C372B4(Instance);
    }
  }
}


void ScrTerminalMap__LoadEventBoardGameDiceAsset(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x1
  int32_t EventBoardDiceVoiceServantId; // w0
  System_String_o *VoiceAssetName_42795352; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0

  if ( (byte_4C40144 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C40144 = 1;
  }
  if ( ScrTerminalMap__IsEventBoardGame(this, method) && ScrTerminalMap__IsDispEventBoardGameUI(this, v3) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    EventBoardDiceVoiceServantId = ScrTerminalMap__GetEventBoardDiceVoiceServantId(this, v5);
    VoiceAssetName_42795352 = ServantVoiceEntity__getVoiceAssetName_42795352(EventBoardDiceVoiceServantId, 0);
    v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_0__, 0);
    if ( !Instance )
      sub_1C372B4(v9);
    SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, VoiceAssetName_42795352, v8, 1, 0);
  }
}


void ScrTerminalMap__LoadEventBoardGameMapObject(
        ScrTerminalMap_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *EventBoardQuestArrivalPanelObj_k__BackingField; // x0
  Il2CppObject *Object_object__51154888; // x21
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x20
  const MethodInfo *v20; // x1
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1

  if ( (byte_4C400F4 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_8909/*"MapGimmickEffect_GappolyQuestArrivalPanel"*/);
    sub_1C37058(&StringLiteral_8903/*"MapGimmickEffect_GappolyPiece"*/);
    sub_1C37058(&StringLiteral_8901/*"MapGimmickEffect_GappolyBoard"*/);
    sub_1C37058(&StringLiteral_8910/*"MapGimmickEffect_GappolyStopPanel"*/);
    byte_4C400F4 = 1;
  }
  if ( ScrTerminalMap__IsDispEventBoardGameUI(this, (const MethodInfo *)assetData) )
  {
    ScrTerminalMap__SetupDiceButton(this, v5);
    if ( assetData )
    {
      Object_object__51154888 = AssetData__GetObject_object__51154888(
                                  assetData,
                                  (System_String_o *)StringLiteral_8901/*"MapGimmickEffect_GappolyBoard"*/,
                                  (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v8 = UnityEngine_Object__Instantiate_object_(
               Object_object__51154888,
               (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields._EventBoardGameObj_k__BackingField = (struct UnityEngine_GameObject_o *)v8;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._EventBoardGameObj_k__BackingField, (int32_t)v8, v9, v10);
        GameObjectExtensions__SafeSetParent_36138184(
          this->fields._EventBoardGameObj_k__BackingField,
          this->fields.rootEventObjP,
          0);
      }
      v11 = AssetData__GetObject_object__51154888(
              assetData,
              (System_String_o *)StringLiteral_8903/*"MapGimmickEffect_GappolyPiece"*/,
              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__Instantiate_object_(
                v11,
                (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields._EventBoardPieceObj_k__BackingField = (struct UnityEngine_GameObject_o *)v12;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._EventBoardPieceObj_k__BackingField, (int32_t)v12, v13, v14);
        GameObjectExtensions__SafeSetParent_36138184(
          this->fields._EventBoardPieceObj_k__BackingField,
          this->fields.rootEventObjP,
          0);
      }
      v15 = AssetData__GetObject_object__51154888(
              assetData,
              (System_String_o *)StringLiteral_8909/*"MapGimmickEffect_GappolyQuestArrivalPanel"*/,
              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0) )
        goto LABEL_24;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object_(
              v15,
              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields._EventBoardQuestArrivalPanelObj_k__BackingField = (struct UnityEngine_GameObject_o *)v16;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields._EventBoardQuestArrivalPanelObj_k__BackingField,
        (int32_t)v16,
        v17,
        v18);
      GameObjectExtensions__SafeSetParent_36138184(
        this->fields._EventBoardQuestArrivalPanelObj_k__BackingField,
        this->fields.rootEventObjP,
        0);
      EventBoardQuestArrivalPanelObj_k__BackingField = this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
      if ( EventBoardQuestArrivalPanelObj_k__BackingField )
      {
        UnityEngine_GameObject__SetActive(EventBoardQuestArrivalPanelObj_k__BackingField, 0, 0);
LABEL_24:
        v19 = AssetData__GetObject_object__51154888(
                assetData,
                (System_String_o *)StringLiteral_8910/*"MapGimmickEffect_GappolyStopPanel"*/,
                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v21 = UnityEngine_Object__Instantiate_object_(
                  v19,
                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          this->fields._EventBoardStopPanelObj_k__BackingField = (struct UnityEngine_GameObject_o *)v21;
          sub_1C36FFC(
            (CGThumbnailListItem_o *)&this->fields._EventBoardStopPanelObj_k__BackingField,
            (int32_t)v21,
            v22,
            v23);
          GameObjectExtensions__SafeSetParent_36138184(
            this->fields._EventBoardStopPanelObj_k__BackingField,
            this->fields.rootEventObjP,
            0);
        }
        ScrTerminalMap__LoadEventBoardGameVoiceInfo(this, v20);
        ScrTerminalMap__LoadEventBoardGameDiceAsset(this, v24);
        return;
      }
    }
    sub_1C372B4(EventBoardQuestArrivalPanelObj_k__BackingField);
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
  struct System_Int32_array *ValueArray; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C40143 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C37058(&Method_JsonManager_Deserialize_Dictionary_string__object____);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_5541/*"EVENT_BOARD_GAME_QUEST_ARRIVAL_VOICE_SVT_ID_LIST"*/);
    sub_1C37058(&StringLiteral_5536/*"EVENT_BOARD_GAME_DICE_VOICE_INFO"*/);
    byte_4C40143 = 1;
  }
  if ( ScrTerminalMap__IsEventBoardGame(this, method) && ScrTerminalMap__IsDispEventBoardGameUI(this, v3) )
  {
    Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_5536/*"EVENT_BOARD_GAME_DICE_VOICE_INFO"*/, 0);
    if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0) )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v5 = JsonManager__Deserialize_object_(
             Value,
             (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_Dictionary_string__object____);
      this->fields._EventBoardDiceVoiceInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v5;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._EventBoardDiceVoiceInfo_k__BackingField, (int32_t)v5, v6, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
      {
        sub_1C372B4(Instance);
      }
      ValueArray = ConstantStrMaster__GetValueArray(
                     (ConstantStrMaster_o *)Instance,
                     (System_String_o *)StringLiteral_5541/*"EVENT_BOARD_GAME_QUEST_ARRIVAL_VOICE_SVT_ID_LIST"*/,
                     0,
                     0);
      this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField = ValueArray;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField,
        (int32_t)ValueArray,
        v10,
        v11);
    }
  }
}


void ScrTerminalMap__LoadEventMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x19
  System_Action_o *v4; // x20
  __int64 v5; // x0
  EventMapManagerInterface_c *klass; // x8
  __int64 v7; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v9; // x0

  if ( (byte_4C400E7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__LoadEventMap_b__265_0__);
    byte_4C400E7 = 1;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrTerminalMap__LoadEventMap_b__265_0__, 0);
  if ( !eventMapManagerInterface_k__BackingField )
    sub_1C372B4(v5);
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
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
  }
  else
  {
LABEL_8:
    v9 = sub_1C87870(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 2);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, System_Action_o *, _QWORD))v9)(
    eventMapManagerInterface_k__BackingField,
    v4,
    *(_QWORD *)(v9 + 8));
}


void ScrTerminalMap__LoadEventMapObject(ScrTerminalMap_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  _BOOL8 IsEventBoardGame; // x0
  const MethodInfo *v6; // x2
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w21
  const MethodInfo *v9; // x2
  struct WarEntity_o *v10; // x8
  const MethodInfo *v11; // x3
  struct WarEntity_o *v12; // x8
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  EventMapManagerInterface_c *klass; // x8
  __int64 v15; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v17; // x0

  if ( (byte_4C400F3 & 1) == 0 )
  {
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&EventQuestCooltimeComponent_TypeInfo);
    byte_4C400F3 = 1;
  }
  IsEventBoardGame = ScrTerminalMap__IsEventBoardGame(this, (const MethodInfo *)assetData);
  if ( IsEventBoardGame )
    ScrTerminalMap__LoadEventBoardGameMapObject(this, assetData, v6);
  mWarEnt = this->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_22;
  eventId = mWarEnt->fields.eventId;
  if ( !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
  IsEventBoardGame = EventQuestCooltimeComponent__IsActiveEventQuestCooltime(eventId, 0);
  if ( IsEventBoardGame )
  {
    ScrTerminalMap__LoadCooltimeMapObject(this, assetData, v9);
  }
  else
  {
    v10 = this->fields.mWarEnt;
    if ( !v10 )
      goto LABEL_22;
    IsEventBoardGame = EventSpotCooltimeComponent__IsActiveEventSpotCooltime(v10->fields.eventId, 0);
    if ( IsEventBoardGame )
    {
      v12 = this->fields.mWarEnt;
      if ( !v12 )
        goto LABEL_22;
      ScrTerminalMap__LoadSpotCooltimeMapObject(this, v12->fields.eventId, assetData, v11);
    }
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
LABEL_22:
    sub_1C372B4(IsEventBoardGame);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v15 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_19;
    }
    v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_19:
    v17 = sub_1C87870(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 3);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, AssetData_o *, _QWORD))v17)(
    eventMapManagerInterface_k__BackingField,
    assetData,
    *(_QWORD *)(v17 + 8));
}


void ScrTerminalMap__LoadFinishMapPack(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C400EA & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_19123/*"evTexLoad_Finish"*/);
    byte_4C400EA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->isInvisibleConnectAndLoad = 0;
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_19123/*"evTexLoad_Finish"*/, v2);
}


void ScrTerminalMap__LoadMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Component_o *mActionBgColl; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  ScrTerminalMap_o *v17; // x0
  const MethodInfo *v18; // x2
  System_String_o *AssetName; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  struct AssetData_o *mapAssetData; // x8
  __int64 v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  MapControl_WarInfo_o *mWarInfo; // x0
  bool IsMultiMap; // w20
  TerminalPramsManager_c *v35; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  struct MapModelManager_o *v37; // x21
  int32_t v38; // w22
  int32_t currentMapId; // w23
  System_Action_o *v40; // x24
  MapModelManager_o *v41; // x0
  const MethodInfo *v42; // x1
  ScrTerminalMap_o *v43; // x0
  const MethodInfo *v44; // x3
  System_String_o *AssetMultiMapName; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  struct AssetData_o *mapMultiAssetData; // x8
  struct AssetData_o **p_mapMultiAssetData; // x20
  AssetData_o *v52; // x22
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct MapModelManager_o *mapModelManager; // x20
  const MethodInfo *v56; // x2
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x6
  __int64 v62; // x7
  ScrTerminalMap_c *v63; // x0
  System_String_o *ASSETS_NAME_MAP_GIMMICK; // x20
  Il2CppObject *v65; // x0
  Il2CppObject *Object_object__51154888; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Action_o *v69; // x20
  const MethodInfo *v70; // x2
  int32_t v71; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v72; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C400E5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_LoadEventMap__);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass262_0_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass262_1__LoadMap_b__1__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass262_1_TypeInfo);
    byte_4C400E5 = 1;
  }
  v3 = sub_1C372A4(ScrTerminalMap___c__DisplayClass262_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass262_0___ctor((ScrTerminalMap___c__DisplayClass262_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_40;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
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
  ScrTerminalMap__DestroyMapObjs(this, v9);
  ScrTerminalMap__AttachEventMapManager(this, v10);
  currentAssetId = this->fields.currentAssetId;
  v17 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v11, v12, v13, v14, v15, v16);
  AssetName = ScrTerminalMap__GetAssetName(v17, (Il2CppObject *)v17, v18);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)AssetName, v20, v21);
  mapAssetData = this->fields.mapAssetData;
  if ( mapAssetData && System_String__op_Equality(mapAssetData->fields.name, *(System_String_o **)(v3 + 24), 0) )
  {
    v24 = sub_1C372A4(ScrTerminalMap___c__DisplayClass262_1_TypeInfo);
    ScrTerminalMap___c__DisplayClass262_1___ctor((ScrTerminalMap___c__DisplayClass262_1_o *)v24, 0);
    if ( !v24 )
      goto LABEL_40;
    *(_QWORD *)(v24 + 24) = v3;
    sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 24), v3, v25, v26);
    mWarInfo = this->fields.mWarInfo;
    if ( mWarInfo )
      IsMultiMap = MapControl_WarInfo__IsMultiMap(mWarInfo, 0);
    else
      IsMultiMap = 0;
    v72 = this->fields.currentAssetId;
    v43 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v27, v28, v29, v30, v31, v32);
    AssetMultiMapName = ScrTerminalMap__GetAssetMultiMapName(v43, (Il2CppObject *)v43, this->fields.mMapEnt, v44);
    *(_QWORD *)(v24 + 16) = AssetMultiMapName;
    sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 16), (int32_t)AssetMultiMapName, v46, v47);
    ScrTerminalMap__SetupFeildConfiguration(this, v48);
    if ( IsMultiMap )
    {
      mapMultiAssetData = this->fields.mapMultiAssetData;
      if ( !mapMultiAssetData )
        goto LABEL_34;
      p_mapMultiAssetData = &this->fields.mapMultiAssetData;
      if ( System_String__op_Inequality(mapMultiAssetData->fields.name, *(System_String_o **)(v24 + 16), 0) )
        goto LABEL_30;
      mActionBgColl = (UnityEngine_Component_o *)*p_mapMultiAssetData;
      if ( !*p_mapMultiAssetData )
        goto LABEL_40;
      if ( AssetData__get_IsEmpty((AssetData_o *)mActionBgColl, 0) )
      {
LABEL_30:
        v52 = *p_mapMultiAssetData;
        if ( *p_mapMultiAssetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40534712(v52, 0);
          *p_mapMultiAssetData = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapMultiAssetData, 0, v53, v54);
        }
LABEL_34:
        mapModelManager = this->fields.mapModelManager;
        currentMapId = this->fields.currentMapId;
        v38 = this->fields.currentAssetId;
        v40 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v40, (Il2CppObject *)v24, Method_ScrTerminalMap___c__DisplayClass262_1__LoadMap_b__1__, 0);
        if ( mapModelManager )
        {
          v41 = mapModelManager;
          goto LABEL_22;
        }
LABEL_40:
        sub_1C372B4(mActionBgColl);
      }
    }
    ScrTerminalMap__LoadMapEffectPrefab(this, this->fields.mapAssetData, v49);
    ScrTerminalMap__LoadEventMapObject(this, this->fields.mapAssetData, v56);
    v63 = ScrTerminalMap_TypeInfo;
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
      v63 = ScrTerminalMap_TypeInfo;
    }
    ASSETS_NAME_MAP_GIMMICK = v63->static_fields->ASSETS_NAME_MAP_GIMMICK;
    v71 = this->fields.currentAssetId;
    v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v57, v58, v59, v60, v61, v62);
    mActionBgColl = (UnityEngine_Component_o *)System_String__Format(ASSETS_NAME_MAP_GIMMICK, v65, 0);
    if ( this->fields.mapAssetData )
    {
      Object_object__51154888 = AssetData__GetObject_object__51154888(
                                  this->fields.mapAssetData,
                                  (System_String_o *)mActionBgColl,
                                  (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      this->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)Object_object__51154888;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapGimmickPrefab, (int32_t)Object_object__51154888, v67, v68);
      v69 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v69, (Il2CppObject *)this, Method_ScrTerminalMap_LoadEventMap__, 0);
      ScrTerminalMap__LoadMapImgTex(this, v69, v70);
      goto LABEL_23;
    }
    goto LABEL_40;
  }
  ScrTerminalMap__ReleaseMap(this, 1, v22);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FE39 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FE39 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v35->static_fields->isInvisibleConnectAndLoad;
  mActionBgColl = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mActionBgColl )
    goto LABEL_40;
  CommonUI__SetLoadMode((CommonUI_o *)mActionBgColl, !isInvisibleConnectAndLoad, 0);
  v37 = this->fields.mapModelManager;
  currentMapId = this->fields.currentMapId;
  v38 = this->fields.currentAssetId;
  v40 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v3, Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__0__, 0);
  if ( !v37 )
    goto LABEL_40;
  v41 = v37;
LABEL_22:
  MapModelManager__LoadMapModel(v41, v38, currentMapId, v40, 0);
LABEL_23:
  ScrTerminalMap__LoadMapUseVoiceData(this, v42);
}


void ScrTerminalMap__LoadMapEffectPrefab(ScrTerminalMap_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  int i; // w23
  ScrTerminalMap_c *v13; // x0
  int32_t currentMapId; // w21
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  System_String_o *ASSETS_NAME_MAP_EFFECT; // x21
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *mapEffectPrefabList; // x0
  Il2CppObject *Object_object__51154888; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_Fields fields; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8
  int v33; // [xsp+8h] [xbp-68h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C400F2 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_GameObject___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C400F2 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapEffectPrefabList,
          (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_GameObject___) )
  {
    for ( i = 1; ; ++i )
    {
      v13 = ScrTerminalMap_TypeInfo;
      currentMapId = this->fields.currentMapId;
      if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        v13 = ScrTerminalMap_TypeInfo;
      }
      static_fields = v13->static_fields;
      if ( currentMapId <= 9999 )
        ASSETS_NAME_MAP_EFFECT = static_fields->ASSETS_NAME_MAP_EFFECT;
      else
        ASSETS_NAME_MAP_EFFECT = static_fields->ASSETS_NAME_MAP_EFFECT_UPPER;
      v34 = this->fields.currentMapId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v6, v7, v8, v9, v10, v11);
      v33 = i;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v18, v19, v20, v21, v22, v23);
      mapEffectPrefabList = System_String__Format_63602948(ASSETS_NAME_MAP_EFFECT, v17, v24, 0);
      if ( !assetData )
LABEL_21:
        sub_1C372B4(mapEffectPrefabList);
      Object_object__51154888 = AssetData__GetObject_object__51154888(
                                  assetData,
                                  mapEffectPrefabList,
                                  (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
        break;
      mapEffectPrefabList = (System_String_o *)this->fields.mapEffectPrefabList;
      if ( !mapEffectPrefabList )
        goto LABEL_21;
      fields = mapEffectPrefabList->fields;
      v30 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(mapEffectPrefabList[1].klass);
      if ( !*(_QWORD *)&fields )
        goto LABEL_21;
      klass_low = SLODWORD(mapEffectPrefabList[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)mapEffectPrefabList,
          Object_object__51154888,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(mapEffectPrefabList[1].klass) = klass_low + 1;
        *(_QWORD *)(v32 + 32) = Object_object__51154888;
        sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)Object_object__51154888, v27, v28);
      }
    }
  }
  ScrTerminalMap__CreateMapEff(this, v5);
}


void ScrTerminalMap__LoadMapImgTex(ScrTerminalMap_o *this, System_Action_o *endCallback, const MethodInfo *method)
{
  __int64 v5; // x21
  AssetData_o *mapModelManager; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o **v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  ScrTerminalMap_c *v18; // x0
  System_String_o *ASSETS_NAME_BG; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x0
  struct AssetData_o *mapImgAssetData; // x8
  System_String_o *v26; // x22
  struct AssetData_o **p_mapImgAssetData; // x24
  AssetData_o *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  AssetLoader_LoadEndDataHandler_o *v31; // x23
  int32_t currentMapImageH_k__BackingField; // w21
  int32_t currentMapImageW_k__BackingField; // w22
  bool IsMapModel; // w4
  const MethodInfo *v35; // x5
  ScrTerminalMap_o *v36; // x0
  UnityEngine_Texture2D_o *v37; // x1
  UnityEngine_Object_o *currentMapTexture_k__BackingField; // x22
  Il2CppObject *Object_object__51154888; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct UnityEngine_Texture2D_o *v42; // x23
  int32_t currentMapImageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C400F7 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass281_0__LoadMapImgTex_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass281_0_TypeInfo);
    byte_4C400F7 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass281_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass281_0___ctor((ScrTerminalMap___c__DisplayClass281_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 32) = endCallback;
  v9 = (System_Action_o **)(v5 + 32);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)endCallback, v10, v11);
  v18 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v18 = ScrTerminalMap_TypeInfo;
  }
  ASSETS_NAME_BG = v18->static_fields->ASSETS_NAME_BG;
  currentMapImageId = this->fields.currentMapImageId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentMapImageId, v12, v13, v14, v15, v16, v17);
  v21 = System_String__Format(ASSETS_NAME_BG, v20, 0);
  *(_QWORD *)(v5 + 24) = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v21, v22, v23);
  v24 = System_String__Concat_63561656(
          ScrTerminalMap_TypeInfo->static_fields->MAP_IMAGE_ASSET_PATH,
          *(System_String_o **)(v5 + 24),
          0);
  mapImgAssetData = this->fields.mapImgAssetData;
  v26 = v24;
  if ( mapImgAssetData )
  {
    p_mapImgAssetData = &this->fields.mapImgAssetData;
    if ( !System_String__op_Inequality(mapImgAssetData->fields.name, v24, 0) )
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
          Object_object__51154888 = AssetData__GetObject_object__51154888(
                                      mapModelManager,
                                      *(System_String_o **)(v5 + 24),
                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
          this->fields._currentMapTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__51154888;
          sub_1C36FFC(
            (CGThumbnailListItem_o *)&this->fields._currentMapTexture_k__BackingField,
            (int32_t)Object_object__51154888,
            v40,
            v41);
        }
        mapModelManager = (AssetData_o *)this->fields.mapModelManager;
        if ( mapModelManager )
        {
          currentMapImageW_k__BackingField = this->fields._currentMapImageW_k__BackingField;
          currentMapImageH_k__BackingField = this->fields._currentMapImageH_k__BackingField;
          v42 = this->fields._currentMapTexture_k__BackingField;
          IsMapModel = MapModelManager__get_IsMapModel((MapModelManager_o *)mapModelManager, 0);
          v36 = this;
          v37 = v42;
          goto LABEL_26;
        }
LABEL_28:
        sub_1C372B4(mapModelManager);
      }
    }
    v28 = *p_mapImgAssetData;
    if ( *p_mapImgAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40534712(v28, 0);
      *p_mapImgAssetData = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapImgAssetData, 0, v29, v30);
    }
  }
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass281_0__LoadMapImgTex_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v26, v31, 1, 0) )
  {
    mapModelManager = (AssetData_o *)this->fields.mapModelManager;
    if ( mapModelManager )
    {
      currentMapImageW_k__BackingField = this->fields._currentMapImageW_k__BackingField;
      currentMapImageH_k__BackingField = this->fields._currentMapImageH_k__BackingField;
      IsMapModel = MapModelManager__get_IsMapModel((MapModelManager_o *)mapModelManager, 0);
      v36 = this;
      v37 = 0;
LABEL_26:
      ScrTerminalMap__SetMapBgTexture(
        v36,
        v37,
        currentMapImageW_k__BackingField,
        currentMapImageH_k__BackingField,
        IsMapModel,
        v35);
      ActionExtensions__Call(*v9, 0);
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
  struct System_Int32_array *v8; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  int32_t v11; // w20
  Il2CppObject *Instance; // x19
  System_String_o *VoiceAssetName_42795352; // x0

  if ( (byte_4C400F8 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C400F8 = 1;
  }
  mMapEnt = this->fields.mMapEnt;
  if ( mMapEnt )
  {
    UseVoiceSvtIDList = MapEntity__GetUseVoiceSvtIDList(mMapEnt, 0);
    this->fields.useVoiceSvtIDList = UseVoiceSvtIDList;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.useVoiceSvtIDList, (int32_t)UseVoiceSvtIDList, v5, v6);
    v8 = this->fields.useVoiceSvtIDList;
    if ( v8 )
    {
      max_length = v8->max_length;
      if ( (int)max_length >= 1 )
      {
        v10 = 0;
        do
        {
          if ( v10 >= (unsigned int)max_length )
            sub_1C372BC(v7);
          v11 = v8->m_Items[v10];
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          VoiceAssetName_42795352 = ServantVoiceEntity__getVoiceAssetName_42795352(v11, 0);
          if ( !Instance )
            sub_1C372B4(VoiceAssetName_42795352);
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, VoiceAssetName_42795352, 0, 1, 0);
          LODWORD(max_length) = v8->max_length;
          ++v10;
        }
        while ( (__int64)v10 < (int)max_length );
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
  Il2CppObject *Object_object__51154888; // x23
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x23
  UnityEngine_Object_o *coolTimeButtonObj; // x23
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x24
  int32_t CommonReleaseIdByEventId; // w24
  struct UnityEngine_GameObject_o **p_coolTimeButtonObj; // x24
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_GameObject_o *v24; // x23
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *rewardReceiveButtonObj; // x23
  Il2CppObject *v27; // x23
  Il2CppObject *v28; // x24
  int32_t v29; // w24
  struct UnityEngine_GameObject_o **p_rewardReceiveButtonObj; // x24
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_GameObject_o *v35; // x0

  if ( (byte_4C400F6 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeNoticeButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeRewardReceiveButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventSpotCooltimeComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_8900/*"MapGimmickEffect_EventSpotCooltime"*/);
    sub_1C37058(&StringLiteral_6252/*"EventSpotCooltimeNoticeButton"*/);
    sub_1C37058(&StringLiteral_6253/*"EventSpotCooltimeRewardReceiveButton"*/);
    byte_4C400F6 = 1;
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
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                assetData,
                                (System_String_o *)StringLiteral_8900/*"MapGimmickEffect_EventSpotCooltime"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                  Object_object__51154888,
                                                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Master_object )
      goto LABEL_63;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Master_object,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventSpotCooltimeComponent___);
    *p_eventSpotCooltimeComponent = (EventSpotCooltimeComponent_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventSpotCooltimeComponent, (int32_t)Component_object, v12, v13);
    Master_object = (UnityEngine_GameObject_o *)*p_eventSpotCooltimeComponent;
    if ( !*p_eventSpotCooltimeComponent )
      goto LABEL_63;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    GameObjectExtensions__SetParent_36138108(gameObject, this->fields.rootEventObjP, 0);
    Master_object = (UnityEngine_GameObject_o *)this->fields.eventSpotCooltimeComponent;
    if ( !Master_object )
      goto LABEL_63;
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !byte_4C3C926 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    GameObjectExtensions__SetLocalScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
    v17 = AssetData__GetObject_object__51154888(
            assetData,
            (System_String_o *)StringLiteral_6252/*"EventSpotCooltimeNoticeButton"*/,
            (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_63;
      v18 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v17,
              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeNoticeButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_63;
        CommonReleaseIdByEventId = EventInfoSpotCooltimeNoticeButton__GetCommonReleaseIdByEventId(
                                     (EventInfoSpotCooltimeNoticeButton_o *)v18,
                                     eventId,
                                     0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !Master_object )
          goto LABEL_63;
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseIdByEventId, 0, 0, 0) )
        {
          p_coolTimeButtonObj = &this->fields.coolTimeButtonObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v21 = UnityEngine_Object__Instantiate_object_(
                  v17,
                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          this->fields.coolTimeButtonObj = (struct UnityEngine_GameObject_o *)v21;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.coolTimeButtonObj, (int32_t)v21, v22, v23);
          Master_object = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
          if ( !Master_object )
            goto LABEL_63;
          v24 = *p_coolTimeButtonObj;
          v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
          GameObjectExtensions__SafeSetParent_36138184(v24, v25, 0);
          Master_object = *p_coolTimeButtonObj;
          if ( !*p_coolTimeButtonObj )
            goto LABEL_63;
          Master_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        Master_object,
                                                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeNoticeButton___);
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
    v27 = AssetData__GetObject_object__51154888(
            assetData,
            (System_String_o *)StringLiteral_6253/*"EventSpotCooltimeRewardReceiveButton"*/,
            (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_63;
      v28 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v27,
              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeRewardReceiveButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_63;
        v29 = EventInfoSpotCooltimeRewardReceiveButton__GetCommonReleaseIdByEventId(
                (EventInfoSpotCooltimeRewardReceiveButton_o *)v28,
                eventId,
                0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !Master_object )
          goto LABEL_63;
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v29, 0, 0, 0) )
        {
          p_rewardReceiveButtonObj = &this->fields.rewardReceiveButtonObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v31 = UnityEngine_Object__Instantiate_object_(
                  v27,
                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          this->fields.rewardReceiveButtonObj = (struct UnityEngine_GameObject_o *)v31;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rewardReceiveButtonObj, (int32_t)v31, v32, v33);
          Master_object = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
          if ( Master_object )
          {
            v34 = *p_rewardReceiveButtonObj;
            v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
            GameObjectExtensions__SafeSetParent_36138184(v34, v35, 0);
            Master_object = *p_rewardReceiveButtonObj;
            if ( *p_rewardReceiveButtonObj )
            {
              Master_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            Master_object,
                                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeRewardReceiveButton___);
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
          sub_1C372B4(Master_object);
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
  System_Collections_Generic_Dictionary_object__object__o *EventBoardDiceVoiceInfo_k__BackingField; // x0
  System_String_array *v8; // x19
  System_Random_o *v9; // x20
  __int64 v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = diceItemId;
  if ( (byte_4C4016E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&System_Random_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_21019/*"item"*/);
    sub_1C37058(&StringLiteral_1151/*"0_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4016E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v12, 0);
  v5 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_21019/*"item"*/, v4, 0);
  if ( this->fields._EventBoardDiceVoiceInfo_k__BackingField )
  {
    v6 = v5;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields._EventBoardDiceVoiceInfo_k__BackingField,
           v5,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      EventBoardDiceVoiceInfo_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)this->fields._EventBoardDiceVoiceInfo_k__BackingField;
      if ( EventBoardDiceVoiceInfo_k__BackingField )
      {
        EventBoardDiceVoiceInfo_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(EventBoardDiceVoiceInfo_k__BackingField, v6, (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( EventBoardDiceVoiceInfo_k__BackingField )
        {
          if ( (System_String_c *)EventBoardDiceVoiceInfo_k__BackingField->klass != string_TypeInfo )
          {
            sub_1C37574(EventBoardDiceVoiceInfo_k__BackingField);
            goto LABEL_16;
          }
          v8 = System_String__Split((System_String_o *)EventBoardDiceVoiceInfo_k__BackingField, 0x2Fu, 0, 0);
          v9 = (System_Random_o *)sub_1C372A4(System_Random_TypeInfo);
          System_Random___ctor(v9, 0);
          if ( v8 && v9 )
          {
            v10 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v9->klass->vtable._7_Next.methodPtr)(
                    v9,
                    LODWORD(v8->max_length),
                    v9->klass->vtable._7_Next.method);
            if ( (unsigned int)v10 < LODWORD(v8->max_length) )
              return System_String__Concat_63561656((System_String_o *)StringLiteral_1151/*"0_"*/, v8->m_Items[(int)v10], 0);
LABEL_16:
            sub_1C372BC(v10);
          }
        }
      }
      sub_1C372B4(EventBoardDiceVoiceInfo_k__BackingField);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v13; // x22

  if ( (byte_4C4012B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass344_0__MakeFarmGrowthDialogOpen_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass344_0_TypeInfo);
    byte_4C4012B = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass344_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass344_0___ctor((ScrTerminalMap___c__DisplayClass344_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass344_0__MakeFarmGrowthDialogOpen_b__0__,
          0),
        !titleInfoControl) )
  {
LABEL_14:
    sub_1C372B4(v6);
  }
  TitleInfoControl__MakeFarmGrowthDialogOpen(titleInfoControl, mActionPanel, v13, 0);
}


void ScrTerminalMap__MapTouchEnableAuto(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  QuestTree_o *IsEventBoardGame; // x0
  const MethodInfo *v9; // x2
  TerminalPramsManager_c *v10; // x0
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x21
  EventMapManagerInterface_c *klass; // x8
  __int64 v13; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v15; // x0
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  Il2CppObject *Master_object; // x21
  const MethodInfo *v19; // x2
  TerminalPramsManager_c *v20; // x0
  UnityEngine_Object_o *SpotGameObject; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C40125 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__MapTouchEnableAuto_b__338_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40125 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
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
  if ( !byte_4C401A7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A7 = 1;
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
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    IsEventBoardGame = (QuestTree_o *)ScrTerminalMap__IsEventBoardGameNextMapDisp(
                                        this,
                                        v10->static_fields->_QuestId_k__BackingField,
                                        v9);
    if ( ((unsigned __int8)IsEventBoardGame & 1) != 0 )
      goto LABEL_87;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
    goto LABEL_84;
  klass = eventMapManagerInterface_k__BackingField->klass;
  v13 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_42;
    }
    v15 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_42:
    v15 = sub_1C87870(this->fields._eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 5);
  }
  if ( ((*(__int64 (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v15)(
          eventMapManagerInterface_k__BackingField,
          *(_QWORD *)(v15 + 8))
      & 1) == 0 )
    goto LABEL_87;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B3 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_IsFromRecollectionBoard_k__BackingField )
  {
    if ( !v16->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v16);
    if ( !byte_4C401B4 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401B4 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( v17->static_fields->_SelectedStoryQuestId_k__BackingField < 1 )
      goto LABEL_87;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
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
          (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_87;
  IsEventBoardGame = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !IsEventBoardGame )
    goto LABEL_84;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond(IsEventBoardGame, (SpotEntity_o *)entity, 1, 0) )
    goto LABEL_87;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  SpotGameObject = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(
                                             this,
                                             v20->static_fields->_SpotId_k__BackingField,
                                             v19);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsEventBoardGame = (QuestTree_o *)UnityEngine_Object__op_Inequality(SpotGameObject, 0, 0);
  if ( ((unsigned __int8)IsEventBoardGame & 1) == 0 )
    goto LABEL_87;
  if ( !SpotGameObject )
    goto LABEL_84;
  IsEventBoardGame = (QuestTree_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)SpotGameObject,
                                      (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !IsEventBoardGame )
    goto LABEL_84;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)IsEventBoardGame, 0) )
  {
LABEL_87:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F89B )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F89B = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_SpotId_k__BackingField = -1;
    this->fields.isEventBoardGameQuestListView = 0;
    if ( !byte_4C3FCB1 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
      byte_4C3FCB1 = 1;
    }
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrTerminalMap__MapTouchEnableAuto_b__338_0__, 0);
    if ( Instance )
    {
      QuestAfterAction__LoadVoice((QuestAfterAction_o *)Instance, v7, 0);
      return;
    }
LABEL_84:
    sub_1C372B4(IsEventBoardGame);
  }
  this->fields.isEventBoardGameQuestListView = 0;
  ScrTerminalMap__EventActionPlay(this, v22);
  ScrTerminalMap__SetDisp(this, 1, v23);
  ScrTerminalMap__smfSpotBtn_Click(this, (UnityEngine_GameObject_o *)SpotGameObject, v24);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *playerIcon; // x22
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x20
  float32x2_t v25; // d1
  unsigned __int64 v26; // d1
  EasingObject_o *v27; // x21
  System_Action_o *v28; // x22

  if ( (byte_4C400E2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass259_0__MovePlayerIcon_b__0__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass259_0__MovePlayerIcon_b__1__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass259_0_TypeInfo);
    byte_4C400E2 = 1;
  }
  v11 = sub_1C372A4(ScrTerminalMap___c__DisplayClass259_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass259_0___ctor((ScrTerminalMap___c__DisplayClass259_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_14;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 32) = endFunc;
  *(_DWORD *)(v11 + 24) = spotId;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)endFunc, v15, v16);
  playerIcon = (UnityEngine_Object_o *)this->fields.playerIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playerIcon, 0, 0) )
  {
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         this->fields.playerIcon,
                         (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v11 + 64) = Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 64), (int32_t)Component_object, v21, v22);
    *(UnityEngine_Vector3_o *)(v11 + 40) = GameObjectExtensions__GetPosition(this->fields.playerIcon, 0);
    ScrTerminalMap__SetPlayerIcon(this, spotObject, v23);
    *(UnityEngine_Vector3_o *)(v11 + 52) = GameObjectExtensions__GetPosition(this->fields.playerIcon, 0);
    v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v11,
      Method_ScrTerminalMap___c__DisplayClass259_0__MovePlayerIcon_b__0__,
      0);
    if ( time <= 0.0
      || (v25.n64_u64[0] = vsub_f32(*(float32x2_t *)(v11 + 44), *(float32x2_t *)(v11 + 56)).n64_u64[0],
          v26 = vmul_f32(v25, v25).n64_u64[0],
          (float)(*((float *)&v26 + 1)
                + (float)((float)((float)(*(float *)(v11 + 40) - *(float *)(v11 + 52))
                                * (float)(*(float *)(v11 + 40) - *(float *)(v11 + 52)))
                        + *(float *)&v26)) < 1.0e-10) )
    {
      v19 = v24;
      goto LABEL_13;
    }
    v27 = *(EasingObject_o **)(v11 + 64);
    v28 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v11,
      Method_ScrTerminalMap___c__DisplayClass259_0__MovePlayerIcon_b__1__,
      0);
    if ( v27 )
    {
      EasingObject__Play(v27, time, v28, v24, 0.0, 0, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v12);
  }
  ScrTerminalMap__SetPlayerIcon(this, spotObject, v18);
  v19 = *(System_Action_o **)(v11 + 32);
LABEL_13:
  ActionExtensions__Call(v19, 0);
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

  if ( (byte_4C40151 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_OnClickMonoplyBoard__);
    sub_1C37058(&Method_ScrTerminalMap__OnClickMonoplyBoard_b__384_0__);
    byte_4C40151 = 1;
  }
  diceButton = (UnityEngine_Behaviour_o *)this->fields.diceButton;
  if ( !diceButton )
    sub_1C372B4(0);
  enabled = UnityEngine_Behaviour__get_enabled(diceButton, 0);
  v5 = Method_ScrTerminalMap_OnClickMonoplyBoard__;
  v6 = enabled;
  if ( (*((_BYTE *)Method_ScrTerminalMap_OnClickMonoplyBoard__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_ScrTerminalMap_OnClickMonoplyBoard__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  if ( v6 )
  {
    OverwriteAssetSoundName__PlayCommonSe(v7, 18, 0, 0);
    v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  if ( (byte_4C40137 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_EventScriptFlagRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&Method_ScrTerminalMap__OnEndEventScripts_b__357_0__);
    byte_4C40137 = 1;
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
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, v4, Method_ScrTerminalMap__OnEndEventScripts_b__357_0__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (ScrTerminalMap_o *)NetworkManager__getRequest_object_(
                               v7,
                               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_EventScriptFlagRequest___);
  if ( !nowEventScriptEnt || !this )
LABEL_12:
    sub_1C372B4(this);
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
  if ( (byte_4C40134 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__OnEveryActionEnd_b__354_0__);
    this = (ScrTerminalMap_o *)sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C40134 = 1;
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
    v9 = sub_1C87870(v2->fields._eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 8);
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
    this = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0);
      return;
    }
LABEL_22:
    sub_1C372B4(this);
  }
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  if ( (byte_4C4013A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&Method_ScrTerminalMap__OnMapTouchDisableFinished_b__360_0__);
    byte_4C4013A = 1;
  }
  monitor = v2[32].monitor;
  if ( !monitor
    || (v4 = (ScrTerminalListTop_o *)*((_QWORD *)monitor + 32),
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, v2, Method_ScrTerminalMap__OnMapTouchDisableFinished_b__360_0__, 0),
        !v4)
    || (ScrTerminalListTop__CheckLimitCountUnSealQuestOpen(v4, v5, 0), (v6 = v2[32].monitor) == 0)
    || (this = (ScrTerminalMap_o *)*((_QWORD *)v6 + 32)) == 0 )
  {
    sub_1C372B4(this);
  }
  ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)this, 1, 0);
}


void ScrTerminalMap__OnTouchDisp(ScrTerminalMap_o *this, const MethodInfo *method)
{
  _BOOL4 beginTouch; // w21
  TitleInfoControl_o *isDrag; // x0
  struct MapCamera_o *mapCamera; // x8
  struct MapZoom_o *mZoom; // x8
  System_Collections_Generic_List_T__o *gimmickList; // x20
  ScrTerminalMap___c_c *v8; // x0
  System_Func_object__bool__o *_9__438_0; // x21
  Il2CppObject *v10; // x22
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  int32_t MapUIState_k__BackingField; // w8
  const MethodInfo *v18; // x2

  if ( (byte_4C4017E & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_MapGimmickComponent___);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&System_Func_MapGimmickComponent__bool__TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_OnTouchDisp__);
    sub_1C37058(&Method_ScrTerminalMap___c__OnTouchDisp_b__438_0__);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    byte_4C4017E = 1;
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
      v8 = ScrTerminalMap___c_TypeInfo;
      if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
        v8 = ScrTerminalMap___c_TypeInfo;
      }
      _9__438_0 = (System_Func_object__bool__o *)v8->static_fields->__9__438_0;
      if ( !_9__438_0 )
      {
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = ScrTerminalMap___c_TypeInfo;
        }
        v10 = (Il2CppObject *)v8->static_fields->__9;
        _9__438_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_MapGimmickComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__438_0, v10, Method_ScrTerminalMap___c__OnTouchDisp_b__438_0__, 0);
        static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
        static_fields->__9__438_0 = (struct System_Func_MapGimmickComponent__bool__o *)_9__438_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__438_0, (int32_t)_9__438_0, v12, v13);
      }
      if ( !BasicHelper__Any_object_(
              gimmickList,
              (System_Func_T__bool__o *)_9__438_0,
              (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_MapGimmickComponent___) )
      {
LABEL_26:
        v14 = Method_ScrTerminalMap_OnTouchDisp__;
        if ( (*((_BYTE *)Method_ScrTerminalMap_OnTouchDisp__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C37070(Method_ScrTerminalMap_OnTouchDisp__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C3703C(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        MapUIState_k__BackingField = this->fields._MapUIState_k__BackingField;
        if ( !MapUIState_k__BackingField )
          goto LABEL_15;
        if ( MapUIState_k__BackingField == 1 )
        {
          ScrTerminalMap__SetDispSpotIcon(this, 0, v16);
          this->fields._MapUIState_k__BackingField = 2;
          goto LABEL_15;
        }
        ScrTerminalMap__SetDispMapUI(this, 1, v16);
        ScrTerminalMap__SetDispSpotIcon(this, 1, v18);
        isDrag = this->fields.titleInfoControl;
        if ( isDrag )
        {
          TitleInfoControl__SetDispTitleUI(isDrag, 1, 0);
          this->fields._MapUIState_k__BackingField = 0;
          goto LABEL_15;
        }
LABEL_33:
        sub_1C372B4(isDrag);
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
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x20
  Il2CppObject *v5; // x21
  System_String_o *v6; // x22
  System_Action_o *v7; // x23
  EventItemSelectDlgComponent_CallbackFunc_o *v8; // x24
  System_Action_o *v9; // x25

  if ( (byte_4C40156 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_0__);
    sub_1C37058(&Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_1__);
    sub_1C37058(&Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_2__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_5535/*"EVENT_BOARD_GAME_DICE_SELECT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40156 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  EntityListByType = ItemMaster__GetEntityListByType((ItemMaster_o *)Instance, 26, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5535/*"EVENT_BOARD_GAME_DICE_SELECT"*/, 0);
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_0__, 0);
  v8 = (EventItemSelectDlgComponent_CallbackFunc_o *)sub_1C372A4(EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
  EventItemSelectDlgComponent_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_1__,
    0);
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_2__, 0);
  if ( !v5 )
LABEL_9:
    sub_1C372B4(Instance);
  CommonUI__OpenEventItemSelectDialog(
    (CommonUI_o *)v5,
    EntityListByType,
    v6,
    (System_String_o *)StringLiteral_1/*""*/,
    v7,
    v8,
    v9,
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
  Il2CppObject *Object_object__51154888; // x23
  Il2CppObject *v14; // x23
  TerminalSceneComponent_o *terminalScene; // x0
  Il2CppObject *Component_object; // x24
  const MethodInfo *v17; // x1
  int32_t EventBoardDiceVoiceServantId; // w25
  const MethodInfo *v19; // x1
  int32_t UsedDiceItemId; // w0
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  AssetData_o *v23; // x27
  System_String_o *v24; // x26
  System_Action_o *v25; // x28
  Il2CppObject *v26; // x22
  struct TerminalSceneComponent_o *v27; // x8
  const MethodInfo *v28; // x4
  TerminalPramsManager_c *v29; // x0
  UnityEngine_Object_o *diceCounterComponent; // x23
  struct EventBoardGameDiceCounter_o **p_diceCounterComponent; // x22
  Il2CppObject *v32; // x23
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *v37; // x21
  struct TerminalSceneComponent_o *v38; // x8
  int32_t maxClearCount; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t clearCount; // [xsp+8h] [xbp-68h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v41 = actionType;
  if ( (byte_4C40159 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameDiceCounter___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameDiceEffectAction___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_EndBoardGameDiceEffect__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_17196/*"bit_diceroll_"*/);
    sub_1C37058(&StringLiteral_5264/*"DiceCounter"*/);
    byte_4C40159 = 1;
  }
  boardGameDiceAssetData = this->fields.boardGameDiceAssetData;
  if ( !boardGameDiceAssetData )
    goto LABEL_10;
  v11 = System_Int32__ToString((int32_t)&v41, 0);
  v12 = System_String__Concat_63561656((System_String_o *)StringLiteral_17196/*"bit_diceroll_"*/, v11, 0);
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              boardGameDiceAssetData,
                              v12,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    goto LABEL_10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object_(
          Object_object__51154888,
          (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  terminalScene = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0, 0);
  if ( ((unsigned __int8)terminalScene & 1) != 0 )
    goto LABEL_10;
  if ( !v14 )
    goto LABEL_53;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v14,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameDiceEffectAction___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    EventBoardDiceVoiceServantId = ScrTerminalMap__GetEventBoardDiceVoiceServantId(this, v17);
    UsedDiceItemId = ScrTerminalMap__GetUsedDiceItemId(this, v19);
    v22 = ScrTerminalMap__LotteryEventBoardDiceVoiceCueName(this, UsedDiceItemId, v21);
    v23 = this->fields.boardGameDiceAssetData;
    v24 = v22;
    v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_ScrTerminalMap_EndBoardGameDiceEffect__, 0);
    if ( !Component_object )
      goto LABEL_53;
    EventBoardGameDiceEffectAction__Setup(
      (EventBoardGameDiceEffectAction_o *)Component_object,
      v23,
      diceType,
      diceNum,
      EventBoardDiceVoiceServantId,
      v24,
      v25,
      0);
  }
  v26 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v14,
          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  terminalScene = (TerminalSceneComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
  if ( ((unsigned __int8)terminalScene & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_53;
    CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)v26, diceNum, 0, 0);
  }
  this->fields.eventBoardGameColorBuffer = UnityEngine_RenderSettings__get_ambientLight(0);
  v42.fields.r = 1.0;
  v42.fields.g = 1.0;
  v42.fields.b = 1.0;
  v42.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v42, 0);
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_53;
  TerminalSceneComponent__SetDirectionalLightActive(terminalScene, 0, 0);
  v27 = this->fields.terminalScene;
  if ( !v27 )
    goto LABEL_53;
  GameObjectExtensions__SafeSetParent_36138184((UnityEngine_GameObject_o *)v14, v27->fields.mEffectPanel, 0);
  maxClearCount = 0;
  clearCount = 0;
  ScrTerminalMap__GetBoardGameSquareClearCountAndMaxCount(this, 1, &clearCount, &maxClearCount, v28);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  this->fields.isForceStopPieceEffect = v29->static_fields->_EventBoardGameSquareIndex_k__BackingField + diceNum > 21
                                     && clearCount < maxClearCount;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_diceCounterComponent = &this->fields.diceCounterComponent;
  if ( !UnityEngine_Object__op_Equality(diceCounterComponent, 0, 0) )
  {
LABEL_43:
    v37 = (UnityEngine_Object_o *)*p_diceCounterComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v37, 0, 0) )
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
          v38 = this->fields.terminalScene;
          if ( v38 )
          {
            GameObjectExtensions__SafeSetParent_36138184(
              (UnityEngine_GameObject_o *)terminalScene,
              v38->fields.mEffectPanel,
              0);
            return;
          }
        }
      }
    }
LABEL_53:
    sub_1C372B4(terminalScene);
  }
  terminalScene = (TerminalSceneComponent_o *)this->fields.boardGameDiceAssetData;
  if ( !terminalScene )
    goto LABEL_53;
  v32 = AssetData__GetObject_object__51154888(
          (AssetData_o *)terminalScene,
          (System_String_o *)StringLiteral_5264/*"DiceCounter"*/,
          (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v32, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v33 = UnityEngine_Object__Instantiate_object_(
            v32,
            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    terminalScene = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0, 0);
    if ( ((unsigned __int8)terminalScene & 1) == 0 )
    {
      if ( !v33 )
        goto LABEL_53;
      v34 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v33,
              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameDiceCounter___);
      *p_diceCounterComponent = (struct EventBoardGameDiceCounter_o *)v34;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.diceCounterComponent, (int32_t)v34, v35, v36);
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
  const MethodInfo *v11; // x1
  int32_t clearCount[2]; // [xsp+0h] [xbp-40h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4015A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4015A = 1;
  }
  *(_QWORD *)clearCount = 0;
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_31;
  EventId = MapControl_WarInfo__GetEventId(mWarInfo, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
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
  mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mWarInfo )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)mWarInfo,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
    sub_1C372B4(mWarInfo);
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
  ScrTerminalMap__StartBoardGamePieceEffectSub(this, v11);
}


void ScrTerminalMap__PlayBoardGamePieceEffectSub(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  EventBoardGameDiceCounter_o *EventBoardPieceObj_k__BackingField; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  int32_t currentSquareIndex; // w20
  int32_t eventBoardGameSquareCount; // w8
  bool v10; // vf
  int32_t v11; // w8
  UnityEngine_Object_o *diceCounterComponent; // x22
  Il2CppObject *Component_object; // x22
  System_String_o **p_animationNameBuffer; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x23
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  ScrTerminalMap_o *v22; // x0
  const MethodInfo *v23; // x3
  UnityEngine_GameObject_o *v24; // x21
  const MethodInfo *v25; // x1
  struct System_String_o *BoardGamePieceAnimationNameBySquareId; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Vector3_o EventBoardSquarePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4015C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass397_0__PlayBoardGamePieceEffectSub_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass397_0_TypeInfo);
    byte_4C4015C = 1;
  }
  v3 = sub_1C372A4(ScrTerminalMap___c__DisplayClass397_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass397_0___ctor((ScrTerminalMap___c__DisplayClass397_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_34;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  *(UnityEngine_Vector3_o *)(v3 + 24) = ScrTerminalMap__GetEventBoardSquarePos(
                                          this,
                                          this->fields.currentSquareIndex,
                                          v7);
  currentSquareIndex = this->fields.currentSquareIndex;
  eventBoardGameSquareCount = this->fields.eventBoardGameSquareCount;
  v10 = __OFSUB__(currentSquareIndex + 1, eventBoardGameSquareCount);
  v11 = currentSquareIndex + 1 - eventBoardGameSquareCount;
  this->fields.currentSquareIndex = currentSquareIndex + 1;
  if ( !((v11 < 0) ^ v10 | (v11 == 0)) )
    this->fields.currentSquareIndex = v11;
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
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)Component_object, 0);
  }
  p_animationNameBuffer = &this->fields.animationNameBuffer;
  if ( !System_String__IsNullOrEmpty(this->fields.animationNameBuffer, 0) )
  {
    EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)this->fields._EventBoardPieceObj_k__BackingField;
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_34;
    EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)EventBoardPieceObj_k__BackingField,
                                                                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_34;
    UnityEngine_Animation__Stop_71011180(
      (UnityEngine_Animation_o *)EventBoardPieceObj_k__BackingField,
      *p_animationNameBuffer,
      0);
    *p_animationNameBuffer = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animationNameBuffer, 0, v15, v16);
  }
  EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_34;
  v17 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)EventBoardPieceObj_k__BackingField,
          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0) )
  {
    v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v3,
      Method_ScrTerminalMap___c__DisplayClass397_0__PlayBoardGamePieceEffectSub_b__0__,
      0);
    if ( !v17 )
      goto LABEL_34;
    v17[2].klass = (Il2CppClass *)v19;
    sub_1C36FFC((CGThumbnailListItem_o *)&v17[2], (int32_t)v19, v20, v21);
  }
  else
  {
    v24 = this->fields._EventBoardPieceObj_k__BackingField;
    EventBoardSquarePos = ScrTerminalMap__GetEventBoardSquarePos(this, this->fields.currentSquareIndex, v18);
    GameObjectExtensions__SetPosition(v24, EventBoardSquarePos, 0);
    if ( this->fields.currentSquareIndex == this->fields.endSquareIndex )
      ScrTerminalMap__EndBoardGamePieceEffect(this, v25);
    else
      ScrTerminalMap__StartBoardGamePieceEffectSub(this, v25);
  }
  BoardGamePieceAnimationNameBySquareId = ScrTerminalMap__GetBoardGamePieceAnimationNameBySquareId(
                                            v22,
                                            currentSquareIndex,
                                            this->fields.currentSquareIndex,
                                            v23);
  this->fields.animationNameBuffer = BoardGamePieceAnimationNameBySquareId;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.animationNameBuffer,
    (int32_t)BoardGamePieceAnimationNameBySquareId,
    v27,
    v28);
  EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !EventBoardPieceObj_k__BackingField
    || (EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)EventBoardPieceObj_k__BackingField,
                                                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
  {
LABEL_34:
    sub_1C372B4(EventBoardPieceObj_k__BackingField);
  }
  UnityEngine_Animation__Play_71012036(
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *diceCounterComponent; // x21
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  TerminalPramsManager_c *v19; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *Object_object__51154888; // x22
  Il2CppObject *Component_object; // x21
  Il2CppObject *v23; // x21
  System_Action_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x4

  if ( (byte_4C4015F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass400_0__PlayBoardGameQuestArrivalEffect_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass400_0_TypeInfo);
    sub_1C37058(&StringLiteral_8908/*"MapGimmickEffect_GappolyQuestArrival"*/);
    byte_4C4015F = 1;
  }
  v9 = sub_1C372A4(ScrTerminalMap___c__DisplayClass400_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass400_0___ctor((ScrTerminalMap___c__DisplayClass400_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_33;
  *(_BYTE *)(v9 + 16) = isAuto;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 48) = callback;
  *(_DWORD *)(v9 + 32) = squareId;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v13, v14);
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
    v16);
  ScrTerminalMap__SetBoardGameSquareHaveToken(this, *(_DWORD *)(v9 + 32), v17);
  if ( *(_DWORD *)(v9 + 36) >= *(_DWORD *)(v9 + 40) )
  {
    Component_object = 0;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F896 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F896 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_QuestId_k__BackingField = 0;
    ScrTerminalMap__SetEnabledDiceButton(this, 0, v18);
    ScrTerminalMap__PlayEventBoardGameQuestArrivalVoice(this, v20);
    gameObject = (UnityEngine_Component_o *)this->fields.mapAssetData;
    if ( !gameObject )
      goto LABEL_33;
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                (AssetData_o *)gameObject,
                                (System_String_o *)StringLiteral_8908/*"MapGimmickEffect_GappolyQuestArrival"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = 0;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object_(
              Object_object__51154888,
              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_36138184(
        (UnityEngine_GameObject_o *)v23,
        this->fields._EventBoardPieceObj_k__BackingField,
        0);
      if ( v23 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v23,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
          goto LABEL_28;
        v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v24,
          (Il2CppObject *)v9,
          Method_ScrTerminalMap___c__DisplayClass400_0__PlayBoardGameQuestArrivalEffect_b__0__,
          0);
        if ( Component_object )
        {
          Component_object[2].monitor = v24;
          sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v24, v25, v26);
          goto LABEL_28;
        }
      }
LABEL_33:
      sub_1C372B4(gameObject);
    }
  }
LABEL_28:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0);
    ScrTerminalMap__UpdateBoardGameSquare(this, *(_DWORD *)(v9 + 32), *(_DWORD *)(v9 + 36), *(_DWORD *)(v9 + 40), v27);
  }
}


void ScrTerminalMap__PlayBoardGameStopPiecePanel(ScrTerminalMap_o *this, const MethodInfo *method)
{
  AssetData_o *mapAssetData; // x0
  Il2CppObject *Object_object__51154888; // x20
  Il2CppObject *v5; // x20
  Il2CppObject *Component_object; // x20
  System_Action_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TerminalPramsManager_c *v10; // x0
  int32_t EventBoardGameSquareIndex_k__BackingField; // w20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x4

  if ( (byte_4C4015E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_FrameInUI__);
    sub_1C37058(&Method_ScrTerminalMap__PlayBoardGameStopPiecePanel_b__399_0__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_8911/*"MapGimmickEffect_GappolyStopPiecePanel"*/);
    byte_4C4015E = 1;
  }
  if ( this->fields.isForceStopPieceEffect )
  {
    mapAssetData = this->fields.mapAssetData;
    if ( !mapAssetData )
      goto LABEL_21;
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                mapAssetData,
                                (System_String_o *)StringLiteral_8911/*"MapGimmickEffect_GappolyStopPiecePanel"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__Instantiate_object_(
             Object_object__51154888,
             (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_36138184(
        (UnityEngine_GameObject_o *)v5,
        this->fields._EventBoardPieceObj_k__BackingField,
        0);
      if ( !v5 )
        goto LABEL_21;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v5,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrTerminalMap__PlayBoardGameStopPiecePanel_b__399_0__, 0);
        if ( Component_object )
        {
          Component_object[2].monitor = v7;
          sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v7, v8, v9);
          return;
        }
LABEL_21:
        sub_1C372B4(mapAssetData);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  EventBoardGameSquareIndex_k__BackingField = v10->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ScrTerminalMap_FrameInUI__, 0);
  ScrTerminalMap__PlayBoardGameQuestArrivalEffect(this, EventBoardGameSquareIndex_k__BackingField, v12, 0, v13);
}


void ScrTerminalMap__PlayEventBoardGameArrivalEffectAuto(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventBoardGameSquareIndex_k__BackingField; // w20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_4C40146 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__PlayEventBoardGameArrivalEffectAuto_b__373_0__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40146 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventBoardGameSquareIndex_k__BackingField = v3->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScrTerminalMap__PlayEventBoardGameArrivalEffectAuto_b__373_0__,
    0);
  ScrTerminalMap__PlayBoardGameQuestArrivalEffect(this, EventBoardGameSquareIndex_k__BackingField, v5, 1, v6);
}


void ScrTerminalMap__PlayEventBoardGameQuestArrivalVoice(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct System_Int32_array *EventBoardGameArrivalVoiceSvtIdList_k__BackingField; // x8
  int v4; // w27
  int m_CancellationTokenSource; // w8
  ScrTerminalMap_o *v6; // x20
  int v7; // w28
  char v8; // w24
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  System_Random_o *v12; // x20
  struct System_Int32_array *v13; // x8
  struct System_Int32_array *v14; // x8
  struct System_Int32_array *v15; // x8
  System_String_o *VoiceAssetName_42795352; // x0
  SeManager_c *v17; // x8
  System_String_o *v18; // x19
  float DEFAULT_VOLUME; // s8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v2 = this;
  if ( (byte_4C4016F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&System_Random_TypeInfo);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&StringLiteral_1167/*"0_M040"*/);
    byte_4C4016F = 1;
  }
  EventBoardGameArrivalVoiceSvtIdList_k__BackingField = v2->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
  if ( !EventBoardGameArrivalVoiceSvtIdList_k__BackingField )
    goto LABEL_32;
  if ( LODWORD(EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length) <= 1 )
    goto LABEL_33;
  v4 = EventBoardGameArrivalVoiceSvtIdList_k__BackingField->m_Items[1];
  if ( v4 >= 1 )
  {
    this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_32;
    this = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_32;
    this = (ScrTerminalMap_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0);
    if ( !this )
      goto LABEL_32;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v6 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        if ( v7 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_33;
        v9 = *((_QWORD *)&v6->fields.PLAYER_ICON_POS.fields.x + v7);
        if ( !v9 )
          goto LABEL_32;
        v11 = *(_QWORD *)(v9 + 80);
        v10 = *(_QWORD *)(v9 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v11;
        *(_QWORD *)&v20.fields.fakeValue = v10;
        this = (ScrTerminalMap_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v20, 0);
        if ( (_DWORD)this == v4 )
        {
          this = (ScrTerminalMap_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v9, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_25;
          v8 = 1;
        }
        m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
        ++v7;
      }
      while ( v7 < m_CancellationTokenSource );
      if ( (v8 & 1) != 0 )
      {
        v12 = (System_Random_o *)sub_1C372A4(System_Random_TypeInfo);
        System_Random___ctor(v12, 0);
        v13 = v2->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
        if ( v13 )
        {
          if ( v12 )
          {
            this = (ScrTerminalMap_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v12->klass->vtable._7_Next.methodPtr)(
                                         v12,
                                         LODWORD(v13->max_length),
                                         v12->klass->vtable._7_Next.method);
            v14 = v2->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
            if ( v14 )
            {
              if ( (unsigned int)this < LODWORD(v14->max_length) )
              {
                v15 = (struct System_Int32_array *)((char *)v14 + 4 * (int)this);
                goto LABEL_27;
              }
LABEL_33:
              sub_1C372BC(this);
            }
          }
        }
LABEL_32:
        sub_1C372B4(this);
      }
    }
  }
LABEL_25:
  v15 = v2->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
  if ( !v15 )
    goto LABEL_32;
  if ( !LODWORD(v15->max_length) )
    goto LABEL_33;
LABEL_27:
  VoiceAssetName_42795352 = ServantVoiceEntity__getVoiceAssetName_42795352(v15->m_Items[0], 0);
  v17 = SeManager_TypeInfo;
  v18 = VoiceAssetName_42795352;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v17 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v17->static_fields->DEFAULT_VOLUME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playVoice_41518412(v18, (System_String_o *)StringLiteral_1167/*"0_M040"*/, DEFAULT_VOLUME, 0, 0, 0);
}


void ScrTerminalMap__PlayEventProgressEffect(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0

  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    sub_1C372B4(0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  MapModelManager_o *mapModelManager; // x22
  System_Action_o *v15; // x23
  TerminalPramsManager_c *v16; // x0

  if ( (byte_4C4013D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass364_0__PlayMapModelEntryAnimation_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass364_0_TypeInfo);
    byte_4C4013D = 1;
  }
  v7 = sub_1C372A4(ScrTerminalMap___c__DisplayClass364_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass364_0___ctor((ScrTerminalMap___c__DisplayClass364_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = endAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)endAction, v11, v12);
  ScrTerminalMap__FrameOutUI(this, 1, v13);
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_16;
  MapButtonControl__FrameOut(mapButtonGrid, 0);
  mapButtonGrid = (MapButtonControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mapButtonGrid )
    goto LABEL_16;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)mapButtonGrid, 0);
  mapModelManager = this->fields.mapModelManager;
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_ScrTerminalMap___c__DisplayClass364_0__PlayMapModelEntryAnimation_b__0__,
    0);
  if ( !mapModelManager
    || (MapModelManager__PlayAnimation(mapModelManager, animName, v15, 0),
        (mapButtonGrid = (MapButtonControl_o *)this->fields.mapCamera) == 0)
    || (MapCamera__StartAutoZoom((MapCamera_o *)mapButtonGrid, 2.0, 0.0, 5, 0, 0),
        (mapButtonGrid = (MapButtonControl_o *)this->fields.spotModelScreen) == 0) )
  {
LABEL_16:
    sub_1C372B4(mapButtonGrid);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapButtonGrid, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F89B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F89B = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_SpotId_k__BackingField = -1;
}


void ScrTerminalMap__ProcessMapCamera(ScrTerminalMap_o *this, bool isMapTouchEnabled, const MethodInfo *method)
{
  MapCamera_o *mapCamera; // x0

  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    sub_1C372B4(0);
  MapCamera__Process(mapCamera, isMapTouchEnabled, 0);
}


void ScrTerminalMap__ProductivityGrowthDialogOpen(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v15; // x22

  if ( (byte_4C40128 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass341_0__ProductivityGrowthDialogOpen_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass341_0_TypeInfo);
    byte_4C40128 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass341_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass341_0___ctor((ScrTerminalMap___c__DisplayClass341_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
        v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass341_0__ProductivityGrowthDialogOpen_b__0__,
          0),
        !titleInfoControl) )
  {
LABEL_14:
    sub_1C372B4(v6);
  }
  TitleInfoControl__EventProductivityGrowthDialogOpen(titleInfoControl, mActionPanel, v15, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__Quit(ScrTerminalMap_o *this, int32_t quitType, const MethodInfo *method)
{
  MapButtonControl_o *mapButtonGrid; // x0

  if ( quitType == 2 )
  {
    mapButtonGrid = this->fields.mapButtonGrid;
    if ( !mapButtonGrid )
      sub_1C372B4(0);
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

  if ( (byte_4C400FD & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C400FD = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._currentMapTexture_k__BackingField, 0, v8, v9);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapGimmickPrefab, 0, v15, v10);
  mapAssetData = this->fields.mapAssetData;
  if ( mapAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(mapAssetData, 0);
    this->fields.mapAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapAssetData, 0, v18, v19);
  }
  mapMultiAssetData = this->fields.mapMultiAssetData;
  if ( mapMultiAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(mapMultiAssetData, 0);
    this->fields.mapMultiAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapMultiAssetData, 0, v21, v22);
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
    AssetManager__releaseAsset_40534712(mapImgAssetData, 0);
    this->fields.mapImgAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapImgAssetData, 0, v24, v25);
  }
  mapInfoAssetData = this->fields.mapInfoAssetData;
  if ( mapInfoAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(mapInfoAssetData, 0);
    this->fields.mapInfoAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapInfoAssetData, 0, v27, v28);
  }
  mapInfoEffectAssetData = this->fields.mapInfoEffectAssetData;
  if ( mapInfoEffectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(mapInfoEffectAssetData, 0);
    this->fields.mapInfoEffectAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapInfoEffectAssetData, 0, v30, v31);
  }
  boardGameDiceAssetData = this->fields.boardGameDiceAssetData;
  if ( boardGameDiceAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(boardGameDiceAssetData, 0);
    this->fields.boardGameDiceAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boardGameDiceAssetData, 0, v33, v34);
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
LABEL_52:
    sub_1C372B4(mapModelManager);
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
    v39 = sub_1C87870(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 9);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v39)(
    eventMapManagerInterface_k__BackingField,
    *(_QWORD *)(v39 + 8));
}


void ScrTerminalMap__ReleaseMapUseVoiceData(ScrTerminalMap_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ScrTerminalMap_o *v4; // x19
  struct System_Int32_array *useVoiceSvtIDList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x22
  System_String_o *VoiceAssetName_42795352; // x20

  v4 = this;
  if ( (byte_4C400F9 & 1) == 0 )
  {
    this = (ScrTerminalMap_o *)sub_1C37058(&SoundManager_TypeInfo);
    byte_4C400F9 = 1;
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
            sub_1C372BC(this);
          VoiceAssetName_42795352 = ServantVoiceEntity__getVoiceAssetName_42795352(useVoiceSvtIDList->m_Items[v7], 0);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage(VoiceAssetName_42795352, 0);
          LODWORD(max_length) = useVoiceSvtIDList->max_length;
          ++v7;
        }
        while ( (__int64)v7 < (int)max_length );
      }
    }
  }
  v4->fields.useVoiceSvtIDList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.useVoiceSvtIDList, 0, v2, v3);
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

  if ( (byte_4C40157 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_ItemUseRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_EndRequestDiceUse__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C40157 = 1;
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_ScrTerminalMap_EndRequestDiceUse__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_ItemUseRequest___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0), !Request_object) )
    sub_1C372B4(Instance);
  ItemUseRequest__beginRequest((ItemUseRequest_o *)Request_object, itemId, num, eventId, 0);
}


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
  if ( (byte_4C40121 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalListTop_RefreshTerminalScene__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_5687/*"EVENT_REWARD_END_MESSAGE"*/);
    sub_1C37058(&StringLiteral_19109/*"evChange_Map"*/);
    this = (ScrTerminalMap_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40121 = 1;
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
    this = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
    v11 = v8->fields.mWarEnt;
    if ( !v11 || !this )
      goto LABEL_25;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v11->fields.eventId,
           (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      this = (ScrTerminalMap_o *)entity;
      if ( entity )
      {
        if ( EventEntity__IsOpen((EventEntity_o *)entity, 0, 0) )
          goto LABEL_14;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ScrTerminalMap_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_REWARD_END_MESSAGE"*/, 0);
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
            v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
      sub_1C372B4(this);
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
  ScrTerminalMap__mfCallFsmEvent(v8, (System_String_o *)StringLiteral_19109/*"evChange_Map"*/, v12);
  return 1;
}


void ScrTerminalMap__RequestMapMove(ScrTerminalMap_o *this, int32_t layer, const MethodInfo *method)
{
  __int64 v5; // x21
  MapModelManager_o *mapModelManager; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct MapModelManager_o *v9; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v14; // x1
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s12
  float v19; // s11
  float MapCameraMoveTimeConstant; // s13
  const MethodInfo *v21; // x1
  float MapCameraMoveTimeCoefficient; // s14
  const MethodInfo *v23; // x1
  int32_t MapCameraMoveTimeLogarithmBase; // w22
  double v25; // d12
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x1
  float v28; // s15
  float v29; // s11
  float v30; // s12
  float MapCamera2DResetSize; // s0
  MapCamera_o *mapCamera; // x23
  float v33; // s13
  const MethodInfo *v34; // x1
  float Camera2DResetDuration; // s14
  const MethodInfo_38CD368 *v36; // x2
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

  if ( (byte_4C40122 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Nullable_Vector3___ctor__);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass334_0__RequestMapMove_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass334_0_TypeInfo);
    byte_4C40122 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass334_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass334_0___ctor((ScrTerminalMap___c__DisplayClass334_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_32;
  mapModelManager = (MapModelManager_o *)MapModelManager__get_IsMapModel(mapModelManager, 0);
  if ( ((unsigned __int8)mapModelManager & 1) != 0 && this->fields.currentMapLayerId != layer )
  {
    v9 = this->fields.mapModelManager;
    if ( !v9 )
      goto LABEL_32;
    mapModelManager = (MapModelManager_o *)v9->fields._MapModelCamera_k__BackingField;
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
    v15 = LocationPostion.fields.x;
    v16 = LocationPostion.fields.y;
    v17 = LocationPostion.fields.z;
    if ( !byte_4C3C91F )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3C91F = 1;
    }
    v18 = y - v16;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v19 = sqrtf(
            (float)((float)(z - v17) * (float)(z - v17))
          + (float)((float)((float)(x - v15) * (float)(x - v15)) + (float)(v18 * v18)));
    if ( v19 > 0.0 )
    {
      MapCameraMoveTimeConstant = ScrTerminalMap__get_MapCameraMoveTimeConstant(this, v14);
      MapCameraMoveTimeCoefficient = ScrTerminalMap__get_MapCameraMoveTimeCoefficient(this, v21);
      MapCameraMoveTimeLogarithmBase = ScrTerminalMap__get_MapCameraMoveTimeLogarithmBase(this, v23);
      if ( !byte_4C401AE )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C401AE = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v25 = System_Math__Log(v19, (float)MapCameraMoveTimeLogarithmBase, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      TerminalPramsManager__PlaySystemSE(0, 0);
      mapModelManager = (MapModelManager_o *)this->fields.mapButtonGrid;
      this->fields.currentMapLayerId = layer;
      if ( mapModelManager )
      {
        MapButtonControl__UpdateButtonSprite((MapButtonControl_o *)mapModelManager, 0);
        v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v26,
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
              v47 = v25;
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
                (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
              mapModelManager = (MapModelManager_o *)ScrTerminalMap__get_MapCameraMoveEasingType(this, v38);
              if ( !mapCamera )
                goto LABEL_32;
              v39 = size;
              MapCamera__StartAutoWork(mapCamera, Camera2DResetDuration, v49, v39, (int32_t)mapModelManager, 0, 0);
              MapCameraMoveTimeConstant = v46;
              v25 = v47;
            }
            v40 = this->fields.mapModelManager;
            v41 = *(float *)(v5 + 24);
            v42 = *(float *)(v5 + 28);
            v43 = *(float *)(v5 + 32);
            mapModelManager = (MapModelManager_o *)ScrTerminalMap__get_MapCameraMoveEasingType(this, v27);
            if ( v40 )
            {
              v44 = v25;
              v45 = MapCameraMoveTimeConstant + (float)(v48 * v44);
              v56.fields.x = x;
              v56.fields.y = y;
              v56.fields.z = z;
              v57.fields.x = v41;
              v57.fields.y = v42;
              v57.fields.z = v43;
              MapModelManager__MoveMapModelCamera(v40, layer, v56, v57, v45, (int32_t)mapModelManager, v26, 0);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_1C372B4(mapModelManager);
    }
  }
}


void ScrTerminalMap__RequestMapMove_37107976(
        ScrTerminalMap_o *this,
        int32_t layer,
        float duration,
        int32_t easingType,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v11; // x21
  MapModelManager_o *mapModelManager; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct MapModelManager_o *v17; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s10
  float z; // s11
  float v22; // s12
  float v23; // s13
  float v24; // s14
  float v25; // s13
  System_Action_o *v26; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocationPostion; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40123 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass335_0__RequestMapMove_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass335_0_TypeInfo);
    byte_4C40123 = 1;
  }
  v11 = sub_1C372A4(ScrTerminalMap___c__DisplayClass335_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass335_0___ctor((ScrTerminalMap___c__DisplayClass335_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 40) = endAction;
  *(_DWORD *)(v11 + 24) = layer;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 40), (int32_t)endAction, v15, v16);
  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_19;
  mapModelManager = (MapModelManager_o *)MapModelManager__get_IsMapModel(mapModelManager, 0);
  if ( ((unsigned __int8)mapModelManager & 1) != 0 && this->fields.currentMapLayerId != *(_DWORD *)(v11 + 24) )
  {
    v17 = this->fields.mapModelManager;
    if ( !v17 )
      goto LABEL_19;
    mapModelManager = (MapModelManager_o *)v17->fields._MapModelCamera_k__BackingField;
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
    v22 = LocationPostion.fields.x;
    v23 = LocationPostion.fields.y;
    v24 = LocationPostion.fields.z;
    if ( !byte_4C3C91F )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3C91F = 1;
    }
    v25 = y - v23;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf(
           (float)((float)(z - v24) * (float)(z - v24))
         + (float)((float)((float)(x - v22) * (float)(x - v22)) + (float)(v25 * v25))) > 0.0 )
    {
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
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
          v29.fields.x = x;
          v29.fields.y = y;
          v29.fields.z = z;
          MapModelManager__MoveMapModelCamera(
            mapModelManager,
            *(_DWORD *)(v11 + 24),
            v29,
            *(UnityEngine_Vector3_o *)(v11 + 28),
            duration,
            easingType,
            v26,
            0);
          return;
        }
      }
LABEL_19:
      sub_1C372B4(mapModelManager);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 40), 0);
}


void ScrTerminalMap__SetActiveDiceButton(ScrTerminalMap_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *diceButton; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C4014E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4014E = 1;
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
      sub_1C372B4(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__SetBoardGameSquareHaveToken(ScrTerminalMap_o *this, int32_t squareId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x21
  Il2CppObject *MasterData_object; // x27
  Il2CppObject *v8; // x22
  System_Collections_Generic_IEnumerable_TSource__o *datalist; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x24
  System_Collections_Generic_List_object__o *v11; // x26
  System_Collections_Generic_List_bool__o *v12; // x21
  _BOOL8 v13; // x0
  _BOOL8 HasFlag; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  ScrTerminalMap___c_c *v22; // x0
  System_Func_object__int__o *_9__409_0; // x27
  Il2CppObject *v24; // x28
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  Il2CppObject *current; // x26
  __int64 v30; // x27
  __int64 v31; // x0
  NetworkManager_c *v32; // x0
  bool v33; // w26
  System_Func_object__bool__o *v34; // x28
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x0
  System_Func_object__bool__o *v39; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_TSource__o *v41; // x0
  System_Collections_Generic_List_TSource__o *v42; // x27
  int v43; // w8
  int i; // w28
  struct System_Boolean_array *v45; // x9
  _QWORD *v46; // x10
  __int64 v47; // x11
  struct System_Boolean_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  const MethodInfo *v51; // x2
  int32_t v52; // w22
  int32_t v53; // w19
  UnityEngine_GameObject_o *EventBoardSquareObject; // x23
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x5
  __int64 v59; // x6
  __int64 v60; // x7
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  UnityEngine_Object_o *GameObjectWithLog; // x23
  Il2CppObject *Component_object; // x23
  float v65; // s0 OVERLAPPED
  float v66; // s3
  float v67; // s1
  float v68; // s2
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-D0h] BYREF
  UserQuestEntity_o *v70; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_4C40167 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventBoardGameTokenRewardMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__getEntityList__);
    sub_1C37058(&Method_DataMasterBase_GiftMaster__GiftEntity__string__getEntityList__);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_QuestEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_SingleOrDefault_EventBoardGameTokenRewardEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_GiftEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_QuestEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C37058(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_EventBoardGameTokenRewardEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_QuestEntity__int__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__SetBoardGameSquareHaveToken_b__409_0__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass409_0__SetBoardGameSquareHaveToken_b__1__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass409_0__SetBoardGameSquareHaveToken_b__2__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass409_0_TypeInfo);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    sub_1C37058(&StringLiteral_24117/*"token_{0:D2}"*/);
    byte_4C40167 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  entity = 0;
  memset(&v71, 0, sizeof(v71));
  v70 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v6 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  v8 = DataManager__GetMasterData_object_(
         v6,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v6,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventBoardGameTokenRewardMaster___);
  if ( !Instance )
    goto LABEL_82;
  datalist = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.datalist;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v6,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_82;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.datalist;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  v12 = (System_Collections_Generic_List_bool__o *)sub_1C372A4(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v12,
    (const MethodInfo_375C3E0 *)Method_System_Collections_Generic_List_bool___ctor__);
  Instance = (DataManager_o *)this->fields._EventBoardQuestReleaseList_k__BackingField;
  if ( !Instance )
    goto LABEL_82;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v73 = v69;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v73.fields._current )
      sub_1C372B4(v13);
    if ( v73.fields._current[2].klass == (Il2CppClass *)squareId )
    {
      if ( !MasterData_object )
        sub_1C372B4(v13);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             &entity,
             (int32_t)v73.fields._current[1].klass,
             (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C372B4(0);
        HasFlag = QuestEntity__HasFlag((QuestEntity_o *)entity, 0x8000000000LL, 0);
        if ( !HasFlag )
        {
          if ( !v11 )
            sub_1C372B4(HasFlag);
          v17 = entity;
          items = v11->fields._items;
          v19 = Method_System_Collections_Generic_List_QuestEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C372B4(HasFlag);
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              v17,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v17;
            sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v17, v15, v16);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  v22 = ScrTerminalMap___c_TypeInfo;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v22 = ScrTerminalMap___c_TypeInfo;
  }
  _9__409_0 = (System_Func_object__int__o *)v22->static_fields->__9__409_0;
  if ( !_9__409_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ScrTerminalMap___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__409_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_QuestEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__409_0,
      v24,
      Method_ScrTerminalMap___c__SetBoardGameSquareHaveToken_b__409_0__,
      0);
    static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
    static_fields->__9__409_0 = (struct System_Func_QuestEntity__int__o *)_9__409_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__409_0, (int32_t)_9__409_0, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                                                               (System_Func_TSource__TKey__o *)_9__409_0,
                                                               (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_QuestEntity__int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v28,
                                (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestEntity___);
  if ( !Instance )
    goto LABEL_82;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v71 = v69;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
  {
    current = v71.fields._current;
    v30 = sub_1C372A4(ScrTerminalMap___c__DisplayClass409_0_TypeInfo);
    ScrTerminalMap___c__DisplayClass409_0___ctor((ScrTerminalMap___c__DisplayClass409_0_o *)v30, 0);
    if ( !current )
      sub_1C372B4(v31);
    if ( !v30 )
      sub_1C372B4(v31);
    *(_DWORD *)(v30 + 16) = current[1].klass;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    v32 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v32 = NetworkManager_TypeInfo;
    }
    if ( !v8 )
      sub_1C372B4(v32);
    if ( UserQuestMaster__TryGetEntity(
           (UserQuestMaster_o *)v8,
           &v70,
           v32->static_fields->userIdNumber,
           *(_DWORD *)(v30 + 16),
           0) )
    {
      if ( !v70 )
        sub_1C372B4(0);
      v33 = UserQuestEntity__getClearNum(v70, 0) > 0;
    }
    else
    {
      v33 = 0;
    }
    v34 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventBoardGameTokenRewardEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v30,
      Method_ScrTerminalMap___c__DisplayClass409_0__SetBoardGameSquareHaveToken_b__1__,
      0);
    v35 = System_Linq_Enumerable__SingleOrDefault_object__51530816(
            datalist,
            (System_Func_TSource__bool__o *)v34,
            (const MethodInfo_3124C40 *)Method_System_Linq_Enumerable_SingleOrDefault_EventBoardGameTokenRewardEntity___);
    *(_QWORD *)(v30 + 24) = v35;
    sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 24), (int32_t)v35, v36, v37);
    if ( *(_QWORD *)(v30 + 24) )
    {
      v39 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v39,
        (Il2CppObject *)v30,
        Method_ScrTerminalMap___c__DisplayClass409_0__SetBoardGameSquareHaveToken_b__2__,
        0);
      v40 = System_Linq_Enumerable__Where_object_(
              v10,
              (System_Func_TSource__bool__o *)v39,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      v41 = System_Linq_Enumerable__ToList_object_(
              v40,
              (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
      v42 = v41;
      if ( !v41 )
        sub_1C372B4(0);
      v43 = v41->fields._size;
      if ( v43 )
      {
        if ( v43 >= 1 )
        {
          for ( i = 0; i < v43; ++i )
          {
            if ( !v12 )
              sub_1C372B4(v41);
            v45 = v12->fields._items;
            v46 = Method_System_Collections_Generic_List_bool__Add__;
            ++v12->fields._version;
            if ( !v45 )
              sub_1C372B4(v41);
            v47 = v12->fields._size;
            if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
            {
              System_Collections_Generic_List_bool___AddWithResize(
                v12,
                v33,
                *(const MethodInfo_375CC44 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              v43 = v42->fields._size;
            }
            else
            {
              v12->fields._size = v47 + 1;
              v45->m_Items[v47] = v33;
            }
          }
        }
      }
      else
      {
        if ( !v12 )
          sub_1C372B4(v41);
        v48 = v12->fields._items;
        v49 = Method_System_Collections_Generic_List_bool__Add__;
        ++v12->fields._version;
        if ( !v48 )
          sub_1C372B4(v41);
        v50 = v12->fields._size;
        if ( (unsigned int)v50 < LODWORD(v48->max_length) )
          goto LABEL_61;
LABEL_57:
        System_Collections_Generic_List_bool___AddWithResize(
          v12,
          v33,
          *(const MethodInfo_375CC44 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v12 )
        sub_1C372B4(v38);
      v48 = v12->fields._items;
      v49 = Method_System_Collections_Generic_List_bool__Add__;
      ++v12->fields._version;
      if ( !v48 )
        sub_1C372B4(v38);
      v50 = v12->fields._size;
      if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
        goto LABEL_57;
LABEL_61:
      v12->fields._size = v50 + 1;
      v48->m_Items[v50] = v33;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v12 )
LABEL_82:
    sub_1C372B4(Instance);
  if ( v12->fields._size >= 1 )
  {
    v52 = 0;
    do
    {
      v53 = v52 + 1;
      EventBoardSquareObject = ScrTerminalMap__GetEventBoardSquareObject(this, squareId, v51);
      LODWORD(v69.fields._list) = v52 + 1;
      v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v55, v56, v57, v58, v59, v60);
      v62 = System_String__Format((System_String_o *)StringLiteral_24117/*"token_{0:D2}"*/, v61, 0);
      GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                    EventBoardSquareObject,
                                                    v62,
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
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      Instance = (DataManager_o *)System_Collections_Generic_List_bool___get_Item(
                                    v12,
                                    v52,
                                    (const MethodInfo_375C944 *)Method_System_Collections_Generic_List_bool__get_Item__);
      v65 = ((unsigned __int8)Instance & 1) != 0 ? 0.5 : 1.0;
      if ( !Component_object )
        goto LABEL_82;
      v66 = 1.0;
      v67 = v65;
      v68 = v65;
      UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v65, 0);
      ++v52;
    }
    while ( v53 < v12->fields._size );
  }
}


void ScrTerminalMap__SetCore(ScrTerminalMap_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  PlayMakerFSM_o *MyFsmP; // x0

  if ( (byte_4C400D3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12673/*"SelectCore"*/);
    byte_4C400D3 = 1;
  }
  MyFsmP = ScrTerminalMap__mfGetMyFsmP(this, (const MethodInfo *)obj);
  if ( !MyFsmP
    || (MyFsmP = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(MyFsmP, 0)) == 0
    || (MyFsmP = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)MyFsmP,
                                     (System_String_o *)StringLiteral_12673/*"SelectCore"*/,
                                     0)) == 0 )
  {
    sub_1C372B4(MyFsmP);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)MyFsmP, obj, 0);
}


void ScrTerminalMap__SetDiceButton(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  TerminalPramsManager_c *v4; // x0
  bool v5; // w1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4C4014F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4014F = 1;
  }
  if ( !ScrTerminalMap__IsEnabledToUseEventItem(this, method) )
    goto LABEL_11;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFC0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFC0 = 1;
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
    if ( !byte_4C401C4 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401C4 = 1;
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
    sub_1C372B4(0);
  TerminalSceneComponent__SetDirectionalLightActive(terminalScene, isActive, 0);
}


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
    sub_1C372B4(dispRoot);
  }
  TitleInfoControl__SetDispChangeBtn(titleInfoControl, (unsigned __int8)dispRoot & 1, 0);
}


void ScrTerminalMap__SetDispMapUI(ScrTerminalMap_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mapModelManager; // x0
  UnityEngine_Object_o *subRootRoadP; // x21
  UnityEngine_Object_o *rootRoadP; // x21
  UnityEngine_Object_o *mapButtonGrid; // x21
  UnityEngine_Object_o *playerIcon; // x21
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *SpotPrefab; // x21
  _BOOL8 v13; // x0
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *m_CachedPtr; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  EventMapManagerInterface_c *klass; // x8
  __int64 v25; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4017B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4017B = 1;
  }
  memset(&v29, 0, sizeof(v29));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)mapModelManager,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v10 )
      break;
    if ( !v29.fields._current )
      sub_1C372B4(v10);
    SpotPrefab = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotPrefab(this, (int32_t)v29.fields._current[1].klass, v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality(SpotPrefab, 0, 0);
    if ( v13 )
    {
      if ( isDisp )
      {
        if ( !SpotPrefab )
          sub_1C372B4(v13);
        SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)SpotPrefab, 1, 0);
        SrcSpotBasePrefab__SetBtnColliderEnable((SrcSpotBasePrefab_o *)SpotPrefab, 1, 0);
      }
      else
      {
        if ( !SpotPrefab )
          sub_1C372B4(v13);
        monitor = (UnityEngine_Component_o *)SpotPrefab[5].monitor;
        if ( !monitor )
          sub_1C372B4(0);
        transform = UnityEngine_Component__get_transform(monitor, 0);
        if ( !transform )
          sub_1C372B4(0);
        parent = UnityEngine_Transform__get_parent(transform, 0);
        if ( !parent )
          sub_1C372B4(0);
        v17 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(parent, 0);
        if ( !v17 )
          sub_1C372B4(0);
        gameObject = UnityEngine_Component__get_gameObject(v17, 0);
        if ( !gameObject )
          sub_1C372B4(0);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        m_CachedPtr = (UnityEngine_Component_o *)SpotPrefab[5].fields.m_CachedPtr;
        if ( !m_CachedPtr )
          sub_1C372B4(0);
        v20 = UnityEngine_Component__get_transform(m_CachedPtr, 0);
        if ( !v20 )
          sub_1C372B4(0);
        v21 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v20, 0);
        if ( !v21 )
          sub_1C372B4(0);
        v22 = UnityEngine_Component__get_gameObject(v21, 0);
        if ( !v22 )
          sub_1C372B4(0);
        UnityEngine_GameObject__SetActive(v22, 0, 0);
        SrcSpotBasePrefab__SetDispNoticeNumber((SrcSpotBasePrefab_o *)SpotPrefab, 0, 0);
        SrcSpotBasePrefab__SetBtnColliderEnable((SrcSpotBasePrefab_o *)SpotPrefab, 0, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
LABEL_68:
    sub_1C372B4(mapModelManager);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v25 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_53;
    }
    v27 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_53:
    v27 = sub_1C87870(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 12);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, bool, _QWORD))v27)(
    eventMapManagerInterface_k__BackingField,
    isDisp,
    *(_QWORD *)(v27 + 8));
}


void ScrTerminalMap__SetDispSpotIcon(ScrTerminalMap_o *this, bool isDisp, const MethodInfo *method)
{
  MapControl_MapInfo_o *mMapInfo; // x0
  bool v6; // w20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Object_o *SpotPrefab; // x21
  _BOOL8 v10; // x0
  UnityEngine_Component_o *m_CachedPtr; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4017C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4017C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  mMapInfo = this->fields.mMapInfo;
  if ( !mMapInfo || (mMapInfo = (MapControl_MapInfo_o *)MapControl_MapInfo__GetSpotList(mMapInfo, 0)) == 0 )
    sub_1C372B4(mMapInfo);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)mMapInfo,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v6 = isDisp;
  v14 = v13;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v14.fields._current )
      sub_1C372B4(v7);
    SpotPrefab = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotPrefab(this, (int32_t)v14.fields._current[1].klass, v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality(SpotPrefab, 0, 0);
    if ( v10 )
    {
      if ( !SpotPrefab )
        sub_1C372B4(v10);
      m_CachedPtr = (UnityEngine_Component_o *)SpotPrefab[4].fields.m_CachedPtr;
      if ( !m_CachedPtr )
        sub_1C372B4(0);
      gameObject = UnityEngine_Component__get_gameObject(m_CachedPtr, 0);
      if ( !gameObject )
        sub_1C372B4(0);
      UnityEngine_GameObject__SetActive(gameObject, v6, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}


void ScrTerminalMap__SetEnabledDiceButton(ScrTerminalMap_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_Object_o *diceButton; // x21
  UnityEngine_Behaviour_o *diceButtonArrow; // x0
  float v7; // s8
  TerminalPramsManager_c *v8; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4014D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4014D = 1;
  }
  diceButton = (UnityEngine_Object_o *)this->fields.diceButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(diceButton, 0, 0) )
  {
    diceButtonArrow = (UnityEngine_Behaviour_o *)this->fields.diceButton;
    if ( !diceButtonArrow )
      goto LABEL_20;
    v7 = isEnabled ? 1.0 : 0.5;
    UnityEngine_Behaviour__set_enabled(diceButtonArrow, isEnabled, 0);
    diceButtonArrow = (UnityEngine_Behaviour_o *)this->fields.diceButton;
    if ( !diceButtonArrow
      || (v9.fields.a = 1.0,
          v9.fields.r = v7,
          v9.fields.g = v7,
          v9.fields.b = v7,
          UIButtonColor__set_defaultColor((UIButtonColor_o *)diceButtonArrow, v9, 0),
          (diceButtonArrow = (UnityEngine_Behaviour_o *)this->fields.diceButtonArrow) == 0) )
    {
LABEL_20:
      sub_1C372B4(diceButtonArrow);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)diceButtonArrow, isEnabled, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C401C3 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401C3 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = isEnabled;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *Component_object; // x21
  int v19; // w8
  Il2CppObject *v20; // x0
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C4016B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_18006/*"clear_marker"*/);
    sub_1C37058(&StringLiteral_18007/*"clear_marker_{0:D2}"*/);
    byte_4C4016B = 1;
  }
  EventBoardSquareObject = ScrTerminalMap__GetEventBoardSquareObject(this, index, *(const MethodInfo **)&clearCount);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBoardSquareObject, 0, 0) )
  {
    GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                  EventBoardSquareObject,
                                                  (System_String_o *)StringLiteral_18006/*"clear_marker"*/,
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
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      v19 = maxClearCount - clearCount;
      if ( maxClearCount < clearCount )
        v19 = 0;
      v21 = v19;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v12, v13, v14, v15, v16, v17);
      v11 = System_String__Format((System_String_o *)StringLiteral_18007/*"clear_marker_{0:D2}"*/, v20, 0);
      if ( !Component_object )
LABEL_15:
        sub_1C372B4(v11);
      UISprite__set_spriteName((UISprite_o *)Component_object, v11, 0);
    }
  }
}


void ScrTerminalMap__SetEventBoardGameSpotBadge(ScrTerminalMap_o *this, int32_t questCount, const MethodInfo *method)
{
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x21
  SrcSpotBasePrefab_o *v6; // x0

  if ( (byte_4C4014B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4014B = 1;
  }
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventBoardGameSpotPrefab, 0, 0) )
  {
    v6 = this->fields.eventBoardGameSpotPrefab;
    if ( !v6 )
      sub_1C372B4(0);
    SrcSpotBasePrefab__mfSetQuestCount(v6, questCount, 0);
  }
}


void ScrTerminalMap__SetEventBoardQuestArrivalPanel(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *EventBoardQuestArrivalPanelObj_k__BackingField; // x20
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  TerminalPramsManager_c *IsEnabledToUseEventItem; // x0
  bool v8; // w1

  if ( (byte_4C40150 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40150 = 1;
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
        if ( !byte_4C3FFC0 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3FFC0 = 1;
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
        sub_1C372B4(IsEnabledToUseEventItem);
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

  if ( (byte_4C400FA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C400FA = 1;
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
    sub_1C372B4(mapModelBg);
  UnityEngine_GameObject__SetActive(v14, (unsigned __int8)mapModelBg & 1, 0);
}


void ScrTerminalMap__SetMapButtonNextBySpotInfo(
        ScrTerminalMap_o *this,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapButtonGrid; // x21
  MapButtonControl_o *v6; // x0

  if ( (byte_4C4017D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4017D = 1;
  }
  mapButtonGrid = (UnityEngine_Object_o *)this->fields.mapButtonGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapButtonGrid, 0, 0) )
  {
    v6 = this->fields.mapButtonGrid;
    if ( !v6 )
      sub_1C372B4(0);
    MapButtonControl__SetNext(v6, this->fields.mWarInfo, this->fields.mMapInfo, spotInfo, 0);
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
  if ( (byte_4C40108 & 1) == 0 )
  {
    this = (ScrTerminalMap_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40108 = 1;
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  UnityEngine_Object_o *v10; // x0

  if ( (byte_4C400E1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_13005/*"Spot_Player"*/);
    byte_4C400E1 = 1;
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
           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.playerIcon = (struct UnityEngine_GameObject_o *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playerIcon, (int32_t)v7, v8, v9);
  }
  GameObjectExtensions__SetParent_36138108(this->fields.playerIcon, spotObject, 0);
  GameObjectExtensions__SetLocalPosition(this->fields.playerIcon, this->fields.PLAYER_ICON_POS, 0);
  GameObjectExtensions__ResetLocalRotation(this->fields.playerIcon, 0);
  GameObjectExtensions__SetLocalScale_36134564(this->fields.playerIcon, 0.8, 0.8, 1.0, 0);
  v10 = (UnityEngine_Object_o *)this->fields.playerIcon;
  if ( !v10 )
    sub_1C372B4(0);
  UnityEngine_Object__set_name(v10, (System_String_o *)StringLiteral_13005/*"Spot_Player"*/, 0);
}


void ScrTerminalMap__SetSpotClickAct(ScrTerminalMap_o *this, System_Action_o *action, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mSpotClickAct = action;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSpotClickAct, (int32_t)action, (int32_t)method, v3);
}


void ScrTerminalMap__SetupDiceButton(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *diceButton; // x0
  UISprite_o *Component_object; // x20
  _DWORD *v5; // x8
  float v6; // s8
  float v7; // s9
  float v8; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v10; // x20
  const MethodInfo *v11; // x2
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4014A & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&StringLiteral_16894/*"arrow"*/);
    sub_1C37058(&StringLiteral_19748/*"game1_button"*/);
    byte_4C4014A = 1;
  }
  diceButton = (UnityEngine_Component_o *)this->fields.diceButton;
  if ( !diceButton )
    goto LABEL_20;
  diceButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(diceButton, 0);
  if ( !diceButton )
    goto LABEL_20;
  Component_object = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)diceButton,
                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  diceButton = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                            Component_object,
                                            (System_String_o *)StringLiteral_19748/*"game1_button"*/,
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
  v5 = *(_DWORD **)(diceButton[7].fields.m_CachedPtr + 824);
  if ( !v5 )
    goto LABEL_20;
  if ( v5[6] <= 2u )
    sub_1C372BC(diceButton);
  diceButton = (UnityEngine_Component_o *)this->fields.diceButton;
  if ( !diceButton )
    goto LABEL_20;
  v6 = (float)(int)v5[8];
  v7 = (float)(int)v5[9];
  v8 = (float)(int)v5[10];
  gameObject = UnityEngine_Component__get_gameObject(diceButton, 0);
  GameObjectExtensions__SetLocalPosition_36132496(gameObject, v6, v7, v8, 0);
  diceButton = (UnityEngine_Component_o *)this->fields.diceButton;
  if ( !diceButton )
    goto LABEL_20;
  diceButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(diceButton, 0);
  if ( !diceButton )
    goto LABEL_20;
  diceButton = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)diceButton,
                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !diceButton )
    goto LABEL_20;
  v12.fields.y = (float)Component_object->fields.mHeight;
  v12.fields.x = (float)Component_object->fields.mWidth;
  v12.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)diceButton, v12, 0);
  diceButton = (UnityEngine_Component_o *)this->fields.diceButtonArrow;
  if ( !diceButton
    || (diceButton = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)diceButton,
                                                  0)) == 0
    || (v10 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)diceButton,
                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        diceButton = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                                  (UISprite_o *)v10,
                                                  (System_String_o *)StringLiteral_16894/*"arrow"*/,
                                                  0),
        !v10) )
  {
LABEL_20:
    sub_1C372B4(diceButton);
  }
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[33].methodPtr)(
    v10,
    v10->klass->vtable[33].method);
  ScrTerminalMap__SetActiveDiceButton(this, 1, v11);
}


void ScrTerminalMap__SetupEventBoardGame(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *EventBoardPieceObj_k__BackingField; // x20
  MapControl_WarInfo_o *mWarInfo; // x0
  int32_t EventId; // w20
  DataManager_o *v7; // x21
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v9; // x2
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  int32_t value; // w22
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v14; // x23
  struct System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x4
  TerminalPramsManager_c *v21; // x0
  const MethodInfo *v22; // x4
  int32_t v23; // w20
  int32_t v24; // w21
  int32_t v25; // w22
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x2
  TerminalPramsManager_c *v28; // x0
  ScrTerminalMap_c *v29; // x8
  int32_t EventBoardGameSquareIndex_k__BackingField; // w21
  TerminalPramsManager_c *v31; // x0
  ScrTerminalMap_c *v32; // x8
  int32_t v33; // w21
  ScrTerminalMap___c_c *v34; // x0
  System_Action_o *_9__372_0; // x20
  Il2CppObject *v36; // x21
  struct ScrTerminalMap___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t clearCount[2]; // [xsp+0h] [xbp-50h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o EventBoardSquarePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40145 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventBoardGameCellMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__SetupEventBoardGame_b__372_0__);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    sub_1C37058(&StringLiteral_10655/*"PlayEventBoardGameArrivalEffectAuto"*/);
    byte_4C40145 = 1;
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
      mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mWarInfo )
        goto LABEL_100;
      v7 = (DataManager_o *)mWarInfo;
      mWarInfo = (MapControl_WarInfo_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)mWarInfo,
                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventBoardGameCellMaster___);
      if ( !mWarInfo )
        goto LABEL_100;
      this->fields.eventBoardGameSquareCount = EventBoardGameCellMaster__GetBoardSquareCount(
                                                 (EventBoardGameCellMaster_o *)mWarInfo,
                                                 EventId,
                                                 0);
      MasterData_object = DataManager__GetMasterData_object_(
                            v7,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
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
      if ( !byte_4C401A8 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401A8 = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      if ( v10->static_fields->_EventBoardGameSquareIndex_k__BackingField < 1 )
      {
        if ( entity )
        {
          value = entity->fields.value;
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          if ( !byte_4C401C1 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C401C1 = 1;
          }
          v11 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v11 = TerminalPramsManager_TypeInfo;
          }
          static_fields = v11->static_fields;
        }
        else
        {
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          if ( !byte_4C401C1 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C401C1 = 1;
          }
          v11 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v11 = TerminalPramsManager_TypeInfo;
          }
          static_fields = v11->static_fields;
          value = 1;
        }
        static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
      }
      else
      {
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        if ( !byte_4C401A8 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C401A8 = 1;
        }
        v11 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v11 = TerminalPramsManager_TypeInfo;
        }
        value = v11->static_fields->_EventBoardGameSquareIndex_k__BackingField;
      }
      if ( !v11->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v11);
      if ( !byte_4C401A8 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401A8 = 1;
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
        ScrTerminalMap__SetEventBoardGameSpotBadge(this, 0, v9);
      v14 = this->fields._EventBoardPieceObj_k__BackingField;
      EventBoardSquarePos = ScrTerminalMap__GetEventBoardSquarePos(this, value, v9);
      GameObjectExtensions__SetPosition(v14, EventBoardSquarePos, 0);
      mWarInfo = (MapControl_WarInfo_o *)DataManager__GetMasterData_object_(
                                           v7,
                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !mWarInfo )
LABEL_100:
        sub_1C372B4(mWarInfo);
      ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                                  (QuestReleaseMaster_o *)mWarInfo,
                                  EventId,
                                  116,
                                  0);
      this->fields._EventBoardQuestReleaseList_k__BackingField = ListByTargetAndCondType;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields._EventBoardQuestReleaseList_k__BackingField,
        (int32_t)ListByTargetAndCondType,
        v16,
        v17);
      ScrTerminalMap__SetDiceButton(this, v18);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FB59 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB59 = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager_TypeInfo;
      }
      if ( v21->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
      {
        ScrTerminalMap__EventBoardCameraAction(this, 0, 0, 1, v20);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10655/*"PlayEventBoardGameArrivalEffectAuto"*/,
          0.25,
          0);
      }
      else
      {
        ScrTerminalMap__SetEventBoardQuestArrivalPanel(this, v19);
      }
      if ( this->fields.eventBoardGameSquareCount >= 1 )
      {
        v23 = 1;
        do
        {
          *(_QWORD *)clearCount = 0;
          ScrTerminalMap__GetBoardGameSquareClearCountAndMaxCount(this, v23, &clearCount[1], clearCount, v22);
          v25 = clearCount[0];
          v24 = clearCount[1];
          ScrTerminalMap__SetEventBoardClearMarker(this, v23, clearCount[1], clearCount[0], v26);
          ScrTerminalMap__SetBoardGameSquareHaveToken(this, v23, v27);
          if ( v23 == 1 )
          {
            mWarInfo = (MapControl_WarInfo_o *)this->fields._EventBoardStopPanelObj_k__BackingField;
            if ( !mWarInfo )
              goto LABEL_100;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mWarInfo, v24 < v25, 0);
          }
          ++v23;
        }
        while ( v23 <= this->fields.eventBoardGameSquareCount );
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C401A8 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401A8 = 1;
      }
      v28 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v28 = TerminalPramsManager_TypeInfo;
      }
      v29 = ScrTerminalMap_TypeInfo;
      EventBoardGameSquareIndex_k__BackingField = v28->static_fields->_EventBoardGameSquareIndex_k__BackingField;
      if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        v29 = ScrTerminalMap_TypeInfo;
      }
      if ( EventBoardGameSquareIndex_k__BackingField == v29->static_fields->AUTO_QUEST_SQUARE_INDEX_1 )
        goto LABEL_92;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C401A8 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401A8 = 1;
      }
      v31 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v31 = TerminalPramsManager_TypeInfo;
      }
      v32 = ScrTerminalMap_TypeInfo;
      v33 = v31->static_fields->_EventBoardGameSquareIndex_k__BackingField;
      if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        v32 = ScrTerminalMap_TypeInfo;
      }
      if ( v33 == v32->static_fields->AUTO_QUEST_SQUARE_INDEX_2 )
      {
LABEL_92:
        v34 = ScrTerminalMap___c_TypeInfo;
        if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
          v34 = ScrTerminalMap___c_TypeInfo;
        }
        _9__372_0 = v34->static_fields->__9__372_0;
        if ( !_9__372_0 )
        {
          if ( !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34);
            v34 = ScrTerminalMap___c_TypeInfo;
          }
          v36 = (Il2CppObject *)v34->static_fields->__9;
          _9__372_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(_9__372_0, v36, Method_ScrTerminalMap___c__SetupEventBoardGame_b__372_0__, 0);
          v37 = ScrTerminalMap___c_TypeInfo->static_fields;
          v37->__9__372_0 = _9__372_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&v37->__9__372_0, (int32_t)_9__372_0, v38, v39);
        }
        ScrTerminalMap__EventBoardCameraAction(this, _9__372_0, 0, 0, v22);
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
    sub_1C372B4(mapModelManager);
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
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  ScrTerminalMap_c *v17; // x8
  bool v18; // w24
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  System_String_o *ASSETS_NAME_MAP_GIMMICK; // x23
  Il2CppObject *v21; // x1
  System_String_o *v22; // x0
  ScrTerminalMap_o *v23; // x22
  Il2CppObject *Object_object__51154888; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *mapGimmickPrefab; // x21
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  v8 = this;
  if ( (byte_4C400E6 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C400E6 = 1;
  }
  if ( !mapEnt )
    goto LABEL_16;
  OverwriteMapAssetId = MapEntity__GetOverwriteMapAssetId(mapEnt, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(OverwriteMapAssetId, 0);
  v17 = ScrTerminalMap_TypeInfo;
  v18 = IsNullOrEmpty;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v17 = ScrTerminalMap_TypeInfo;
  }
  static_fields = v17->static_fields;
  ASSETS_NAME_MAP_GIMMICK = static_fields->ASSETS_NAME_MAP_GIMMICK;
  if ( v18 )
  {
    currentAssetId = v8->fields.currentAssetId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v11, v12, v13, v14, v15, v16);
    v22 = ASSETS_NAME_MAP_GIMMICK;
  }
  else
  {
    v22 = static_fields->ASSETS_NAME_MAP_GIMMICK;
    v21 = (Il2CppObject *)OverwriteMapAssetId;
  }
  this = (ScrTerminalMap_o *)System_String__Format(v22, v21, 0);
  v23 = this;
  if ( !multiAssetData )
    goto LABEL_13;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              multiAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  v8->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)Object_object__51154888;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.mapGimmickPrefab, (int32_t)Object_object__51154888, v25, v26);
  mapGimmickPrefab = (UnityEngine_Object_o *)v8->fields.mapGimmickPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(mapGimmickPrefab, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_13:
    if ( assetData )
    {
      v28 = AssetData__GetObject_object__51154888(
              assetData,
              (System_String_o *)v23,
              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      v8->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)v28;
      sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.mapGimmickPrefab, (int32_t)v28, v29, v30);
      return;
    }
LABEL_16:
    sub_1C372B4(this);
  }
}


void ScrTerminalMap__ShowActivePlayerIcon(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *playerIcon; // x21
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v12; // d0
  float z; // s1
  System_Action_o *v14; // x19
  EasingObject_o *v15; // x21
  System_Action_o *v16; // x22

  if ( (byte_4C40131 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass351_0__ShowActivePlayerIcon_b__0__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass351_0__ShowActivePlayerIcon_b__1__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass351_0_TypeInfo);
    byte_4C40131 = 1;
  }
  v3 = sub_1C372A4(ScrTerminalMap___c__DisplayClass351_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass351_0___ctor((ScrTerminalMap___c__DisplayClass351_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
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
                           (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      *(_QWORD *)(v3 + 48) = Component_object;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 48), (int32_t)Component_object, v9, v10);
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v12 = *(_QWORD *)&static_fields->zeroVector.fields.x;
      z = static_fields->zeroVector.fields.z;
      *(int32x2_t *)(v3 + 24) = vdup_n_s32(0x3F4CCCCDu);
      *(_DWORD *)(v3 + 32) = 1065353216;
      *(_QWORD *)(v3 + 36) = v12;
      *(float *)(v3 + 44) = z;
      v4 = this->fields.playerIcon;
      if ( v4 )
      {
        UnityEngine_GameObject__SetActive(v4, 1, 0);
        GameObjectExtensions__SetLocalScale(this->fields.playerIcon, *(UnityEngine_Vector3_o *)(v3 + 36), 0);
        v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v14,
          (Il2CppObject *)v3,
          Method_ScrTerminalMap___c__DisplayClass351_0__ShowActivePlayerIcon_b__0__,
          0);
        v15 = *(EasingObject_o **)(v3 + 48);
        v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v16,
          (Il2CppObject *)v3,
          Method_ScrTerminalMap___c__DisplayClass351_0__ShowActivePlayerIcon_b__1__,
          0);
        if ( v15 )
        {
          EasingObject__Play(v15, 0.25, v16, v14, 0.0, 0, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C372B4(v4);
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
  int32_t SpotID; // w0
  int32_t v10; // w21
  int32_t ImageId; // w22
  TerminalPramsManager_c *v12; // x0
  CGThumbnailListItem_o *v13; // x0
  Il2CppObject *Object_object__51154888; // x23
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *eventActionEffect; // x23
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v20; // x23
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *SpotGameObject; // x0
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  EventRaceBoostEffect_o *v24; // x20
  bool v25; // w21
  QuestRacePointEntity_o *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  TerminalPramsManager_c *v29; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  ItemEntity_o *v31; // [xsp+0h] [xbp-50h] BYREF
  QuestRacePointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40138 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestRacePointMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventRaceBoostEffect___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_6238/*"EventRaceBoostEffect"*/);
    byte_4C40138 = 1;
  }
  v31 = 0;
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A7 = 1;
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (QuestTree_o *)QuestTree__GetQuestInfo(Instance, eventRaceBoost_k__BackingField[7], 0);
    if ( !Instance )
      goto LABEL_48;
    SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)Instance, 0);
    if ( SpotID >= 1 )
    {
      v10 = SpotID;
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      Instance = (QuestTree_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestRacePointMaster___);
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
        Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        Instance = (QuestTree_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !Instance )
          goto LABEL_48;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&v31,
               eventRaceBoost_k__BackingField[8],
               (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = (QuestTree_o *)v31;
          if ( !v31 )
            goto LABEL_48;
          ImageId = ItemEntity__GetImageId(v31, 0);
        }
        else
        {
LABEL_31:
          ImageId = 0;
        }
        Instance = (QuestTree_o *)this->fields.mapAssetData;
        if ( Instance )
        {
          Object_object__51154888 = AssetData__GetObject_object__51154888(
                                      (AssetData_o *)Instance,
                                      (System_String_o *)StringLiteral_6238/*"EventRaceBoostEffect"*/,
                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v15 = UnityEngine_Object__Instantiate_object_(
                  Object_object__51154888,
                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          this->fields.eventActionEffect = (struct UnityEngine_GameObject_o *)v15;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventActionEffect, (int32_t)v15, v16, v17);
          eventActionEffect = this->fields.eventActionEffect;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          GameObjectExtensions__SafeSetParent(eventActionEffect, transform, 0);
          GameObjectExtensions__ResetLocalScale(this->fields.eventActionEffect, 0);
          v20 = this->fields.eventActionEffect;
          SpotGameObject = ScrTerminalMap__GetSpotGameObject(this, v10, v21);
          LocalPosition = GameObjectExtensions__GetLocalPosition(SpotGameObject, 0);
          GameObjectExtensions__SetLocalPosition(v20, LocalPosition, 0);
          Instance = (QuestTree_o *)this->fields.eventActionEffect;
          if ( Instance )
          {
            Instance = (QuestTree_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventRaceBoostEffect___);
            eventScriptCallingList = this->fields.eventScriptCallingList;
            v24 = (EventRaceBoostEffect_o *)Instance;
            v25 = !eventScriptCallingList || LODWORD(eventScriptCallingList->max_length) == 0;
            v26 = entity;
            if ( entity )
            {
              Instance = (QuestTree_o *)QuestRacePointEntity__GetEffectGrade(entity, 0);
              if ( v24 )
              {
                EventRaceBoostEffect__SetUpAndPlay(
                  v24,
                  v26,
                  (int32_t)Instance,
                  eventRaceBoost_k__BackingField[6],
                  ImageId,
                  v25,
                  callback,
                  0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C401C0 )
                {
                  sub_1C37058(&TerminalPramsManager_TypeInfo);
                  byte_4C401C0 = 1;
                }
                v29 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v29 = TerminalPramsManager_TypeInfo;
                }
                p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v29->static_fields->_eventRaceBoost_k__BackingField;
                p_eventRaceBoost_k__BackingField->klass = 0;
                sub_1C36FFC(p_eventRaceBoost_k__BackingField, 0, v27, v28);
                return;
              }
            }
          }
        }
LABEL_48:
        sub_1C372B4(Instance);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401C0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C0 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v13 = (CGThumbnailListItem_o *)&v12->static_fields->_eventRaceBoost_k__BackingField;
  v13->klass = 0;
  sub_1C36FFC(v13, 0, (int32_t)callback, method);
  ActionExtensions__Call(callback, 0);
}


void ScrTerminalMap__SkillGetDialogOpen(ScrTerminalMap_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TerminalPramsManager_c *v13; // x0
  int32_t QuestId_k__BackingField; // w22
  System_Action_o *v15; // x23

  if ( (byte_4C4012C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass345_0__SkillGetDialogOpen_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass345_0_TypeInfo);
    byte_4C4012C = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass345_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass345_0___ctor((ScrTerminalMap___c__DisplayClass345_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass345_0__SkillGetDialogOpen_b__0__,
    0);
  if ( !titleInfoControl )
LABEL_20:
    sub_1C372B4(v6);
  TitleInfoControl__EventSkillGetDialogOpen(titleInfoControl, mActionPanel, QuestId_k__BackingField, v15, 0);
}


void ScrTerminalMap__SpotMaskEnd_FadeEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4011C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11561/*"SEND_MES_END"*/);
    byte_4C4011C = 1;
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
    sub_1C372B4(spotMaskObj);
  TitleInfoControl__SetDispChangeBtn((TitleInfoControl_o *)spotMaskObj, 1, 0);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_11561/*"SEND_MES_END"*/, v4);
}


void ScrTerminalMap__SpotMaskStart_FadeEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C4011A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11561/*"SEND_MES_END"*/);
    byte_4C4011A = 1;
  }
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_11561/*"SEND_MES_END"*/, v2);
}


void ScrTerminalMap__Start(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C400D1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4C400D1 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.targetFsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetFsm, (int32_t)Component_object, v4, v5);
  ScrTerminalMap__InitTitleInfo(this, v6);
}


void ScrTerminalMap__StartBoardGamePieceEffectSub(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *EventBoardPieceObj_k__BackingField; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C4015B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_10646/*"PlayBoardGamePieceEffectSub"*/);
    byte_4C4015B = 1;
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
      (System_String_o *)StringLiteral_10646/*"PlayBoardGamePieceEffectSub"*/,
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ScrTerminalMap_o *v13; // x0
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t EventDataLostBattleId; // w21
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w19
  int32_t v20; // w21
  DataLostResetManager_ClickDelegate_o *v21; // x22
  __int64 v22; // x8
  TerminalPramsManager_c *v23; // x0
  int32_t v24; // w23
  int32_t v25; // w23
  int32_t v26; // w20
  int32_t v27; // w22
  int32_t v28; // w21
  NetworkManager_ResultCallbackFunc_o *v29; // x23

  if ( (byte_4C4012F & 1) == 0 )
  {
    sub_1C37058(&DataLostResetManager_ClickDelegate_TypeInfo);
    sub_1C37058(&DataLostResetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_StartDataLostBattleResetEffect__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass349_0__StartDataLostBattleReset_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass349_0_TypeInfo);
    byte_4C4012F = 1;
  }
  v9 = sub_1C372A4(ScrTerminalMap___c__DisplayClass349_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass349_0___ctor((ScrTerminalMap___c__DisplayClass349_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_42;
  *(_QWORD *)(v9 + 24) = this;
  *(_DWORD *)(v9 + 16) = eventId;
  *(_DWORD *)(v9 + 20) = warId;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  if ( !ScrTerminalMap__IsDataLostBattleAutoReset(v13, *(_DWORD *)(v9 + 16), *(_DWORD *)(v9 + 20), v14) )
  {
    ActionExtensions__Call(endAction, 0);
    return;
  }
  this->fields.isPlayingDataLostBattleResetEffect = 1;
  this->fields.dataLostBattleResetEffectEndAct = endAction;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dataLostBattleResetEffectEndAct, (int32_t)endAction, v15, v16);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_42;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            *(_DWORD *)(v9 + 20),
                            *(_DWORD *)(v9 + 16),
                            0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
  if ( !Master_object )
    goto LABEL_42;
  Master_object = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)Master_object,
                    EventDataLostBattleId,
                    *(_DWORD *)(v9 + 16),
                    0);
  if ( !Master_object )
    goto LABEL_42;
  v18 = (System_Collections_Generic_List_object__o *)Master_object;
  if ( *((_DWORD *)Master_object + 6) == 2 )
  {
    v19 = *(_DWORD *)(v9 + 16);
    v20 = *(_DWORD *)(v9 + 20);
    v21 = (DataLostResetManager_ClickDelegate_o *)sub_1C372A4(DataLostResetManager_ClickDelegate_TypeInfo);
    DataLostResetManager_ClickDelegate___ctor(
      v21,
      (Il2CppObject *)v9,
      Method_ScrTerminalMap___c__DisplayClass349_0__StartDataLostBattleReset_b__0__,
      0);
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__OpenResetSelectDialog(v19, v20, 1, v21, 0);
    return;
  }
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_42;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Master_object, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  Master_object = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = TerminalSceneComponent_TypeInfo;
  }
  v22 = **((_QWORD **)Master_object + 23);
  if ( !v22 )
    goto LABEL_42;
  Master_object = *(void **)(v22 + 240);
  if ( !Master_object )
    goto LABEL_42;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)Master_object, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B7 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 1;
  v24 = *(_DWORD *)(v9 + 16);
  if ( !byte_4C401B8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
    byte_4C401B8 = 1;
  }
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_DataLostBattleEventId_k__BackingField = v24;
  v25 = *(_DWORD *)(v9 + 20);
  if ( !byte_4C401B9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
    byte_4C401B9 = 1;
  }
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_DataLostBattleWarId_k__BackingField = v25;
  v27 = *(_DWORD *)(v9 + 16);
  v26 = *(_DWORD *)(v9 + 20);
  Master_object = System_Collections_Generic_List_object___get_Item(
                    v18,
                    0,
                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
  if ( !Master_object )
LABEL_42:
    sub_1C372B4(Master_object);
  v28 = *((_DWORD *)Master_object + 5);
  v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    Method_ScrTerminalMap_StartDataLostBattleResetEffect__,
    0);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__RequestResetDataLostBattle(v27, v26, v28, v29, 0);
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

  if ( (byte_4C40130 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&DataLostResetManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__StartDataLostBattleResetEffect_b__350_0__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40130 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401BA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401BA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0);
  if ( !byte_4C401BB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401BB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  DataLostBattleEventId_k__BackingField = v5->static_fields->_DataLostBattleEventId_k__BackingField;
  if ( !byte_4C401BC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C401BC = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  DataLostBattleWarId_k__BackingField = v5->static_fields->_DataLostBattleWarId_k__BackingField;
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  System_Int32_array *v5; // x20
  CommonUI_o *v6; // x19
  int32_t v7; // w20
  ScrTerminalMap___c_c *v8; // x0
  System_Action_o *_9__346_0; // x22
  System_String_o *v10; // x21
  Il2CppObject *v11; // x23
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Nullable_float__o p_messagePosY; // x0
  System_Nullable_float__o v16; // x5
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4012D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__StartEventQuestCheckNewOpen_b__346_0__);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    sub_1C37058(&StringLiteral_6939/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/);
    byte_4C4012D = 1;
  }
  if ( eventDetailEntity && EventDetailEntity__IsEventPanel(eventDetailEntity, 0) )
  {
    Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      Instance = clsQuestCheck__GetNewPlayableEventQuestId(
                   (clsQuestCheck_o *)Instance,
                   eventDetailEntity->fields.eventId,
                   0);
      if ( Instance )
      {
        v5 = Instance;
        if ( !Instance->max_length )
          return;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
        if ( !LODWORD(v5->max_length) )
          goto LABEL_24;
        if ( !Instance )
          goto LABEL_23;
        if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)Instance, v5->m_Items[0], 143, 0) )
          return;
        Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LODWORD(v5->max_length) )
LABEL_24:
          sub_1C372BC(Instance);
        v6 = (CommonUI_o *)Instance;
        v7 = v5->m_Items[0];
        v8 = ScrTerminalMap___c_TypeInfo;
        if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
          v8 = ScrTerminalMap___c_TypeInfo;
        }
        _9__346_0 = v8->static_fields->__9__346_0;
        v10 = (System_String_o *)StringLiteral_6939/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
        if ( !_9__346_0 )
        {
          if ( !v8->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v8);
            v8 = ScrTerminalMap___c_TypeInfo;
          }
          v11 = (Il2CppObject *)v8->static_fields->__9;
          _9__346_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(_9__346_0, v11, Method_ScrTerminalMap___c__StartEventQuestCheckNewOpen_b__346_0__, 0);
          static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
          static_fields->__9__346_0 = _9__346_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__346_0, (int32_t)_9__346_0, v13, v14);
        }
        p_messagePosY = (System_Nullable_float__o)&messagePosY;
        messagePosY = 0;
        System_Nullable_float____ctor(
          p_messagePosY,
          30.0,
          (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
        if ( v6 )
        {
          v16 = messagePosY;
          CommonUI__OpenQuestNewPlayableDialog(v6, v7, v10, _9__346_0, 0, v16, 0.0, 0);
          return;
        }
      }
    }
LABEL_23:
    sub_1C372B4(Instance);
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
  if ( (byte_4C400DA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C37058(&Method_ScrTerminalMap__StartRaidAnimation_b__250_0__);
    byte_4C400DA = 1;
  }
  if ( v2->fields.isRaidMap )
  {
    mWarEnt = v2->fields.mWarEnt;
    if ( !mWarEnt
      || (titleInfoControl = v2->fields.titleInfoControl,
          eventId = mWarEnt->fields.eventId,
          v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
          System_Action___ctor(v6, (Il2CppObject *)v2, Method_ScrTerminalMap__StartRaidAnimation_b__250_0__, 0),
          !titleInfoControl) )
    {
      sub_1C372B4(this);
    }
    TitleInfoControl__PlayEventRaidDefeatedEffect(titleInfoControl, eventId, 1, v6, 0);
  }
}


void ScrTerminalMap__TerminalSceneRefresh(ScrTerminalMap_o *this, bool isFromTerminal, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  struct MapControl_WarInfo_o *mWarInfo; // x8
  int32_t warId; // w21
  int32_t v8; // w2

  if ( (byte_4C400D7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C400D7 = 1;
  }
  this->fields._IsCheckExpiration_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
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
  if ( !byte_4C3F89C )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C3F89C = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(Instance[1].fields.sendData->klass) = warId;
  if ( !byte_4C401A4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C401A4 = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  LOBYTE(Instance[1].fields.sendData[45].monitor) = 0;
  TopHomeRequest__clearExpirationDate(0);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1C372B4(Instance);
  if ( isFromTerminal )
    v8 = 2;
  else
    v8 = 1;
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, v8, 0, 0, 0);
}


bool ScrTerminalMap__TryAutoQuest(ScrTerminalMap_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  int64_t v5; // x21
  int32_t value; // w20
  ScrTerminalMap_c *v7; // x0
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  Il2CppObject *v9; // x0
  ScrTerminalMap___c_c *v10; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *EventBoardQuestReleaseList_k__BackingField; // x20
  QuestPhaseMaster_o *v12; // x21
  System_Func_object__bool__o *_9__418_0; // x22
  Il2CppObject *v14; // x23
  struct ScrTerminalMap___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  bool v19; // w20
  Il2CppObject *current; // x24
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *diceCounterComponent; // x22
  _BOOL8 v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  QuestPhaseEntity_array *List; // x19
  int32_t klass; // w21
  TerminalPramsManager_c *v28; // x0
  TerminalSceneComponent_c *v29; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  QuestPhaseEntity_o *v31; // x2
  ScrTerminalListTop_o *mTerminalList; // x0
  Il2CppObject *v33; // x0
  int v34; // w19
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-70h] BYREF
  UserEventEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C40170 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C37058(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__TryAutoQuest_b__418_0__);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    byte_4C40170 = 1;
  }
  entity = 0;
  memset(&v37, 0, sizeof(v37));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.mWarInfo )
    goto LABEL_67;
  v5 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Instance = (DataManager_o *)MapControl_WarInfo__GetEventId(this->fields.mWarInfo, 0);
  if ( !MasterData_object )
    goto LABEL_67;
  Instance = (DataManager_o *)UserEventMaster__TryGetEntity(
                                (UserEventMaster_o *)MasterData_object,
                                &entity,
                                v5,
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
  v7 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v7 = ScrTerminalMap_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( value != static_fields->AUTO_QUEST_SQUARE_INDEX_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = ScrTerminalMap_TypeInfo->static_fields;
    }
    if ( value != static_fields->AUTO_QUEST_SQUARE_INDEX_2 )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v9 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v10 = ScrTerminalMap___c_TypeInfo;
  EventBoardQuestReleaseList_k__BackingField = this->fields._EventBoardQuestReleaseList_k__BackingField;
  v12 = (QuestPhaseMaster_o *)v9;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v10 = ScrTerminalMap___c_TypeInfo;
  }
  _9__418_0 = (System_Func_object__bool__o *)v10->static_fields->__9__418_0;
  if ( !_9__418_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ScrTerminalMap___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v10->static_fields->__9;
    _9__418_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__418_0, v14, Method_ScrTerminalMap___c__TryAutoQuest_b__418_0__, 0);
    v15 = ScrTerminalMap___c_TypeInfo->static_fields;
    v15->__9__418_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__418_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v15->__9__418_0, (int32_t)_9__418_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventBoardQuestReleaseList_k__BackingField,
          (System_Func_TSource__bool__o *)_9__418_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v18,
                                (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
  if ( !Instance )
LABEL_67:
    sub_1C372B4(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v37 = v36;
  do
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v19 )
    {
      v34 = 4;
      goto LABEL_62;
    }
    current = v37.fields._current;
    v21 = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !current )
      sub_1C372B4(v21);
    if ( !v21 )
      sub_1C372B4(0);
  }
  while ( !clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v21, (int32_t)current[1].klass, 0, 0) );
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__op_Inequality(diceCounterComponent, 0, 0);
  if ( v23 )
  {
    v24 = (UnityEngine_Component_o *)this->fields.diceCounterComponent;
    if ( !v24 )
      sub_1C372B4(0);
    gameObject = UnityEngine_Component__get_gameObject(v24, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  if ( !v12 )
    sub_1C372B4(v23);
  List = QuestPhaseMaster__getList(v12, (int32_t)current[1].klass, 0);
  klass = (int32_t)current[1].klass;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F896 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F896 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_QuestId_k__BackingField = klass;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v29 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v29 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v29->static_fields->mInstance;
  if ( !mInstance )
    sub_1C372B4(v29);
  if ( !List )
    sub_1C372B4(v29);
  if ( !LODWORD(List->max_length) )
    sub_1C372BC(v29);
  v31 = List->m_Items[0];
  if ( !v31 )
    sub_1C372B4(v29);
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    sub_1C372B4(0);
  ScrTerminalListTop__StartQuest(mTerminalList, v31->fields.phase, v31, 0);
  v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v33 )
    sub_1C372B4(0);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)v33, 0, 0);
  v34 = 9;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v19 && v34 == 9;
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

  if ( (byte_4C400D2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_UpdateEventRaidUI__);
    sub_1C37058(&StringLiteral_8892/*"Map Touch Disable"*/);
    sub_1C37058(&StringLiteral_8893/*"Map Touch Enable"*/);
    byte_4C400D2 = 1;
  }
  MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(MyFsmP, 0, 0);
  if ( v4 )
  {
    if ( !MyFsmP )
      sub_1C372B4(v4);
    ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0);
    if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_8893/*"Map Touch Enable"*/, 0)
      || (v7 = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0),
          System_String__op_Equality(v7, (System_String_o *)StringLiteral_8892/*"Map Touch Disable"*/, 0)) )
    {
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  Il2CppObject *v7; // x20
  int32_t name_high; // w21
  Il2CppObject *Instance; // x0
  MapControl_MapGimmickInfo_o *MapGimmickInfo; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C40106 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C40106 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  gimmickList = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
  if ( !gimmickList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    gimmickList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    if ( !v4 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C372B4(v4);
    v7 = v14.fields._current + 7;
    klass = v14.fields._current[7].klass;
    if ( !klass )
      sub_1C372B4(v4);
    name_high = HIDWORD(klass->_1.name);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    MapGimmickInfo = QuestTree__GetMapGimmickInfo((QuestTree_o *)Instance, name_high, 0);
    if ( MapGimmickInfo )
    {
      v7->klass = (Il2CppClass *)MapGimmickInfo;
      sub_1C36FFC((CGThumbnailListItem_o *)&current[7], (int32_t)MapGimmickInfo, v11, v12);
      MapGimmickComponent__ResetOldDispTime((MapGimmickComponent_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
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
  EventSpotMoveManager_o *v6; // x0

  if ( this->fields.isRaidMap )
  {
    eventSpotMoveManager = this->fields.eventSpotMoveManager;
    if ( eventSpotMoveManager )
    {
      if ( !EventSpotMoveManager__IsSpotObjectMoving(eventSpotMoveManager, 0) )
      {
        v6 = this->fields.eventSpotMoveManager;
        if ( !v6 )
          sub_1C372B4(0);
        EventSpotMoveManager__UpdateAllSpotPosition(v6, isFocedMove, 0);
      }
    }
  }
}


void ScrTerminalMap__UpdateAllRaidProgressMapGimmickDisplay(ScrTerminalMap_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *gimmickList; // x0
  System_Collections_Generic_List_Enumerator_object__o v4; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C40107 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    byte_4C40107 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  gimmickList = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
  if ( !gimmickList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v4,
    gimmickList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v4,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
  {
    if ( !v4.fields._current )
      sub_1C372B4(0);
    MapGimmickComponent__SetDisplayByRaidProgress((MapGimmickComponent_o *)v4.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v4,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
}


void ScrTerminalMap__UpdateAllSpotGameObject(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_MapInfo_o *mMapInfo; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C40105 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4C40105 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  mMapInfo = this->fields.mMapInfo;
  if ( !mMapInfo || (mMapInfo = (MapControl_MapInfo_o *)MapControl_MapInfo__GetSpotList(mMapInfo, 0)) == 0 )
    sub_1C372B4(mMapInfo);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)mMapInfo,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v6,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v4 )
      break;
    if ( !v6.fields._current )
      sub_1C372B4(v4);
    ScrTerminalMap__UpdateSpotGameObject(
      this,
      *(_DWORD *)((char *)&v6.fields._current->klass + (unsigned __int64)&word_10),
      v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}


void ScrTerminalMap__UpdateAreaBoardList(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct TerminalSceneComponent_o *terminalScene; // x8

  terminalScene = this->fields.terminalScene;
  if ( !terminalScene || (this = (ScrTerminalMap_o *)terminalScene->fields.mTerminalList) == 0 )
    sub_1C372B4(this);
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
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_MapControl_MapGimmickInfo__o *MapGimmickList; // x0
  ScrTerminalMap___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__bool__o *_9__402_0; // x21
  Il2CppObject *v16; // x22
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  System_Action_object__o *v21; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *mapCamera; // x20
  struct MapCamera_o *v26; // x8
  TerminalPramsManager_c *v27; // x0

  if ( (byte_4C40161 & 1) == 0 )
  {
    sub_1C37058(&System_Action_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_MapControl_MapGimmickInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_MapControl_MapGimmickInfo___);
    sub_1C37058(&System_Func_MapControl_MapGimmickInfo__bool__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__UpdateBoardGameSquare_b__402_1__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__UpdateBoardGameSquare_b__402_0__);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    byte_4C40161 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MissionNotifyManager__EndPause(Instance, 0);
  ScrTerminalMap__SetEventBoardClearMarker(this, squareId, clearCount, maxClearCount, v10);
  ScrTerminalMap__UpdateEventBoardGameSpot(this, v11);
  Instance = (MissionNotifyManager_o *)this->fields.mMapInfo;
  if ( !Instance )
    goto LABEL_28;
  MapGimmickList = MapControl_MapInfo__GetMapGimmickList((MapControl_MapInfo_o *)Instance, 0);
  v13 = ScrTerminalMap___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)MapGimmickList;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v13 = ScrTerminalMap___c_TypeInfo;
  }
  _9__402_0 = (System_Func_object__bool__o *)v13->static_fields->__9__402_0;
  if ( !_9__402_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ScrTerminalMap___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__402_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_MapControl_MapGimmickInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__402_0, v16, Method_ScrTerminalMap___c__UpdateBoardGameSquare_b__402_0__, 0);
    static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
    static_fields->__9__402_0 = (struct System_Func_MapControl_MapGimmickInfo__bool__o *)_9__402_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__402_0, (int32_t)_9__402_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v14,
                                                         (System_Func_TSource__bool__o *)_9__402_0,
                                                         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_MapControl_MapGimmickInfo___);
  v21 = (System_Action_object__o *)sub_1C372A4(System_Action_MapControl_MapGimmickInfo__TypeInfo);
  System_Action_object____ctor(v21, (Il2CppObject *)this, Method_ScrTerminalMap__UpdateBoardGameSquare_b__402_1__, 0);
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)v21,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_MapControl_MapGimmickInfo___);
  if ( ScrTerminalMap__IsEnabledToUseEventItem(this, v22) )
    ScrTerminalMap__ChangeBoardGameDiceButttonActive(this, v23);
  else
    ScrTerminalMap__SetEnabledDiceButton(this, 0, v24);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (MissionNotifyManager_o *)UnityEngine_Object__op_Inequality(mapCamera, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v26 = this->fields.mapCamera;
    if ( !v26 )
      goto LABEL_28;
    v26->fields._IsTouchEnable_k__BackingField = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB59 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB59 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( !v27->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
      return;
    }
LABEL_28:
    sub_1C372B4(Instance);
  }
}


void ScrTerminalMap__UpdateCaldeaFolderBoardList(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct TerminalSceneComponent_o *terminalScene; // x8

  terminalScene = this->fields.terminalScene;
  if ( !terminalScene || (this = (ScrTerminalMap_o *)terminalScene->fields.mTerminalList) == 0 )
    sub_1C372B4(this);
  ScrTerminalListTop__UpdateCaldeaFolderInfoList((ScrTerminalListTop_o *)this, 1, 0);
}


void ScrTerminalMap__UpdateEventBoardGame(ScrTerminalMap_o *this, System_Action_o *callback, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  CommonUI_o *Instance; // x0
  UnityEngine_Object_o *diceButton; // x20
  TerminalPramsManager_c *v8; // x0
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4C40162 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_4359/*"ChangeBoardGameDiceButttonActive"*/);
    sub_1C37058(&StringLiteral_12796/*"SetEventBoardQuestArrivalPanel"*/);
    byte_4C40162 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB59 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB59 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    CommonUI__SetFadeMaskCollider(Instance, 1, 0);
  }
  ScrTerminalMap__JumpEventBoardGamePiece(this, callback, method);
  if ( this->fields.isWaitingViewEventBoardQuestArrivalPanel )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12796/*"SetEventBoardQuestArrivalPanel"*/,
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
          if ( !byte_4C401C4 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C401C4 = 1;
          }
          v8 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v8 = TerminalPramsManager_TypeInfo;
          }
          if ( v8->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField )
          {
            if ( !v8->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v8);
            if ( !byte_4C3FFC0 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3FFC0 = 1;
            }
            v9 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v9 = TerminalPramsManager_TypeInfo;
            }
            if ( !v9->static_fields->_IsPlayScriptWithMap_k__BackingField )
              UnityEngine_MonoBehaviour__Invoke(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_4359/*"ChangeBoardGameDiceButttonActive"*/,
                1.0,
                0);
          }
        }
        return;
      }
    }
LABEL_36:
    sub_1C372B4(Instance);
  }
}


void ScrTerminalMap__UpdateEventBoardGameSpot(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  QuestTree_o *Instance; // x0
  struct SrcSpotBasePrefab_o *v5; // x8
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v7; // x20
  struct SrcSpotBasePrefab_o *v8; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4C4014C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C4014C = 1;
  }
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventBoardGameSpotPrefab, 0, 0) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v5 = this->fields.eventBoardGameSpotPrefab;
    if ( !v5 || !Instance )
      goto LABEL_14;
    SpotInfo = QuestTree__GetSpotInfo(Instance, v5->fields.miSpotID, 0);
    if ( !SpotInfo )
      return;
    v7 = SpotInfo;
    Instance = (QuestTree_o *)this->fields.eventBoardGameSpotPrefab;
    if ( !Instance
      || (SrcSpotBasePrefab__mfSetQuestCount((SrcSpotBasePrefab_o *)Instance, v7->fields.questCount, 0),
          (v8 = this->fields.eventBoardGameSpotPrefab) == 0)
      || (mMapCtrl_SpotInfo = v8->fields.mMapCtrl_SpotInfo) == 0 )
    {
LABEL_14:
      sub_1C372B4(Instance);
    }
    mMapCtrl_SpotInfo->fields._IsNext_k__BackingField = v7->fields._IsNext_k__BackingField;
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
    sub_1C372B4(0);
  MapButtonControl__UpdateBadge(mapButtonGrid, this->fields.mWarInfo, this->fields.mMapInfo, 0);
}


void ScrTerminalMap__UpdateSpotGameObject(ScrTerminalMap_o *this, int32_t spotId, const MethodInfo *method)
{
  UnityEngine_Object_o *SpotGameObject; // x20
  void *Instance; // x0
  SrcSpotBasePrefab_o *Component_object; // x20
  _BYTE *v8; // x19
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4C40104 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C40104 = 1;
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
                                                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Instance )
      {
        Instance = QuestTree__GetSpotInfo((QuestTree_o *)Instance, spotId, 0);
        if ( !Instance )
          return;
        if ( Component_object )
        {
          v8 = Instance;
          SrcSpotBasePrefab__mfSetQuestCount(Component_object, *((_DWORD *)Instance + 7), 0);
          mMapCtrl_SpotInfo = Component_object->fields.mMapCtrl_SpotInfo;
          if ( mMapCtrl_SpotInfo )
          {
            mMapCtrl_SpotInfo->fields._IsNext_k__BackingField = v8[44];
            return;
          }
        }
      }
LABEL_16:
      sub_1C372B4(Instance);
    }
  }
}


void ScrTerminalMap__ViewEventBoardGameQuestListAuto(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x2
  struct SrcSpotBasePrefab_o *v6; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  UnityEngine_GameObject_o *SpotGameObject; // x20
  const MethodInfo *v9; // x2
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4C40147 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40147 = 1;
  }
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(eventBoardGameSpotPrefab, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v6 = this->fields.eventBoardGameSpotPrefab;
    if ( !v6 )
      goto LABEL_21;
    mMapCtrl_SpotInfo = v6->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_21;
    SpotGameObject = ScrTerminalMap__GetSpotGameObject(this, mMapCtrl_SpotInfo->fields.spotId, v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SpotGameObject, 0, 0) )
    {
      ScrTerminalMap__smfSpotBtn_Click(this, SpotGameObject, v9);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401C2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C2 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1C372B4(Instance);
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
}


System_Collections_IEnumerator_o *ScrTerminalMap__WaitConnecting(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap__WaitConnecting_d__249_o *v2; // x19

  if ( (byte_4C400D9 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap__WaitConnecting_d__249_TypeInfo);
    byte_4C400D9 = 1;
  }
  v2 = (ScrTerminalMap__WaitConnecting_d__249_o *)sub_1C372A4(ScrTerminalMap__WaitConnecting_d__249_TypeInfo);
  ScrTerminalMap__WaitConnecting_d__249___ctor(v2, 0, 0);
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *ScrTerminalMap__WaitScriptLoad(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C40115 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap__WaitScriptLoad_d__316_TypeInfo);
    byte_4C40115 = 1;
  }
  v3 = sub_1C372A4(ScrTerminalMap__WaitScriptLoad_d__316_TypeInfo);
  ScrTerminalMap__WaitScriptLoad_d__316___ctor((ScrTerminalMap__WaitScriptLoad_d__316_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void ScrTerminalMap___AfterActionPlay_b__339_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C4018B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__AfterActionPlay_b__339_1__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C4018B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrTerminalMap__AfterActionPlay_b__339_1__, 0);
  if ( !Instance )
    sub_1C372B4(v5);
  QuestAfterAction__Play((QuestAfterAction_o *)Instance, v4, 0);
}


void ScrTerminalMap___AfterActionPlay_b__339_1(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x19
  System_Action_o *v4; // x20
  __int64 v5; // x0
  EventMapManagerInterface_c *klass; // x8
  __int64 v7; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v9; // x0

  if ( (byte_4C4018C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_EventActionPlay__);
    byte_4C4018C = 1;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrTerminalMap_EventActionPlay__, 0);
  if ( !eventMapManagerInterface_k__BackingField )
    sub_1C372B4(v5);
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
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7];
  }
  else
  {
LABEL_8:
    v9 = sub_1C87870(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 7);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, System_Action_o *, _QWORD))v9)(
    eventMapManagerInterface_k__BackingField,
    v4,
    *(_QWORD *)(v9 + 8));
}


void ScrTerminalMap___CreateMapGimmick_b__311_0(
        ScrTerminalMap_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0

  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    sub_1C372B4(0);
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
      sub_1C372B4(this);
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
  struct System_Int32_array *EventBoardGameArrivalVoiceSvtIdList_k__BackingField; // x8
  SoundManager_o *v5; // x20
  System_String_o *VoiceAssetName_42795352; // x21
  System_Action_o *v7; // x22

  if ( (byte_4C40199 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_1__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C40199 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  EventBoardGameArrivalVoiceSvtIdList_k__BackingField = this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
  if ( !EventBoardGameArrivalVoiceSvtIdList_k__BackingField )
    goto LABEL_7;
  if ( !LODWORD(EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length) )
    sub_1C372BC(Instance);
  v5 = (SoundManager_o *)Instance;
  VoiceAssetName_42795352 = ServantVoiceEntity__getVoiceAssetName_42795352(
                              EventBoardGameArrivalVoiceSvtIdList_k__BackingField->m_Items[0],
                              0);
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_1__, 0);
  if ( !v5 )
LABEL_7:
    sub_1C372B4(Instance);
  SoundManager__LoadAudioAssetStorage(v5, VoiceAssetName_42795352, v7, 1, 0);
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_1(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v4; // x8
  SoundManager_o *v5; // x20
  System_String_o *VoiceAssetName_42795352; // x21
  System_Action_o *v7; // x22
  AssetLoader_LoadEndDataHandler_o *v8; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4C4019A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_2__);
    sub_1C37058(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_3__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    this = (ScrTerminalMap_o *)sub_1C37058(&StringLiteral_5877/*"Effect/Dice"*/);
    byte_4C4019A = 1;
  }
  klass = v2[46].klass;
  if ( !klass )
    goto LABEL_13;
  if ( LODWORD(klass->_1.namespaze) <= 1 )
LABEL_14:
    sub_1C372BC(this);
  if ( SHIDWORD(klass->_1.byval_arg.data) >= 1 )
  {
    this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v4 = v2[46].klass;
    if ( !v4 )
      goto LABEL_13;
    if ( LODWORD(v4->_1.namespaze) > 1 )
    {
      v5 = (SoundManager_o *)this;
      VoiceAssetName_42795352 = ServantVoiceEntity__getVoiceAssetName_42795352(HIDWORD(v4->_1.byval_arg.data), 0);
      v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v7, v2, Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_2__, 0);
      if ( v5 )
      {
        SoundManager__LoadAudioAssetStorage(v5, VoiceAssetName_42795352, v7, 1, 0);
        return;
      }
LABEL_13:
      sub_1C372B4(this);
    }
    goto LABEL_14;
  }
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v8, v2, Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_3__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5877/*"Effect/Dice"*/, v8, 1, 0);
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_2(ScrTerminalMap_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4C4019B & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_4__);
    sub_1C37058(&StringLiteral_5877/*"Effect/Dice"*/);
    byte_4C4019B = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_4__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5877/*"Effect/Dice"*/, v3, 1, 0);
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_3(
        ScrTerminalMap_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.boardGameDiceAssetData = effectData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boardGameDiceAssetData, (int32_t)effectData, (int32_t)method, v3);
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_4(
        ScrTerminalMap_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.boardGameDiceAssetData = effectData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boardGameDiceAssetData, (int32_t)effectData, (int32_t)method, v3);
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
  if ( (byte_4C4018A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__MapTouchEnableAuto_b__338_2__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__MapTouchEnableAuto_b__338_1__);
    this = (ScrTerminalMap_o *)sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    byte_4C4018A = 1;
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
  if ( !byte_4C3FFA8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFA8 = 1;
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
      monitor = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(monitor, klass, Method_ScrTerminalMap___c__MapTouchEnableAuto_b__338_1__, 0);
      static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
      static_fields->__9__338_1 = monitor;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__338_1, (int32_t)monitor, v11, v12);
    }
    if ( !mQuestBoardListViewManager )
      goto LABEL_30;
    QuestBoardListViewManager__SetMode(mQuestBoardListViewManager, 0, monitor, 0, 0, 0, 0);
  }
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v2, Method_ScrTerminalMap__MapTouchEnableAuto_b__338_2__, 0);
  if ( !v15 )
LABEL_30:
    sub_1C372B4(this);
  TerminalSceneComponent__Fadein_MapDisp(v15, DEFAULT_FADE_TIME, v18, 0);
}


void ScrTerminalMap___OnClickMonoplyBoard_b__384_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct MapCamera_o *mapCamera; // x8
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  struct SrcSpotBasePrefab_o *v10; // x8
  int32_t miSpotID; // w20
  TerminalPramsManager_c *v12; // x0
  bool IsMultiMap; // w0
  const MethodInfo *v14; // x2
  System_String_o *SaveKey_PlayerIcon; // x20
  TerminalPramsManager_c *v16; // x0
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x4

  if ( (byte_4C4019D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_OpenDiceSelectDialog__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4019D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.spotTouchObj, (int32_t)gameObject, v7, v8);
      v10 = this->fields.eventBoardGameSpotPrefab;
      if ( v10 )
      {
        miSpotID = v10->fields.miSpotID;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3F89B )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3F89B = 1;
        }
        v12 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v12 = TerminalPramsManager_TypeInfo;
        }
        v12->static_fields->_SpotId_k__BackingField = miSpotID;
        ScrTerminalMap__SetPlayerIcon(this, this->fields.spotTouchObj, v9);
        Instance = (CommonUI_o *)this->fields.mWarInfo;
        if ( Instance )
        {
          IsMultiMap = MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)Instance, 0);
          SaveKey_PlayerIcon = ScrTerminalMap__GetSaveKey_PlayerIcon(this, IsMultiMap, v14);
          if ( !byte_4C3FA9E )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C3FA9E = 1;
          }
          v16 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v16 = TerminalPramsManager_TypeInfo;
          }
          UnityEngine_PlayerPrefs__SetInt(SaveKey_PlayerIcon, v16->static_fields->_SpotId_k__BackingField, 0);
          goto LABEL_22;
        }
      }
    }
LABEL_23:
    sub_1C372B4(Instance);
  }
LABEL_22:
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrTerminalMap_OpenDiceSelectDialog__, 0);
  ScrTerminalMap__EventBoardCameraAction(this, v17, 0, 0, v18);
}


void ScrTerminalMap___OnEndEventScripts_b__357_0(
        ScrTerminalMap_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScrTerminalMap_o *v4; // x19
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  int32_t v6; // w1
  TerminalPramsManager_c *v7; // x0

  v4 = this;
  if ( (byte_4C40191 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ScrTerminalMap_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40191 = 1;
  }
  eventScriptCallingList = v4->fields.eventScriptCallingList;
  v6 = v4->fields.eventScriptCallingIdx + 1;
  v4->fields.eventScriptCallingIdx = v6;
  if ( !eventScriptCallingList )
    goto LABEL_22;
  if ( v6 < SLODWORD(eventScriptCallingList->max_length) )
  {
    ScrTerminalMap__EventScriptCaller(v4, v6, method);
    return;
  }
  v4->fields.eventScriptCallingList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.eventScriptCallingList, 0, (int32_t)method, v3);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4C3F89B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C3F89B = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SpotId_k__BackingField = -1;
  if ( !byte_4C3F896 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C3F896 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestId_k__BackingField = -1;
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_22:
    sub_1C372B4(this);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0, 0, 0);
}


void ScrTerminalMap___OnEveryActionEnd_b__354_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *TalkScriptInfo_k__BackingField; // x20
  TerminalPramsManager_c *v7; // x0
  struct WarEntity_o *mWarEnt; // x8
  bool v9; // w19
  TerminalSceneComponent_o *terminalScene; // x20
  System_Action_o *v11; // x21
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4018E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_ScrTerminalMap__OnEveryActionEnd_b__354_1__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4018E = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFE5 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFE5 = 1;
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
    if ( !byte_4C3FA9E )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FA9E = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    if ( v7->static_fields->_SpotId_k__BackingField > 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
      mWarEnt = this->fields.mWarEnt;
      if ( !mWarEnt || !Master_object )
        goto LABEL_73;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             Master_object,
             &entity,
             mWarEnt->fields.eventId,
             (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
        if ( !entity )
          goto LABEL_73;
        v9 = !EventDetailEntity__IsEventCircleProgress((EventDetailEntity_o *)entity, 0);
      }
      else
      {
        v9 = 1;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FB59 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB59 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      if ( !v12->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
      {
        if ( !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        if ( !byte_4C401C6 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C401C6 = 1;
        }
        v13 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v13 = TerminalPramsManager_TypeInfo;
        }
        if ( !v13->static_fields->_IsDataLostBattleNoticePause_k__BackingField )
        {
          if ( !v13->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v13);
          if ( !byte_4C3FFD1 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C3FFD1 = 1;
          }
          v14 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v14 = TerminalPramsManager_TypeInfo;
          }
          if ( !v14->static_fields->_isIncomingCall_k__BackingField && v9 )
            goto LABEL_21;
        }
      }
    }
    else
    {
LABEL_40:
      terminalScene = this->fields.terminalScene;
      v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrTerminalMap__OnEveryActionEnd_b__354_1__, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C400C1 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C400C1 = 1;
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
        v11,
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
  if ( !byte_4C3FB59 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB59 = 1;
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
    if ( !byte_4C401C6 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401C6 = 1;
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Master_object )
      {
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Master_object, 0);
        return;
      }
LABEL_73:
      sub_1C372B4(Master_object);
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

  if ( (byte_4C4018F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__OnEveryActionEnd_b__354_2__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4018F = 1;
  }
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene
    || (TerminalSceneComponent__PlayTutorial(terminalScene, 0), (terminalScene = this->fields.terminalScene) == 0)
    || (TerminalSceneComponent__PlayRaidTutorial(terminalScene, 0),
        v4 = this->fields.terminalScene,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap__OnEveryActionEnd_b__354_2__, 0),
        !v4) )
  {
    sub_1C372B4(terminalScene);
  }
  TerminalSceneComponent__PlayEventTutorial(v4, v5, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401C7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C7 = 1;
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
    if ( !byte_4C3D786 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D786 = 1;
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

  if ( (byte_4C40190 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40190 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB59 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB59 = 1;
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
    if ( !byte_4C401C6 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401C6 = 1;
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
      if ( !byte_4C400C1 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C400C1 = 1;
      }
      v5 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = TerminalPramsManager_TypeInfo;
      }
      if ( !v5->static_fields->_IsPlayGetEffect_k__BackingField )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          sub_1C372B4(0);
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
  if ( (byte_4C4019E & 1) == 0 )
  {
    this = (ScrTerminalMap_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4019E = 1;
  }
  mapCamera = v2->fields.mapCamera;
  if ( !mapCamera
    || (this = (ScrTerminalMap_o *)mapCamera->fields.mZoom) == 0
    || (MapZoom__Stop((MapZoom_o *)this, 1, 0), (v4 = v2->fields.mapCamera) == 0)
    || (this = (ScrTerminalMap_o *)v4->fields.mScrl) == 0
    || (MapScroll__Stop((MapScroll_o *)this, 1, 0),
        (this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(this);
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
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t id; // w21
  int32_t EventId; // w3
  const MethodInfo *v14; // x4

  if ( (byte_4C4019F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4019F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 1, 0),
        ScrTerminalMap__SetEnabledDiceButton(this, 0, v8),
        ScrTerminalMap__FrameOutUI(this, 0, v9),
        this->fields.eventBoardGameUsingItem = selectedItem,
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventBoardGameUsingItem, (int32_t)selectedItem, v10, v11),
        !selectedItem)
    || (Instance = (CommonUI_o *)this->fields.mWarInfo) == 0 )
  {
    sub_1C372B4(Instance);
  }
  id = selectedItem->fields.id;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)Instance, 0);
  ScrTerminalMap__RequestDiceUse(this, id, spendNum, EventId, v14);
}


void ScrTerminalMap___OpenDiceSelectDialog_b__389_2(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct MapCamera_o *mapCamera; // x8
  TerminalPramsManager_c *v4; // x0

  v2 = this;
  if ( (byte_4C401A0 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ScrTerminalMap_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A0 = 1;
  }
  mapCamera = v2->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_12;
  mapCamera->fields._IsTouchEnable_k__BackingField = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F89B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F89B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SpotId_k__BackingField = -1;
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_12:
    sub_1C372B4(this);
  CommonUI__CloseEventItemListDialog((CommonUI_o *)this, 0);
}


void ScrTerminalMap___PlayBoardGameStopPiecePanel_b__399_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventBoardGameSquareIndex_k__BackingField; // w20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_4C401A1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_FrameInUI__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventBoardGameSquareIndex_k__BackingField = v3->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap_FrameInUI__, 0);
  ScrTerminalMap__PlayBoardGameQuestArrivalEffect(this, EventBoardGameSquareIndex_k__BackingField, v5, 0, v6);
}


void ScrTerminalMap___PlayEventBoardGameArrivalEffectAuto_b__373_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  if ( (byte_4C4019C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15333/*"ViewEventBoardGameQuestListAuto"*/);
    byte_4C4019C = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15333/*"ViewEventBoardGameQuestListAuto"*/, 1.0, 0);
}


void ScrTerminalMap___StartDataLostBattleResetEffect_b__350_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C4018D & 1) == 0 )
  {
    sub_1C37058(&DataLostResetManager_TypeInfo);
    byte_4C4018D = 1;
  }
  ActionExtensions__Call(this->fields.dataLostBattleResetEffectEndAct, 0);
  this->fields.dataLostBattleResetEffectEndAct = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dataLostBattleResetEffectEndAct, 0, v3, v4);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *gimmickList; // x20
  System_Predicate_object__o *v10; // x23
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w22
  Il2CppObject *syncRoot; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4C401A2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent__FindIndex__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Item__);
    sub_1C37058(&System_Predicate_MapGimmickComponent__TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass402_0__UpdateBoardGameSquare_b__2__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass402_0_TypeInfo);
    byte_4C401A2 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass402_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass402_0___ctor((ScrTerminalMap___c__DisplayClass402_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = x;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)x, v7, v8);
  gimmickList = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
  v10 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_MapGimmickComponent__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass402_0__UpdateBoardGameSquare_b__2__,
    0);
  if ( !gimmickList )
    goto LABEL_19;
  Index = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindIndex(
                                                         gimmickList,
                                                         (System_Predicate_T__o *)v10,
                                                         (const MethodInfo_37A387C *)Method_System_Collections_Generic_List_MapGimmickComponent__FindIndex__);
  v12 = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
  if ( (_DWORD)Index != -1 )
  {
    if ( v12 )
    {
      v13 = (int)Index;
      Index = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this->fields.gimmickList,
                                                             (int32_t)Index,
                                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MapGimmickComponent__get_Item__);
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
                                                                   v13,
                                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MapGimmickComponent__get_Item__);
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
    sub_1C372B4(Index);
  }
  Index = (System_Collections_Generic_List_object__o *)ScrTerminalMap__CreateMapGimmick(
                                                         this,
                                                         *(MapControl_MapGimmickInfo_o **)(v5 + 16),
                                                         0,
                                                         v11);
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v18 = Method_System_Collections_Generic_List_MapGimmickComponent__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  v20 = Index;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)Index,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
  }
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalSceneComponent_o *terminalScene; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C40192 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_1__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40192 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB5B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB5B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
  terminalScene = this->fields.terminalScene;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_1__, 0);
  if ( !terminalScene )
    sub_1C372B4(v6);
  TerminalSceneComponent__CheckRewardPopupChain(terminalScene, v5, 1, 0, 0);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_1(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventID; // w0
  const MethodInfo *v5; // x1
  int32_t v6; // w20
  MissionNotifyManager_o *Master_object; // x0
  TitleInfoControl_o *titleInfoControl; // x21
  System_Action_o *v9; // x22
  TitleInfoControl_o *v10; // x20
  System_Action_o *v11; // x21
  struct TerminalSceneComponent_o *terminalScene; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  System_Action_o *v14; // x21
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2
  TitleInfoControl_o *v17; // x21
  System_Action_o *v18; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C40193 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&EventInfoUIProgressControl_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_2__);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_3__);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_4__);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_5__);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_6__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40193 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
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
  Master_object = (MissionNotifyManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_49;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         v6,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsEventUiCushion((EventDetailEntity_o *)entity, 0) )
    {
      Master_object = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Master_object )
      {
        MissionNotifyManager__StartPause(Master_object, 0);
        titleInfoControl = this->fields.titleInfoControl;
        v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_2__, 0);
        if ( titleInfoControl )
        {
          TitleInfoControl__StartEventUICushionAnimation(titleInfoControl, v6, 1, v9, 0);
          return;
        }
      }
LABEL_49:
      sub_1C372B4(Master_object);
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
      Master_object = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_49;
      MissionNotifyManager__StartPause(Master_object, 0);
      Master_object = (MissionNotifyManager_o *)this->fields.terminalScene;
      if ( !Master_object )
        goto LABEL_49;
      TerminalSceneComponent__SetActionBGColl((TerminalSceneComponent_o *)Master_object, 1, 0, 0);
      v10 = this->fields.titleInfoControl;
      v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_3__, 0);
      if ( !v10 )
        goto LABEL_49;
      TitleInfoControl__StartEventUIAnimation(v10, 1, v11, 0);
      return;
    }
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)entity, 0) )
    {
      Master_object = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_49;
      MissionNotifyManager__StartPause(Master_object, 0);
      terminalScene = this->fields.terminalScene;
      if ( !terminalScene )
        goto LABEL_49;
      mTerminalList = terminalScene->fields.mTerminalList;
      v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_4__, 0);
      if ( !mTerminalList )
        goto LABEL_49;
      ScrTerminalListTop__CheckIncomingCall(mTerminalList, v14, 0);
      return;
    }
    if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    if ( EventInfoUIProgressControl__IsDispEventProgress(v6, 0) )
    {
      Master_object = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_49;
      MissionNotifyManager__StartPause(Master_object, 0);
      Master_object = (MissionNotifyManager_o *)this->fields.terminalScene;
      if ( !Master_object )
        goto LABEL_49;
      TerminalSceneComponent__SetActionBGColl((TerminalSceneComponent_o *)Master_object, 1, 0, 0);
      v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_5__, 0);
      ScrTerminalMap__PlayEventProgressEffect(this, v15, v16);
      return;
    }
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)entity, 0) )
    {
      v17 = this->fields.titleInfoControl;
      v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_6__, 0);
      if ( !v17 )
        goto LABEL_49;
      TitleInfoControl__ShowEventInfoReleaseCraftItemDialog(v17, v6, v18, 0);
      return;
    }
LABEL_47:
    ScrTerminalMap__OnMapTouchDisableFinished(this, v5);
  }
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_2(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C40194 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C40194 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v4);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_3(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *terminalScene; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C40195 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C40195 = 1;
  }
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene
    || (TerminalSceneComponent__SetActionBGColl(terminalScene, 0, 0, 0),
        (terminalScene = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(terminalScene);
  }
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)terminalScene, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v4);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_4(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C40196 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C40196 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v4);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_5(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C40197 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C40197 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__CancelPause(Instance, 0),
        (Instance = (MissionNotifyManager_o *)this->fields.terminalScene) == 0) )
  {
    sub_1C372B4(Instance);
  }
  TerminalSceneComponent__SetActionBGColl((TerminalSceneComponent_o *)Instance, 0, 0, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v4);
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

  if ( (byte_4C40198 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__mcbfMapTouchDisable_b__359_7__);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    byte_4C40198 = 1;
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
    _9__359_7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__359_7, v6, Method_ScrTerminalMap___c__mcbfMapTouchDisable_b__359_7__, 0);
    static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
    static_fields->__9__359_7 = _9__359_7;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__359_7, (int32_t)_9__359_7, v8, v9);
  }
  if ( !terminalScene )
    sub_1C372B4(v3);
  TerminalSceneComponent__CheckOpenCampaignDirectBonus(terminalScene, _9__359_7, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v10);
}


void ScrTerminalMap___mcbfMapTouchEnable_b__337_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40189 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40189 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB4F )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB4F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsQuestClear_k__BackingField = 0;
  if ( !byte_4C3FB50 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FB50 = 1;
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
  if ( (byte_4C40188 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8922/*"MapTouchEnableAuto"*/);
    byte_4C40188 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_8922/*"MapTouchEnableAuto"*/, 1.0, 0);
}


void ScrTerminalMap___mcbfSpotMaskStart_b__319_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_4C40187 & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C40187 = 1;
  }
  ScrTerminalMap__SpotMaskStart_FadeEnd(this, method);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(102, 0) )
  {
    titleInfoControl = this->fields.titleInfoControl;
    if ( !titleInfoControl )
      sub_1C372B4(0);
    TitleInfoControl__setBackBtnColliderEnable(titleInfoControl, 1, 0);
  }
}


void ScrTerminalMap___mcbfWhiteOut_b__318_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4C40186 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C40186 = 1;
  }
  ScrTerminalMap__DestroyMapObjs(this, method);
  ScrTerminalMap__InitTitleInfo(this, v3);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, v4);
}


void ScrTerminalMap___smfMap2d_SpotMarkCreate_b__288_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4C40185 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19118/*"evMap2D_Mark_Create_Finish"*/);
    byte_4C40185 = 1;
  }
  ScrTerminalMap__SetupEventBoardGame(this, method);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_19118/*"evMap2D_Mark_Create_Finish"*/, v3);
}


void ScrTerminalMap___smfSetMapChange_b__269_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  ScrTerminalMap_o *v9; // x0
  const MethodInfo *v10; // x2
  System_String_o *AssetName; // x20
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C40182 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__smfSetMapChange_b__269_1__);
    byte_4C40182 = 1;
  }
  ScrTerminalMap__SetupFeildConfiguration(this, method);
  currentAssetId = this->fields.currentAssetId;
  v9 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v3, v4, v5, v6, v7, v8);
  AssetName = ScrTerminalMap__GetAssetName(v9, (Il2CppObject *)v9, v10);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)this, Method_ScrTerminalMap__smfSetMapChange_b__269_1__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v12, 1, 0);
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
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  MapControl_WarInfo_o *mWarInfo; // x0
  ScrTerminalMap_o *v13; // x0
  const MethodInfo *v14; // x3
  System_String_o *AssetMultiMapName; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  AssetData_o *mapAssetData; // x20
  ScrTerminalMap_o *v18; // x0
  const MethodInfo *v19; // x2
  System_String_o *AssetAtlasName; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2
  int32_t v26; // [xsp+8h] [xbp-28h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C40183 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_LoadEventMap__);
    sub_1C37058(&Method_ScrTerminalMap__smfSetMapChange_b__269_2__);
    byte_4C40183 = 1;
  }
  this->fields.mapAssetData = assetData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapAssetData, (int32_t)assetData, (int32_t)method, v3);
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo || !MapControl_WarInfo__IsMultiMap(mWarInfo, 0) )
    goto LABEL_8;
  currentAssetId = this->fields.currentAssetId;
  v13 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v6, v7, v8, v9, v10, v11);
  AssetMultiMapName = ScrTerminalMap__GetAssetMultiMapName(v13, (Il2CppObject *)v13, this->fields.mMapEnt, v14);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_ScrTerminalMap__smfSetMapChange_b__269_2__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetMultiMapName, v16, 1, 0) )
  {
LABEL_8:
    mapAssetData = this->fields.mapAssetData;
    v26 = this->fields.currentAssetId;
    v18 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v6, v7, v8, v9, v10, v11);
    AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v18, (Il2CppObject *)v18, v19);
    ScrTerminalMap__LoadAssetsAtlases(this, mapAssetData, AssetAtlasName, v21);
    ScrTerminalMap__LoadMapEffectPrefab(this, this->fields.mapAssetData, v22);
    ScrTerminalMap__LoadEventMapObject(this, this->fields.mapAssetData, v23);
    v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ScrTerminalMap_LoadEventMap__, 0);
    ScrTerminalMap__LoadMapImgTex(this, v24, v25);
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
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  ScrTerminalMap_o *v13; // x0
  const MethodInfo *v14; // x2
  System_String_o *AssetAtlasName; // x0
  const MethodInfo *v16; // x3
  AssetData_o *mapMultiAssetData; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  ScrTerminalMap_o *v24; // x0
  const MethodInfo *v25; // x3
  System_String_o *MultiMapAssetAtlasName; // x0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x2
  int32_t v32; // [xsp+8h] [xbp-38h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C40184 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_LoadEventMap__);
    byte_4C40184 = 1;
  }
  this->fields.mapMultiAssetData = multiAssetData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapMultiAssetData, (int32_t)multiAssetData, (int32_t)method, v3);
  mapAssetData = this->fields.mapAssetData;
  currentAssetId = this->fields.currentAssetId;
  v13 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v7, v8, v9, v10, v11, v12);
  AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v13, (Il2CppObject *)v13, v14);
  ScrTerminalMap__LoadAssetsAtlases(this, mapAssetData, AssetAtlasName, v16);
  mapMultiAssetData = this->fields.mapMultiAssetData;
  v32 = this->fields.currentAssetId;
  v24 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v18, v19, v20, v21, v22, v23);
  MultiMapAssetAtlasName = ScrTerminalMap__GetMultiMapAssetAtlasName(
                             v24,
                             (Il2CppObject *)v24,
                             this->fields.mMapEnt,
                             v25);
  ScrTerminalMap__LoadAssetsAtlases(this, mapMultiAssetData, MultiMapAssetAtlasName, v27);
  ScrTerminalMap__LoadMapEffectPrefab(this, this->fields.mapAssetData, v28);
  ScrTerminalMap__LoadEventMapObject(this, this->fields.mapAssetData, v29);
  v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ScrTerminalMap_LoadEventMap__, 0);
  ScrTerminalMap__LoadMapImgTex(this, v30, v31);
}


void ScrTerminalMap__afterFadeInMapDisp(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapButtonControl_o *mapButtonGrid; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C40116 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C40116 = 1;
  }
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    sub_1C372B4(0);
  MapButtonControl__FrameIn(mapButtonGrid, 0);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, v4);
}


void ScrTerminalMap__eventInfoAssetLoad(ScrTerminalMap_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  MapControl_WarInfo_o *mWarInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  AssetLoader_LoadEndDataHandler_o *v13; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C400EC & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass270_0__eventInfoAssetLoad_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass270_0_TypeInfo);
    sub_1C37058(&StringLiteral_13686/*"Terminal/Info"*/);
    byte_4C400EC = 1;
  }
  entity = 0;
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass270_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass270_0___ctor((ScrTerminalMap___c__DisplayClass270_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_15;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(mWarInfo, 0);
  if ( !v12 )
    goto LABEL_15;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v12,
                               &entity,
                               (int32_t)Instance,
                               (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_15:
    sub_1C372B4(Instance);
  if ( HIDWORD(entity[9].klass) != 6 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
LABEL_10:
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass270_0__eventInfoAssetLoad_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13686/*"Terminal/Info"*/, v13, 1, 0);
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

  if ( (byte_4C400C9 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C400C9 = 1;
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

  if ( (byte_4C400C8 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C400C8 = 1;
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

  if ( (byte_4C400C6 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C400C6 = 1;
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

  if ( (byte_4C400C5 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C400C5 = 1;
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

  if ( (byte_4C400C7 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C400C7 = 1;
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

  if ( (byte_4C400C4 & 1) == 0 )
  {
    sub_1C37058(&SubmarineMapManager_TypeInfo);
    byte_4C400C4 = 1;
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x2
  TerminalPramsManager_c *v6; // x0
  int32_t meSceneStatus; // w8
  __int64 *v8; // x8
  TerminalPramsManager_c *v9; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C40179 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_5749/*"EV_SCENE_STATUS_RESUME_FROM_SCRIPT"*/);
    sub_1C37058(&StringLiteral_5747/*"EV_SCENE_STATUS_INIT"*/);
    sub_1C37058(&StringLiteral_5748/*"EV_SCENE_STATUS_RESUME"*/);
    byte_4C40179 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_33:
    sub_1C372B4(Instance);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL),
          (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    goto LABEL_23;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_33;
  if ( WarEntity__IsFolder((WarEntity_o *)entity, 0) )
    goto LABEL_23;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFAA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFAA = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  meSceneStatus = v6->static_fields->meSceneStatus;
  if ( meSceneStatus != 2 )
  {
    if ( meSceneStatus == 3 )
    {
      v8 = &StringLiteral_5749/*"EV_SCENE_STATUS_RESUME_FROM_SCRIPT"*/;
      goto LABEL_31;
    }
LABEL_23:
    ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_5747/*"EV_SCENE_STATUS_INIT"*/, v5);
    return;
  }
  if ( !v6->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v6);
  if ( !byte_4C3FB5B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB5B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
  v8 = &StringLiteral_5748/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_31:
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)*v8, v5);
  Instance = (DataManager_o *)this->fields.titleInfoControl;
  if ( !Instance )
    goto LABEL_33;
  TitleInfoControl__setHeaderBgImg((TitleInfoControl_o *)Instance, this->fields.currentWarId, 0);
}


void ScrTerminalMap__mcbfMapTouchDisable(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *terminalScene; // x20
  AvalonSceneManager_c *v4; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  TerminalSceneComponent_o *v7; // x0
  __int64 v8; // x8
  ScrTerminalListTop_o *v9; // x20
  System_Action_o *v10; // x21

  if ( (byte_4C40139 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_OnMapTouchDisableFinished__);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_0__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C40139 = 1;
  }
  ScrTerminalMap__SetupFeildConfiguration(this, method);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsAuto(0) )
  {
    terminalScene = this->fields.terminalScene;
    v4 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v4 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
    v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_0__, 0);
    if ( terminalScene )
    {
      TerminalSceneComponent__Fadein_MapDisp(terminalScene, DEFAULT_FADE_TIME, v6, 0);
      goto LABEL_19;
    }
LABEL_21:
    sub_1C372B4(v7);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v7 = (TerminalSceneComponent_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = (TerminalSceneComponent_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = **(_QWORD **)&v7->fields.TUTORIAL_MENU_ARROW_POS2;
  if ( !v8 )
    goto LABEL_21;
  v9 = *(ScrTerminalListTop_o **)(v8 + 256);
  v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrTerminalMap_OnMapTouchDisableFinished__, 0);
  if ( !v9 )
    goto LABEL_21;
  ScrTerminalListTop__CheckIncomingCall(v9, v10, 0);
LABEL_19:
  v7 = this->fields.terminalScene;
  if ( !v7 )
    goto LABEL_21;
  TerminalSceneComponent__PlayRaidTutorial(v7, 0);
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

  if ( (byte_4C40124 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchEnable_b__337_0__);
    sub_1C37058(&Method_ScrTerminalMap__mcbfMapTouchEnable_b__337_1__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C40124 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(102, 0) )
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
    if ( !byte_4C401AF )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401AF = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    if ( eventId != v7->static_fields->_TimeStatusEventId_k__BackingField )
      goto LABEL_65;
    IsAuto = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsAuto )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          IsAuto,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
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
    if ( !byte_4C401B0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401B0 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchEnable_b__337_1__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.5, v13, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FFE3 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFE3 = 1;
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
    sub_1C372B4(IsAuto);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F89B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F89B = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_SpotId_k__BackingField = -1;
  if ( !byte_4C401B1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4C401B1 = 1;
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
  IsAuto = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !IsAuto )
    goto LABEL_67;
  QuestAfterAction__Init((QuestAfterAction_o *)IsAuto, 0);
  IsAuto = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !IsAuto )
    goto LABEL_67;
  QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)IsAuto, 0, 0);
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchEnable_b__337_0__, 0);
  if ( !v16 )
    goto LABEL_67;
  QuestAfterAction__Play((QuestAfterAction_o *)v16, v17, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B2 = 1;
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

  if ( (byte_4C4011B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C37058(&Method_ScrTerminalMap__mcbfSpotMaskEnd_b__323_0__);
    byte_4C4011B = 1;
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
        (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
      TweenAlpha__Begin(this->fields.spotMaskObj, 0.25, 0.0, 0);
      spotLargeComponent = this->fields.spotLargeComponent;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfSpotMaskEnd_b__323_0__, 0);
      if ( spotLargeComponent )
      {
        SpotLargeComponent__LargeOut(spotLargeComponent, v8, 0);
        return;
      }
LABEL_15:
      sub_1C372B4(spotMaskObj);
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
  const MethodInfo *v4; // x1
  bool IsMapModel; // w20
  const MethodInfo *v6; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  SpotLargeComponent_o *spotLargeComponent; // x21
  struct MapModelManager_o *mapModelManager; // x8
  MapModelCamera_o *MapModelCamera_k__BackingField; // x24
  MapCamera_o *mapCamera; // x23
  SrcSpotBasePrefab_o *v15; // x22
  System_Action_o *v16; // x25
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40118 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C37058(&Method_ScrTerminalMap__mcbfSpotMaskStart_b__319_0__);
    byte_4C40118 = 1;
  }
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf(spotMaskObj, 0) )
  {
    ScrTerminalMap__SpotMaskStart_FadeEnd(this, v4);
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
    (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  TweenAlpha__Begin(this->fields.spotMaskObj, 0.25, 1.0, 0);
  spotMaskObj = (UnityEngine_GameObject_o *)this->fields.mapModelManager;
  if ( !spotMaskObj )
    goto LABEL_18;
  IsMapModel = MapModelManager__get_IsMapModel((MapModelManager_o *)spotMaskObj, 0);
  if ( IsMapModel )
  {
    Position = GameObjectExtensions__GetPosition(this->fields.spotTouchObj, 0);
    v18 = ScrTerminalMap__ConvertWorldToScreenPosition(this, Position, v6);
    x = v18.fields.x;
    y = v18.fields.y;
    z = v18.fields.z;
  }
  else
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
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
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager
    || (MapModelCamera_k__BackingField = mapModelManager->fields._MapModelCamera_k__BackingField,
        mapCamera = this->fields.mapCamera,
        v15 = (SrcSpotBasePrefab_o *)spotMaskObj,
        v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfSpotMaskStart_b__319_0__, 0),
        !spotLargeComponent) )
  {
LABEL_18:
    sub_1C372B4(spotMaskObj);
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  SpotLargeComponent__LargeIn(
    spotLargeComponent,
    v15,
    mapCamera,
    MapModelCamera_k__BackingField,
    v16,
    IsMapModel,
    v19,
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
  Il2CppClass *klass; // x8
  ScrTerminalListTop_o *v27; // x22
  const MethodInfo *v28; // x1
  System_Collections_IEnumerator_o *v29; // x0
  struct TerminalSceneComponent_o *v30; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct TerminalSceneComponent_o *v32; // x8
  struct ScrTerminalListTop_o *v33; // x8
  System_String_o *v34; // x20
  struct TerminalSceneComponent_o *v35; // x20
  int32_t v36; // w22
  System_Action_o *v37; // x21
  float v38; // s0
  TerminalSceneComponent_o *v39; // x0
  struct TerminalSceneComponent_o *v40; // x20
  AvalonSceneManager_c *v41; // x0
  float DEFAULT_FADE_TIME; // s8
  const MethodInfo *v43; // x2
  int32_t fadeTime; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *fadeType; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector2_o v46; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o ValueVector3; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40114 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C37058(&Method_ScrTerminalMap_afterFadeInMapDisp__);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    sub_1C37058(&StringLiteral_5538/*"EVENT_BOARD_GAME_MAP_POSITION"*/);
    byte_4C40114 = 1;
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
  mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mapButtonGrid )
    goto LABEL_132;
  mapButtonGrid = (MapButtonControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)mapButtonGrid,
                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventScriptMaster___);
  mWarEnt = this->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_132;
  if ( !mapButtonGrid )
    goto LABEL_132;
  Available = EventScriptMaster__GetAvailable((EventScriptMaster_o *)mapButtonGrid, mWarEnt->fields.eventId, 0);
  this->fields.eventScriptCallingList = Available;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventScriptCallingList, (int32_t)Available, v6, v7);
  eventScriptCallingList = this->fields.eventScriptCallingList;
  if ( !eventScriptCallingList )
    goto LABEL_132;
  v9 = TerminalPramsManager_TypeInfo;
  if ( eventScriptCallingList->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F89B )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F89B = 1;
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
        mapButtonGrid = (MapButtonControl_o *)System_String__Equals_63596960(
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
    if ( !byte_4C401A9 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401A9 = 1;
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
      if ( !byte_4C401AA )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401AA = 1;
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
        if ( !byte_4C401AA )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C401AA = 1;
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
        if ( !byte_4C401AB )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
          byte_4C401AB = 1;
        }
        if ( !LODWORD(mapButtonGrid[2].fields.m_CachedPtr) )
        {
          j_il2cpp_runtime_class_init_0(mapButtonGrid);
          mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
        }
        BYTE1(mapButtonGrid[1].fields.buttons->m_Items[16]) = 0;
        if ( !byte_4C401AC )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
          byte_4C401AC = 1;
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
    if ( !byte_4C3FFE5 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFE5 = 1;
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
      if ( !byte_4C3FFE4 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFE4 = 1;
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
        if ( !byte_4C401AD )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C401AD = 1;
        }
        v15 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v15 = TerminalPramsManager_TypeInfo;
        }
        if ( (v15->static_fields->_QuestMessageScriptQuestPhase_k__BackingField & 0x80000000) == 0 )
        {
          mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( mapButtonGrid )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)mapButtonGrid,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3FFE4 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3FFE4 = 1;
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
              mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( mapButtonGrid )
              {
                v18 = DataManager__GetMasterData_object_(
                        (DataManager_o *)mapButtonGrid,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantMaster___);
                mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( mapButtonGrid )
                {
                  mapButtonGrid = (MapButtonControl_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)mapButtonGrid,
                                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
                  if ( v18 )
                  {
                    v19 = (ConstantStrMaster_o *)mapButtonGrid;
                    RateValue = ConstantMaster__GetRateValue(
                                  (ConstantMaster_o *)v18,
                                  (System_String_o *)StringLiteral_5538/*"EVENT_BOARD_GAME_MAP_POSITION"*/,
                                  1.8,
                                  0);
                    if ( v19 )
                    {
                      v21 = RateValue;
                      ValueVector3 = ConstantStrMaster__GetValueVector3(v19, (System_String_o *)StringLiteral_5538/*"EVENT_BOARD_GAME_MAP_POSITION"*/, 0);
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
                              v46.fields.x = x;
                              v46.fields.y = y;
                              MapScroll__SetScrlPos((MapScroll_o *)mapButtonGrid, v46, 0);
                              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                              if ( !byte_4C3CF06 )
                              {
                                sub_1C37058(&TerminalSceneComponent_TypeInfo);
                                byte_4C3CF06 = 1;
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
                                v27 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
                                if ( !byte_4C401AD )
                                {
                                  sub_1C37058(&TerminalPramsManager_TypeInfo);
                                  byte_4C401AD = 1;
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
                                    sub_1C372BC(mapButtonGrid);
                                  if ( v27 )
                                  {
                                    ScrTerminalListTop__ResumeQuestScriptWithMap(
                                      v27,
                                      HIDWORD(mapButtonGrid[1].fields.buttons->m_Items[88]),
                                      List->m_Items[0],
                                      0);
                                    v29 = ScrTerminalMap__WaitScriptLoad(this, v28);
                                    UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                      (UnityEngine_MonoBehaviour_o *)this,
                                      v29,
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
          sub_1C372B4(mapButtonGrid);
        }
      }
    }
    mapButtonGrid = this->fields.mapButtonGrid;
    if ( !mapButtonGrid )
      goto LABEL_132;
    MapButtonControl__FrameIn(mapButtonGrid, 0);
    ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, v43);
  }
  else
  {
    v30 = this->fields.terminalScene;
    if ( !v30 )
      goto LABEL_132;
    mTerminalList = v30->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_132;
    mapButtonGrid = (MapButtonControl_o *)mTerminalList->fields.mQuestBoardListViewManager;
    if ( !mapButtonGrid )
      goto LABEL_132;
    QuestBoardListViewManager__SetOutPosition((QuestBoardListViewManager_o *)mapButtonGrid, 0);
    v32 = this->fields.terminalScene;
    if ( !v32 )
      goto LABEL_132;
    v33 = v32->fields.mTerminalList;
    if ( !v33 )
      goto LABEL_132;
    mapButtonGrid = (MapButtonControl_o *)v33->fields.mQuestBoardListViewManager;
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
    v34 = fadeType;
    mapButtonGrid = (MapButtonControl_o *)ScrTerminalMap_TypeInfo;
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    if ( !v34 )
      goto LABEL_132;
    if ( System_String__Equals_63596960(v34, ScrTerminalMap_TypeInfo->static_fields->FIRST_FADE_TYPE_DURATION, 0) )
    {
      v35 = this->fields.terminalScene;
      v36 = fadeTime;
      v37 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)this, Method_ScrTerminalMap_afterFadeInMapDisp__, 0);
      if ( !v35 )
        goto LABEL_132;
      v38 = (float)v36 / 1000.0;
      v39 = v35;
    }
    else
    {
LABEL_125:
      v40 = this->fields.terminalScene;
      v41 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v41 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v41->static_fields->DEFAULT_FADE_TIME;
      v37 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)this, Method_ScrTerminalMap_afterFadeInMapDisp__, 0);
      if ( !v40 )
        goto LABEL_132;
      v39 = v40;
      v38 = DEFAULT_FADE_TIME;
    }
    TerminalSceneComponent__Fadein_MapDisp(v39, v38, v37, 0);
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

  if ( (byte_4C40117 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__mcbfWhiteOut_b__318_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C40117 = 1;
  }
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_8;
  MapButtonControl__FrameOut(mapButtonGrid, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfWhiteOut_b__318_0__, 0);
  if ( !v6 )
LABEL_8:
    sub_1C372B4(mapButtonGrid);
  CommonUI__maskFadeout(v6, 2, DEFAULT_FADE_TIME, v8, 0);
}


void ScrTerminalMap__mcbfWhiteOut_ToMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  void *Instance; // x0
  struct MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o **p_mWarInfo; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct WarEntity_o *Mine; // x0
  struct WarEntity_o **p_mWarEnt; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct MapControl_MapInfo_o **p_mMapInfo; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  MapControl_WarInfo_o *v16; // x23
  MapControl_MapInfo_o *Map; // x0
  const MethodInfo *v18; // x1
  MapControl_MapInfo_o *v19; // x22
  System_String_o *SaveKey_BaseMap; // x23
  const MethodInfo *v21; // x1
  int32_t Int_71224996; // w0
  struct MapControl_MapInfo_o *v23; // x23
  System_String_o *v24; // x0
  MapControl_MapInfo_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  MapControl_WarInfo_o *v28; // x22
  int32_t v29; // w24
  MapControl_MapInfo_o *ActionMap; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *SaveKey_PlayerMap; // x0
  System_String_o *v37; // x22
  int32_t v38; // w1
  MapControl_MapInfo_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int32_t currentWarId; // w21
  int32_t mapId; // w22
  System_String_o *SaveKey_PlayerIcon; // x0
  struct MapControl_MapInfo_o *v48; // x8
  struct MapEntity_o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct TerminalSceneComponent_o *terminalScene; // x8
  TitleInfoControl_o *titleInfoControl; // x20
  MapEntity_o *mMapEnt; // x21
  int32_t BeforeClearQuestIdForAction_k__BackingField; // w22
  TerminalSceneComponent_o *v56; // x20
  TerminalSceneComponent_PlayChapterStartCallback_o *v57; // x21

  if ( (byte_4C40112 & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_PlayChapterStartCallback_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__mcbfWhiteOut_ToMap_b__313_0__);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40112 = 1;
  }
  *(_WORD *)&this->fields.isFirstFade = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  this->fields.currentWarId = v3->static_fields->_WarId_k__BackingField;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, this->fields.currentWarId, 0);
  p_mWarInfo = &this->fields.mWarInfo;
  this->fields.mWarInfo = WarInfoByWarID;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mWarInfo, (int32_t)WarInfoByWarID, v7, v8);
  Instance = this->fields.mWarInfo;
  if ( !Instance )
    goto LABEL_64;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0);
  p_mWarEnt = &this->fields.mWarEnt;
  this->fields.mWarEnt = Mine;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mWarEnt, (int32_t)Mine, v11, v12);
  p_mMapInfo = &this->fields.mMapInfo;
  this->fields.mMapInfo = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapInfo, 0, v14, v15);
  Instance = this->fields.mWarInfo;
  if ( !Instance )
    goto LABEL_64;
  Instance = (void *)MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)Instance, 0);
  v16 = *p_mWarInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = *p_mWarEnt;
    if ( *p_mWarEnt )
    {
      Instance = (void *)WarEntity__GetBaseMap((WarEntity_o *)Instance, 0);
      if ( v16 )
      {
        Map = MapControl_WarInfo__GetMap(v16, (int32_t)Instance, 0);
        if ( Map )
        {
          v19 = Map;
          SaveKey_BaseMap = ScrTerminalMap__GetSaveKey_BaseMap(this, v18);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !TerminalPramsManager__IsAuto(0)
            || !UnityEngine_PlayerPrefs__HasKey(SaveKey_BaseMap, 0)
            || (Int_71224996 = UnityEngine_PlayerPrefs__GetInt_71224996(SaveKey_BaseMap, 0),
                v23 = 0,
                Int_71224996 != v19->fields.mapId) )
          {
            v24 = ScrTerminalMap__GetSaveKey_BaseMap(this, v21);
            UnityEngine_PlayerPrefs__SetInt(v24, v19->fields.mapId, 0);
            v23 = v19;
          }
        }
        else
        {
          v23 = 0;
        }
        v28 = *p_mWarInfo;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( Instance )
        {
          v29 = *((_DWORD *)Instance + 51);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( Instance )
          {
            if ( v28 )
            {
              ActionMap = MapControl_WarInfo__GetActionMap(v28, v29, *((_DWORD *)Instance + 52), 0);
              *p_mMapInfo = ActionMap;
              sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)ActionMap, v31, v32);
              if ( !*p_mMapInfo )
              {
                *p_mMapInfo = v23;
                sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)v23, v34, v35);
              }
              SaveKey_PlayerMap = ScrTerminalMap__GetSaveKey_PlayerMap(this, v33);
              v37 = SaveKey_PlayerMap;
              if ( !this->fields.mMapInfo )
              {
                if ( UnityEngine_PlayerPrefs__HasKey(SaveKey_PlayerMap, 0) )
                  v38 = UnityEngine_PlayerPrefs__GetInt_71224996(v37, 0);
                else
                  v38 = 0;
                Instance = *p_mWarInfo;
                if ( !*p_mWarInfo )
                  goto LABEL_64;
                v39 = MapControl_WarInfo__GetMap((MapControl_WarInfo_o *)Instance, v38, 0);
                *p_mMapInfo = v39;
                sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)v39, v40, v41);
              }
              if ( !UnityEngine_PlayerPrefs__HasKey(v37, 0) )
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
                SaveKey_PlayerIcon = ScrTerminalMap__CreateSaveKey_PlayerIcon(currentWarId, mapId, v43);
                if ( !UnityEngine_PlayerPrefs__HasKey(SaveKey_PlayerIcon, 0) )
LABEL_43:
                  this->fields.isFirstMap = 1;
              }
              Instance = ScrTerminalMap__GetSaveKey_PlayerMap(this, v42);
              v48 = this->fields.mMapInfo;
              if ( v48 )
              {
                UnityEngine_PlayerPrefs__SetInt((System_String_o *)Instance, v48->fields.mapId, 0);
                goto LABEL_46;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_1C372B4(Instance);
  }
  if ( !v16 )
    goto LABEL_64;
  v25 = MapControl_WarInfo__GetMap(*p_mWarInfo, 0, 0);
  *p_mMapInfo = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)v25, v26, v27);
LABEL_46:
  Instance = *p_mMapInfo;
  if ( !*p_mMapInfo )
    goto LABEL_64;
  this->fields.currentMapId = *((_DWORD *)Instance + 5);
  v49 = MapControl_MapInfo__GetMine((MapControl_MapInfo_o *)Instance, 0);
  this->fields.mMapEnt = v49;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapEnt, (int32_t)v49, v50, v51);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
    BeforeClearQuestIdForAction_k__BackingField = this->fields._BeforeClearQuestIdForAction_k__BackingField;
  else
    BeforeClearQuestIdForAction_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE6 = 1;
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
  v56 = this->fields.terminalScene;
  v57 = (TerminalSceneComponent_PlayChapterStartCallback_o *)sub_1C372A4(TerminalSceneComponent_PlayChapterStartCallback_TypeInfo);
  TerminalSceneComponent_PlayChapterStartCallback___ctor(
    v57,
    (Il2CppObject *)this,
    Method_ScrTerminalMap__mcbfWhiteOut_ToMap_b__313_0__,
    0);
  if ( !v56 )
    goto LABEL_64;
  TerminalSceneComponent__PlayChapterStart(v56, v57, 0);
}


void ScrTerminalMap__mcbfWhiteOut_ToMap_End(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C40113 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C40113 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB58 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB58 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->meSceneStatus = 0;
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, v2);
}


void ScrTerminalMap__mfCallFsmEvent(ScrTerminalMap_o *this, System_String_o *fsmEventName, const MethodInfo *method)
{
  UnityEngine_Object_o *MyFsmP; // x20
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0

  if ( (byte_4C40174 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40174 = 1;
  }
  MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP(this, (const MethodInfo *)fsmEventName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Fsm = (HutongGames_PlayMaker_Fsm_o *)UnityEngine_Object__op_Equality(MyFsmP, 0, 0);
  if ( ((unsigned __int8)Fsm & 1) == 0 )
  {
    if ( !MyFsmP || (Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)MyFsmP, 0)) == 0 )
      sub_1C372B4(Fsm);
    HutongGames_PlayMaker_Fsm__Event_66383984(Fsm, fsmEventName, 0);
  }
}


int32_t ScrTerminalMap__mfGetFsmValueInt(ScrTerminalMap_o *this, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *MyFsmP; // x20
  HutongGames_PlayMaker_FsmVariables_o *Fsm; // x0

  if ( (byte_4C40176 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40176 = 1;
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
    sub_1C372B4(Fsm);
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

  if ( (byte_4C40173 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40173 = 1;
  }
  targetFsm = (UnityEngine_Object_o *)this->fields.targetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0, targetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.targetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetFsm, (int32_t)Component_object, v5, v6);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x22
  int32_t v7; // w24
  _DWORD *v8; // x21
  Il2CppObject *Entity; // x23
  Il2CppObject *v10; // x0
  Il2CppObject *pfbLineP; // x22
  Il2CppObject *v12; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v17; // x8
  float v18; // s13
  float v19; // s14
  float w; // s11
  float v21; // s12
  Il2CppObject *v22; // x22
  Il2CppObject *Component_object; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  float v26; // s0
  float mapImageOffsetX; // s0
  float mapImageOffsetY; // s1
  float currentMapImageH_k__BackingField; // s2
  float v30; // s6
  float v31; // s4
  float v32; // s5
  System_String_o *OverwriteMapAssetId; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  bool IsNullOrEmpty; // w25
  ScrTerminalMap_c *v41; // x8
  System_String_o *ASSETS_NAME_SPOT_ROAD; // x24
  System_Int32_c *v43; // x0
  int *v44; // x1
  Il2CppObject *v45; // x0
  System_String_o *v46; // x21
  UIAtlas_o *UIAtlasBySpriteName; // x0
  float v48; // s0
  int v49; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t currentAssetId; // [xsp+8h] [xbp-88h] BYREF
  int v51; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector2_o v52; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v53; // 0:s2.4,4:s3.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v55; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C4010F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_srcLineSprite___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78193024);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C4010F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !spotRoadInfo )
    goto LABEL_32;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = MapControl_SpotRoadInfo__GetMine(spotRoadInfo, 0);
  if ( !Master_object || !v6 )
    goto LABEL_32;
  v7 = *((_DWORD *)Master_object + 7);
  v8 = Master_object;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v6,
             *((_DWORD *)Master_object + 6),
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v10 = DataMasterBase_object__object__int___GetEntity(
          v6,
          v7,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  pfbLineP = (Il2CppObject *)this->fields.pfbLineP;
  v12 = v10;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4C3C927 )
  {
    sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
    byte_4C3C927 = 1;
  }
  v17 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v19 = v17->identityQuaternion.fields.x;
  v18 = v17->identityQuaternion.fields.y;
  v21 = v17->identityQuaternion.fields.z;
  w = v17->identityQuaternion.fields.w;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v54.fields.x = x;
  v54.fields.y = y;
  v54.fields.z = z;
  v55.fields.x = v19;
  v55.fields.y = v18;
  v55.fields.z = v21;
  v55.fields.w = w;
  v22 = UnityEngine_Object__Instantiate_object__51855900(
          pfbLineP,
          v54,
          v55,
          (const MethodInfo_317421C *)Method_UnityEngine_Object_Instantiate_GameObject____78193024);
  Master_object = srcLineSprite__GetGobjName(v8[4], 0);
  if ( !v22 )
    goto LABEL_32;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v22, (System_String_o *)Master_object, 0);
  GameObjectExtensions__SetParent_36138108((UnityEngine_GameObject_o *)v22, this->fields.rootRoadP, 0);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v22, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v22,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_srcLineSprite___);
  Master_object = (void *)UnityEngine_Object__op_Inequality(0, (UnityEngine_Object_o *)Component_object, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !Component_object )
    goto LABEL_32;
  Component_object[8].klass = (Il2CppClass *)spotRoadInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[8], (int32_t)spotRoadInfo, v24, v25);
  v26 = 1.0;
  if ( !spotRoadInfo->fields.dispType )
    v26 = 0.0;
  srcLineSprite__mfSetITweenSize((srcLineSprite_o *)Component_object, v26, v26, 0.0, 0);
  if ( !Entity )
    goto LABEL_32;
  if ( !v12 )
    goto LABEL_32;
  mapImageOffsetX = this->fields.mapImageOffsetX;
  mapImageOffsetY = this->fields.mapImageOffsetY;
  currentMapImageH_k__BackingField = (float)this->fields._currentMapImageH_k__BackingField;
  v30 = (float)SHIDWORD(v12[2].monitor) - mapImageOffsetX;
  v31 = (float)(currentMapImageH_k__BackingField - (float)SLODWORD(Entity[3].klass)) - mapImageOffsetY;
  v52.fields.x = (float)((float)SHIDWORD(Entity[2].monitor) - mapImageOffsetX) + 0.0;
  v32 = (float)(currentMapImageH_k__BackingField - (float)SLODWORD(v12[3].klass)) - mapImageOffsetY;
  v53.fields.x = v30 + 0.0;
  v52.fields.y = v31 + 0.0;
  v53.fields.y = v32 + 0.0;
  srcLineSprite__mfSetPos2((srcLineSprite_o *)Component_object, v52, v53, 0);
  Master_object = this->fields.mMapInfo;
  if ( !Master_object || (Master_object = MapControl_MapInfo__GetMine((MapControl_MapInfo_o *)Master_object, 0)) == 0 )
LABEL_32:
    sub_1C372B4(Master_object);
  OverwriteMapAssetId = MapEntity__GetOverwriteMapAssetId((MapEntity_o *)Master_object, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(OverwriteMapAssetId, 0);
  v41 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v41 = ScrTerminalMap_TypeInfo;
  }
  ASSETS_NAME_SPOT_ROAD = v41->static_fields->ASSETS_NAME_SPOT_ROAD;
  if ( IsNullOrEmpty )
  {
    currentAssetId = this->fields.currentAssetId;
    OverwriteMapAssetId = (System_String_o *)j_il2cpp_value_box_0(
                                               int_TypeInfo,
                                               &currentAssetId,
                                               v34,
                                               v35,
                                               v36,
                                               v37,
                                               v38,
                                               v39);
    v43 = int_TypeInfo;
    v44 = &v49;
    v49 = v8[9];
  }
  else
  {
    v44 = &v51;
    v51 = v8[9];
    v43 = int_TypeInfo;
  }
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(v43, v44, v34, v35, v36, v37, v38, v39);
  v46 = System_String__Format_63602948(ASSETS_NAME_SPOT_ROAD, (Il2CppObject *)OverwriteMapAssetId, v45, 0);
  UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(this->fields.assetsAtlases, v46, 0);
  srcLineSprite__mfSetAtlas((srcLineSprite_o *)Component_object, UIAtlasBySpriteName, v46, 0);
  v48 = 1.0;
  if ( spotRoadInfo->fields.dispType == 2 )
    v48 = 0.5;
  srcLineSprite__SetContrast((srcLineSprite_o *)Component_object, v48, 0);
}


Custom2dSplineMesh_o *ScrTerminalMap__mfMap2d_Create_PathByMapGimmickId(
        ScrTerminalMap_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  Custom2dSplineMesh_o *result; // x0
  const MethodInfo *v6; // x4
  UnityEngine_Object_o *MapGimmickPathBaseObject; // x20
  bool v8; // w8
  Il2CppObject *v9; // x0
  UnityEngine_GameObject_o *rootPathP; // x1
  UnityEngine_GameObject_o *v11; // x19
  Il2CppObject *Component_object; // x19
  bool v13; // w8

  if ( (byte_4C4010B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Custom2dSplineMesh___);
    sub_1C37058(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4010B = 1;
  }
  SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (Custom2dSplineMesh_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
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
                                                         v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Equality(MapGimmickPathBaseObject, 0, 0);
    result = 0;
    if ( !v8 )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             (Il2CppObject *)MapGimmickPathBaseObject,
             (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      rootPathP = this->fields.rootPathP;
      v11 = (UnityEngine_GameObject_o *)v9;
      GameObjectExtensions__SetParent_36138108((UnityEngine_GameObject_o *)v9, rootPathP, 0);
      GameObjectExtensions__ResetLocalScale(v11, 0);
      GameObjectExtensions__ResetLocalPosition(v11, 0);
      if ( v11 )
      {
        result = (Custom2dSplineMesh_o *)UnityEngine_GameObject__get_transform(v11, 0);
        if ( result )
        {
          result = (Custom2dSplineMesh_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)result, 0, 0);
          if ( result )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)result,
                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Custom2dSplineMesh___);
            v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
            result = 0;
            if ( v13 )
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
      sub_1C372B4(result);
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
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x4
  UnityEngine_Object_o *SpotPathBaseObject; // x22
  bool v14; // w8
  Custom2dSplineMesh_o *result; // x0
  Il2CppObject *v16; // x22
  Il2CppObject *Component_object; // x22
  bool v18; // w8
  SpotAddMaster_o *v19; // x24
  float v20; // s0
  float v21; // s8
  Il2CppObject *v22; // x21
  int monitor; // w8
  float GoalRate; // s0
  const MethodInfo *v25; // x2
  float v26; // s0
  int64_t v27; // x1
  UnityEngine_GameObject_o *PathLengthObject; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t klass; // w19
  int32_t monitor_high; // w20
  int32_t data; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C4010A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Custom2dSplineMesh___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C37058(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
    sub_1C37058(&EventSpotMoveManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4010A = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  *pathLength = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)pathLength, 0, v8, v9);
  entity = 0;
  if ( !Instance )
    goto LABEL_47;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotPathMaster___);
  if ( !MasterData_object )
    goto LABEL_47;
  v11 = DataMasterBase_object__object__int___TryGetEntity(
          MasterData_object,
          &entity,
          spotId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  if ( !v11 )
    return 0;
  SpotPathBaseObject = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotPathBaseObject(
                                                 (ScrTerminalMap_o *)v11,
                                                 (SpotPathEntity_o *)entity,
                                                 this->fields.mapAssetData,
                                                 this->fields.mapMultiAssetData,
                                                 v12);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality(SpotPathBaseObject, 0, 0);
  result = 0;
  if ( !v14 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)SpotPathBaseObject,
            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SetParent_36138108((UnityEngine_GameObject_o *)v16, this->fields.rootPathP, 0);
    GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v16, 0);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v16, 0);
    if ( !v16 )
      goto LABEL_47;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)v16,
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
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Custom2dSplineMesh___);
    v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( !v18 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( MasterData_object )
      {
        v19 = (SpotAddMaster_o *)MasterData_object;
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
            v20 = (float)data / 1000.0;
LABEL_45:
            Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Component_object, v20, 0);
LABEL_46:
            Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Component_object, 0);
            return (Custom2dSplineMesh_o *)Component_object;
          }
        }
        else
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SpotAddMaster__HasPrioredData(
                                                                              v19,
                                                                              3,
                                                                              spotId,
                                                                              &data,
                                                                              0);
          v21 = 2.0;
          if ( (unsigned int)data <= 0x3E8 && ((unsigned __int8)MasterData_object & 1) != 0 )
            v21 = (float)data / 1000.0;
          v22 = entity;
          if ( entity )
          {
            monitor = (int)entity[1].monitor;
            if ( monitor == 2 )
            {
              monitor_high = HIDWORD(entity[1].monitor);
              klass = (int32_t)entity[2].klass;
              if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
              v20 = EventSpotMoveManager__CalcSpotPathRate(monitor_high, klass, (SpotPathEntity_o *)v22, 0);
              if ( Component_object )
                goto LABEL_45;
            }
            else if ( monitor == 1 )
            {
              MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceMaster___);
              if ( entity && MasterData_object )
              {
                GoalRate = EventRaceMaster__GetGoalRate(
                             (EventRaceMaster_o *)MasterData_object,
                             SHIDWORD(entity[1].monitor) / 100,
                             SHIDWORD(entity[1].monitor) % 100,
                             (int32_t)entity[2].klass,
                             0);
                if ( v21 >= GoalRate )
                  v21 = GoalRate;
                if ( Component_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Component_object, v21, 0);
                  if ( entity )
                  {
                    v26 = (float)(1.0 - v21) * (float)(__int64)entity[2].monitor;
                    if ( v26 > 0.0 )
                    {
                      if ( v26 == INFINITY )
                        v27 = 0x8000000000000000LL;
                      else
                        v27 = (__int64)v26;
                      PathLengthObject = ScrTerminalMap__CreatePathLengthObject(this, v27, v25);
                      *pathLength = PathLengthObject;
                      sub_1C36FFC((CGThumbnailListItem_o *)pathLength, (int32_t)PathLengthObject, v29, v30);
                    }
                    goto LABEL_46;
                  }
                }
              }
            }
            else if ( Component_object )
            {
              v20 = 0.0;
              goto LABEL_45;
            }
          }
        }
      }
LABEL_47:
      sub_1C372B4(MasterData_object);
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
  int32_t v8; // w25
  int32_t v9; // w24
  _DWORD *v10; // x21
  SpotEntity_o *v11; // x23
  Il2CppObject *Component_object; // x26
  const MethodInfo *v13; // x3
  Custom2dSplineMesh_o *v14; // x27
  __int64 v15; // x28
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *pfbBaseP; // x26
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v23; // x8
  float v24; // s13
  float v25; // s14
  float w; // s11
  float v27; // s12
  Il2CppObject *v28; // x0
  int32_t id; // w29
  UnityEngine_Object_o *v30; // x26
  __int64 v31; // x8
  MapEntity_o *mMapEnt; // x0
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  float v34; // s8
  float v35; // s9
  float v36; // s10
  float SpotScale; // s0
  struct UnityEngine_Vector3_StaticFields *v38; // x8
  ScrTerminalMap_c *v39; // x0
  int32_t v40; // w29
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct MapModelManager_o *mapModelManager; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x27
  struct MapModelManager_o *v45; // x8
  struct MapModelCamera_o *v46; // x8
  UnityEngine_Object_o *cameraInstance; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v49; // x27
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_String_o *Name; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  float v57; // s0
  struct MapModelManager_o *v58; // x8
  struct MapModelCamera_o *v59; // x1
  struct UnityEngine_GameObject_o *subRootEffectP; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  float v63; // s0
  bool IsTutorialActive; // w0
  int32_t ofsY[2]; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_GameObject_o *pathLength; // [xsp+18h] [xbp-98h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPositionOnMapModel; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v74; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C40109 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SpotAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78193024);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&EventSpotMoveManager_SpotMoveData_TypeInfo);
    sub_1C37058(&SrcSpotBasePrefab_TypeInfo);
    byte_4C40109 = 1;
  }
  *(_QWORD *)ofsY = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = QuestTree__GetSpotInfo((QuestTree_o *)Instance, spotId, 0);
  if ( !Instance )
    goto LABEL_78;
  v8 = *((_DWORD *)Instance + 7);
  v9 = *((_DWORD *)Instance + 10);
  v10 = Instance;
  Instance = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_78;
  v11 = (SpotEntity_o *)Instance;
  Component_object = 0;
  if ( !SpotEntity__HasFlag((SpotEntity_o *)Instance, 2, 0) )
  {
    pathLength = 0;
    if ( SpotEntity__HasFlag(v11, 4, 0) )
    {
      v14 = ScrTerminalMap__mfMap2d_Create_PathBySpotId(this, spotId, &pathLength, v13);
      v15 = sub_1C372A4(EventSpotMoveManager_SpotMoveData_TypeInfo);
      EventSpotMoveManager_SpotMoveData___ctor((EventSpotMoveManager_SpotMoveData_o *)v15, 0);
      if ( !v15 )
        goto LABEL_78;
      *(_QWORD *)(v15 + 32) = v14;
      *(_DWORD *)(v15 + 16) = spotId;
      sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v14, v16, v17);
      Instance = this->fields.eventSpotMoveManager;
      if ( !Instance )
        goto LABEL_78;
      EventSpotMoveManager__Add((EventSpotMoveManager_o *)Instance, (EventSpotMoveManager_SpotMoveData_o *)v15, 0);
    }
    else
    {
      v15 = 0;
      v14 = 0;
    }
    pfbBaseP = (Il2CppObject *)this->fields.pfbBaseP;
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !byte_4C3C927 )
    {
      sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
      byte_4C3C927 = 1;
    }
    v23 = UnityEngine_Quaternion_TypeInfo->static_fields;
    v25 = v23->identityQuaternion.fields.x;
    v24 = v23->identityQuaternion.fields.y;
    v27 = v23->identityQuaternion.fields.z;
    w = v23->identityQuaternion.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v68.fields.x = x;
    v68.fields.y = y;
    v68.fields.z = z;
    v74.fields.x = v25;
    v74.fields.y = v24;
    v74.fields.z = v27;
    v74.fields.w = w;
    v28 = UnityEngine_Object__Instantiate_object__51855900(
            pfbBaseP,
            v68,
            v74,
            (const MethodInfo_317421C *)Method_UnityEngine_Object_Instantiate_GameObject____78193024);
    id = v11->fields.id;
    v30 = (UnityEngine_Object_o *)v28;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    Instance = SrcSpotBasePrefab__GetGobjName(id, 0);
    if ( !v30 )
LABEL_78:
      sub_1C372B4(Instance);
    UnityEngine_Object__set_name(v30, (System_String_o *)Instance, 0);
    v31 = 136;
    if ( isMapModel )
      v31 = 144;
    GameObjectExtensions__SetParent_36138108(
      (UnityEngine_GameObject_o *)v30,
      *(UnityEngine_GameObject_o **)((char *)&this->klass + v31),
      0);
    if ( !byte_4C3C926 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    mMapEnt = this->fields.mMapEnt;
    v33 = UnityEngine_Vector3_TypeInfo->static_fields;
    v34 = v33->oneVector.fields.x;
    v35 = v33->oneVector.fields.y;
    v36 = v33->oneVector.fields.z;
    if ( mMapEnt )
    {
      SpotScale = MapEntity__GetSpotScale(mMapEnt, 0);
      v34 = v34 * SpotScale;
      v35 = v35 * SpotScale;
      v36 = v36 * SpotScale;
    }
    if ( !v10[5] )
    {
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      v38 = UnityEngine_Vector3_TypeInfo->static_fields;
      v34 = v38->zeroVector.fields.x;
      v35 = v38->zeroVector.fields.y;
      v36 = v38->zeroVector.fields.z;
    }
    v69.fields.x = v34;
    v69.fields.y = v35;
    v69.fields.z = v36;
    GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)v30, v69, 0);
    if ( isMapModel )
    {
      v39 = ScrTerminalMap_TypeInfo;
      if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        v39 = ScrTerminalMap_TypeInfo;
      }
      v40 = UnityEngine_LayerMask__NameToLayer(v39->static_fields->MAP_DISP_LAYER_SPOT, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v30, v40, 0);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v15 )
      {
        *(_QWORD *)(v15 + 24) = v30;
        sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 24), (int32_t)v30, v41, v42);
      }
      if ( !v14 )
        goto LABEL_78;
      PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v14, v14->fields.PathRate, 0);
      GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v30, PointAsWorldFlatten, 0);
    }
    else if ( isMapModel )
    {
      LocalPositionOnMapModel = SpotEntity__GetLocalPositionOnMapModel(v11, 0);
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v30, LocalPositionOnMapModel, 0);
      mapModelManager = this->fields.mapModelManager;
      if ( !mapModelManager )
        goto LABEL_78;
      MapModelCamera_k__BackingField = (UnityEngine_Object_o *)mapModelManager->fields._MapModelCamera_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (void *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v45 = this->fields.mapModelManager;
        if ( !v45 )
          goto LABEL_78;
        v46 = v45->fields._MapModelCamera_k__BackingField;
        if ( !v46 )
          goto LABEL_78;
        cameraInstance = (UnityEngine_Object_o *)v46->fields.cameraInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (void *)UnityEngine_Object__op_Inequality(cameraInstance, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !cameraInstance )
            goto LABEL_78;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cameraInstance, 0);
          LocalEulerAngles = GameObjectExtensions__GetLocalEulerAngles(gameObject, 0);
          GameObjectExtensions__SetLocalEulerAngle((UnityEngine_GameObject_o *)v30, LocalEulerAngles, 0);
        }
      }
    }
    else
    {
      v73.fields.x = (float)((float)v11->fields.x - this->fields.mapImageOffsetX) + 0.0;
      v73.fields.y = (float)((float)((float)this->fields._currentMapImageH_k__BackingField - (float)v11->fields.y)
                           - this->fields.mapImageOffsetY)
                   + 0.0;
      v73.fields.z = 0.0;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v30, v73, 0);
    }
    v49 = (UnityEngine_Object_o *)pathLength;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v49, 0, 0) )
      GameObjectExtensions__SafeSetParent_36138184(pathLength, (UnityEngine_GameObject_o *)v30, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v30,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(0, (UnityEngine_Object_o *)Component_object, 0) )
    {
      ofsY[1] = v11->fields.nameOfsX;
      ofsY[0] = v11->fields.nameOfsY;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SpotAddMaster___);
      if ( Instance )
      {
        SpotAddMaster__OverwriteNamePanelOffset((SpotAddMaster_o *)Instance, spotId, &ofsY[1], ofsY, 0);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( Component_object )
        {
          Component_object[5].klass = (Il2CppClass *)Instance;
          sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[5], (int32_t)Instance, v50, v51);
          SrcSpotBasePrefab__mfSetSpotID((SrcSpotBasePrefab_o *)Component_object, spotId, 0);
          SrcSpotBasePrefab__mfSetQuestCount((SrcSpotBasePrefab_o *)Component_object, v8, 0);
          SrcSpotBasePrefab__SetFreeQuestCount((SrcSpotBasePrefab_o *)Component_object, v9, 0);
          SrcSpotBasePrefab__mfSetAtlas((SrcSpotBasePrefab_o *)Component_object, this->fields.assetsAtlases, 0);
          Name = SpotEntity__GetName(v11, 0);
          SrcSpotBasePrefab__mfSetSpotName((SrcSpotBasePrefab_o *)Component_object, Name, ofsY[1], -ofsY[0], 0);
          SrcSpotBasePrefab__mfSetPositions(
            (SrcSpotBasePrefab_o *)Component_object,
            v11->fields.questOfsX,
            -v11->fields.questOfsY,
            v11->fields.nextOfsX,
            -v11->fields.nextOfsY,
            0);
          Component_object[14].monitor = v10;
          sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[14].monitor, (int32_t)v10, v53, v54);
          Instance = this->fields.mMapEnt;
          if ( Instance )
          {
            v57 = MapEntity__GetSpotScale((MapEntity_o *)Instance, 0);
            SrcSpotBasePrefab__SetSelfScale((SrcSpotBasePrefab_o *)Component_object, v57, 0);
          }
          if ( isMapModel )
          {
            BYTE4(Component_object[15].klass) = 1;
            v58 = this->fields.mapModelManager;
            if ( !v58 )
              goto LABEL_78;
            v59 = v58->fields._MapModelCamera_k__BackingField;
            Component_object[15].monitor = v59;
            sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[15].monitor, (int32_t)v59, v55, v56);
            subRootEffectP = this->fields.subRootEffectP;
            Component_object[16].klass = (Il2CppClass *)subRootEffectP;
            sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[16], (int32_t)subRootEffectP, v61, v62);
            LODWORD(Component_object[15].klass) = this->fields.currentMapLayerId;
          }
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)Component_object, 0, 0);
          v63 = 1.0;
          if ( v10[5] == 2 )
            v63 = 0.5;
          SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)Component_object, v63, 0);
          SrcSpotBasePrefab__SetTouchType_37213692((SrcSpotBasePrefab_o *)Component_object, 0);
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

  if ( (byte_4C40177 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40177 = 1;
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
      sub_1C372B4(Fsm);
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

  if ( (byte_4C40175 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40175 = 1;
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
      sub_1C372B4(Fsm);
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

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C40178 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40178 = 1;
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
      sub_1C372B4(Fsm);
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._eventMapManagerInterface_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__showEventScriptDlgs(ScrTerminalMap_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *eventScriptMessages; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_string__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  Il2CppObject *Instance; // x0
  TerminalPramsManager_c *v15; // x8
  CommonUI_o *v16; // x20
  System_String_o *v17; // x21
  Il2CppObject *Item; // x22
  System_Action_o *v19; // x23

  if ( (byte_4C40133 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass353_0__showEventScriptDlgs_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass353_0_TypeInfo);
    byte_4C40133 = 1;
  }
  v5 = sub_1C372A4(ScrTerminalMap___c__DisplayClass353_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass353_0___ctor((ScrTerminalMap___c__DisplayClass353_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  eventScriptMessages = (System_Collections_Generic_List_object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    eventScriptMessages = (System_Collections_Generic_List_object__o *)TerminalPramsManager_TypeInfo;
  }
  v11 = *(struct System_Collections_Generic_List_string__o **)(*(_QWORD *)&eventScriptMessages[4].fields._size + 304LL);
  if ( !v11 )
    goto LABEL_19;
  if ( v11->fields._size >= 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = TerminalPramsManager_TypeInfo;
    v16 = (CommonUI_o *)Instance;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    eventScriptMessages = (System_Collections_Generic_List_object__o *)v15->static_fields->eventScriptMessages;
    if ( eventScriptMessages )
    {
      eventScriptMessages = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           eventScriptMessages,
                                                                           0,
                                                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages )
      {
        v17 = (System_String_o *)eventScriptMessages;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages,
                 1,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
        v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v19,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass353_0__showEventScriptDlgs_b__0__,
          0);
        if ( v16 )
        {
          CommonUI__OpenNotificationDialog(
            v16,
            v17,
            (System_String_o *)Item,
            v19,
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
    sub_1C372B4(eventScriptMessages);
  }
  if ( !eventScriptMessages[5].fields._size )
  {
    j_il2cpp_runtime_class_init_0(eventScriptMessages);
    v11 = TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
    if ( !v11 )
      goto LABEL_19;
  }
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0);
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
}


void ScrTerminalMap__smfMap2d_LoadStart(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarEntity_o *mWarEnt; // x0
  struct MapControl_WarInfo_o *mWarInfo; // x8
  int32_t warId; // w9
  struct MapControl_MapInfo_o *mMapInfo; // x8
  MapEntity_o *mMapEnt; // x8
  struct MapEntity_o *v9; // x8
  int32x2_t v10; // d0
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4C400E4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_LoadMap__);
    byte_4C400E4 = 1;
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
        v9 = this->fields.mMapEnt,
        this->fields.currentMapImageId = (int)mWarEnt,
        !v9) )
  {
LABEL_9:
    sub_1C372B4(mWarEnt);
  }
  v10.n64_u64[0] = *(unsigned __int64 *)&v9->fields.mapImageW;
  *(int32x2_t *)&this->fields._currentMapImageW_k__BackingField = v10;
  *(float32x2_t *)&this->fields.mapImageOffsetX = vmul_f32(vcvt_f32_s32(v10), (float32x2_t)0x3F0000003F000000LL);
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrTerminalMap_LoadMap__, 0);
  ScrTerminalMap__InitCheckUpdateRequest(this, v11, v12);
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
  const MethodInfo *v8; // x1
  System_String_o *SaveKey_PlayerMap; // x0
  bool IsMultiMap; // w0
  const MethodInfo *v11; // x2
  System_String_o *SaveKey_PlayerIcon; // x0
  TerminalPramsManager_c *v13; // x0
  const MethodInfo *v14; // x1
  EventSpotMoveManager_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  EventMapGimmickMoveManager_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  ScrTerminalMap_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x21
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  __int64 v25; // x9
  int32_t v26; // w22
  struct System_Collections_Generic_List_SrcSpotBasePrefab__o *spotList; // x8
  int32_t size; // w2
  int v29; // w9
  char v30; // w23
  UnityEngine_Object_o *v31; // x21
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x3
  MapControl_SpotInfo_o *current; // x27
  UnityEngine_Object_o *SpotBySpotInfo; // x26
  _BOOL8 IsNextDisp; // x0
  UnityEngine_Object_o *v37; // x8
  UnityEngine_Object_o *v38; // x8
  MapControl_SpotInfo_o *m_CachedPtr; // x0
  SpotEntity_o *Mine; // x0
  const MethodInfo *v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_List_object__o *v46; // x0
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x8
  UnityEngine_Object_o *eventQuestCooltimeComponent; // x28
  const MethodInfo *v52; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  UserEventQuestCooltimeEntity_o *EntityFromSpotId; // x28
  Il2CppObject *v56; // x0
  EventQuestCooltimeComponent_o *v57; // x0
  UnityEngine_Object_o *submarineEventMap; // x28
  const MethodInfo *v59; // x1
  SubmarineMapManager_o *v60; // x0
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x28
  Il2CppObject *Master_object; // x28
  MapControl_WarInfo_o *v63; // x0
  __int64 EventId; // x0
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x1
  EventSpotCooltimeComponent_o *v66; // x0
  const MethodInfo *v67; // x2
  int32_t requestPlayerSpotId; // w1
  UnityEngine_Object_o *SpotGameObject; // x23
  int32_t requestFocusSpotId; // w1
  UnityEngine_Object_o *v71; // x24
  Il2CppObject *v72; // x28
  MapModelManager_o *mapModelManager; // x0
  const MethodInfo *v74; // x2
  UnityEngine_GameObject_o *MapGimmickRootObject; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x1
  struct System_Collections_Generic_List_MapGimmickComponent__o *gimmickList; // x8
  int32_t v80; // w2
  int v81; // w9
  _BOOL8 v82; // x0
  const MethodInfo *v83; // x2
  Il2CppObject *v84; // x25
  const MethodInfo *v85; // x3
  System_Collections_Generic_List_object__o *v86; // x24
  Il2CppObject *MapGimmick; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  Il2CppObject *v90; // x1
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  const MethodInfo *v95; // x3
  System_Collections_Generic_List_object__o *v96; // x24
  Il2CppObject *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  Il2CppObject *v100; // x1
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  struct EventSpotMoveManager_o *eventSpotMoveManager; // x8
  struct EventSpotMoveManager_o *v106; // x8
  Il2CppObject *v107; // x23
  ScrTerminalMap___c__DisplayClass288_0_o *v108; // x24
  __int64 v109; // x0
  EventSpotMoveManager_o *v110; // x0
  SpotPathEntity_o *SpotPathEntity; // x0
  SpotPathEntity_o *v112; // x25
  __int64 MapGimmickEffectId; // x0
  System_Collections_Generic_List_object__o *v114; // x26
  System_Predicate_object__o *v115; // x27
  __int64 v116; // x0
  Il2CppObject *v117; // x26
  __int64 v118; // x0
  float v119; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  int32_t MapGimmickId; // w0
  System_Collections_Generic_List_object__o *v125; // x25
  System_Predicate_object__o *v126; // x26
  __int64 v127; // x0
  Il2CppObject *v128; // x24
  __int64 v129; // x0
  float v130; // s8
  float v131; // s9
  float v132; // s10
  UnityEngine_GameObject_o *v133; // x0
  UnityEngine_Object_o *v134; // x24
  UnityEngine_Object_o *v135; // x22
  struct WarEntity_o *mWarEnt; // x8
  UnityEngine_Object_o *v137; // x23
  char v138; // w25
  UnityEngine_Object_o *v139; // x24
  UnityEngine_GameObject_o *v140; // x0
  const MethodInfo *v141; // x2
  bool v142; // w0
  const MethodInfo *v143; // x2
  System_String_o *v144; // x0
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  UnityEngine_Object_o **p_mFocusSpot; // x22
  MapZoom_c *v148; // x0
  float ZOOM_DEFAULT; // s8
  TerminalPramsManager_c *v150; // x0
  CGThumbnailListItem_o *v151; // x0
  int32_t v152; // w1
  UnityEngine_Object_o *v153; // x23
  const MethodInfo *v154; // x2
  TerminalPramsManager_c *v155; // x0
  TerminalPramsManager_c *v156; // x0
  UnityEngine_Object_o *v157; // x23
  Il2CppObject *v158; // x0
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct MapControl_MapInfo_o *v161; // x8
  const MethodInfo *v162; // x1
  const MethodInfo *v163; // x2
  char v164; // w25
  float v165; // s0 OVERLAPPED
  float v166; // s1
  float v167; // s2
  MapModelManager_c *v168; // x0
  UnityEngine_Object_o *v169; // x23
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  UnityEngine_Object_o *v172; // x23
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  const MethodInfo *v175; // x2
  UnityEngine_Object_o *SpotPrefab; // x21
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  Il2CppObject *v179; // x0
  UnityEngine_Object_o *v180; // x21
  const MethodInfo *v181; // x4
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  System_Action_o *v183; // x21
  EventMapManagerInterface_c *klass; // x8
  __int64 v185; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v187; // x0
  struct EventRaceBoostInfo_o *eventRaceBoost_k__BackingField; // [xsp+10h] [xbp-170h]
  CGThumbnailListItem_o *p_eventBoardGameSpotPrefab; // [xsp+18h] [xbp-168h]
  int32_t EventBoardGameSpotId; // [xsp+24h] [xbp-15Ch]
  UnityEngine_Object_o *x; // [xsp+28h] [xbp-158h]
  int32_t PlayerSpotId; // [xsp+30h] [xbp-150h]
  System_Collections_Generic_List_Enumerator_object__o v193; // [xsp+38h] [xbp-148h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v194; // [xsp+50h] [xbp-130h] BYREF
  UnityEngine_Vector3_o pos; // [xsp+70h] [xbp-110h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v196; // [xsp+80h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v197; // [xsp+A0h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+C0h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v199; // [xsp+E0h] [xbp-A0h] BYREF
  UnityEngine_Object_o *Component_object; // [xsp+108h] [xbp-78h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v202; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v204; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C400FE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_EventSpotMoveManager_SpotMoveData___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C37058(&EventMapGimmickMoveManager_TypeInfo);
    sub_1C37058(&EventMapManagerInterface_TypeInfo);
    sub_1C37058(&EventSpotMoveManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C37058(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapGimmickComponent__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
    sub_1C37058(&MapModelManager_TypeInfo);
    sub_1C37058(&MapZoom_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_MapGimmickComponent__TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap__smfMap2d_SpotMarkCreate_b__288_0__);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass288_0__smfMap2d_SpotMarkCreate_b__1__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass288_0__smfMap2d_SpotMarkCreate_b__2__);
    this = (ScrTerminalMap_o *)sub_1C37058(&ScrTerminalMap___c__DisplayClass288_0_TypeInfo);
    byte_4C400FE = 1;
  }
  memset(&v199, 0, sizeof(v199));
  memset(&i, 0, sizeof(i));
  memset(&v197, 0, sizeof(v197));
  memset(&v196, 0, sizeof(v196));
  pos.fields.z = 0.0;
  *(_QWORD *)&pos.fields.x = 0;
  memset(&v194, 0, sizeof(v194));
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
    SaveKey_PlayerMap = ScrTerminalMap__GetSaveKey_PlayerMap(v2, v8);
    if ( !UnityEngine_PlayerPrefs__HasKey(SaveKey_PlayerMap, 0) || v2->fields.isFirstMap )
    {
      this = (ScrTerminalMap_o *)v2->fields.mWarInfo;
      v2->fields.isFirstFade = 1;
      if ( !this )
        goto LABEL_311;
      IsMultiMap = MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)this, 0);
      SaveKey_PlayerIcon = ScrTerminalMap__GetSaveKey_PlayerIcon(v2, IsMultiMap, v11);
      UnityEngine_PlayerPrefs__SetInt(SaveKey_PlayerIcon, 0, 0);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A7 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  eventRaceBoost_k__BackingField = v13->static_fields->_eventRaceBoost_k__BackingField;
  if ( ScrTerminalMap__IsDispEventBoardGameUI(v2, v8) )
    EventBoardGameSpotId = ScrTerminalMap__GetEventBoardGameSpotId(v2, v14);
  else
    EventBoardGameSpotId = 0;
  if ( v2->fields.isRaidMap )
  {
    this = (ScrTerminalMap_o *)v2->fields.eventSpotMoveManager;
    if ( !this )
    {
      v15 = (EventSpotMoveManager_o *)sub_1C372A4(EventSpotMoveManager_TypeInfo);
      EventSpotMoveManager___ctor(v15, 0);
      v2->fields.eventSpotMoveManager = v15;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.eventSpotMoveManager, (int32_t)v15, v16, v17);
      this = (ScrTerminalMap_o *)v2->fields.eventSpotMoveManager;
      if ( !this )
        goto LABEL_311;
    }
    EventSpotMoveManager__Init((EventSpotMoveManager_o *)this, 0);
    this = (ScrTerminalMap_o *)v2->fields.eventMapGimmickMoveManager;
    if ( !this )
    {
      v18 = (EventMapGimmickMoveManager_o *)sub_1C372A4(EventMapGimmickMoveManager_TypeInfo);
      EventMapGimmickMoveManager___ctor(v18, 0);
      v2->fields.eventMapGimmickMoveManager = v18;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.eventMapGimmickMoveManager, (int32_t)v18, v19, v20);
      this = (ScrTerminalMap_o *)v2->fields.eventMapGimmickMoveManager;
      if ( !this )
        goto LABEL_311;
    }
    EventMapGimmickMoveManager__Init((EventMapGimmickMoveManager_o *)this, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  v22 = ScrTerminalMap_TypeInfo;
  v23 = gameObject;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v22 = ScrTerminalMap_TypeInfo;
  }
  static_fields = v22->static_fields;
  v25 = 112;
  if ( IsMapModel )
    v25 = 120;
  v26 = UnityEngine_LayerMask__NameToLayer(
          *(System_String_o **)((char *)&static_fields->RAID_TIME_OVER_NOTICE_KEY + v25),
          0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v23, v26, 0);
  spotList = v2->fields.spotList;
  if ( !spotList )
    goto LABEL_311;
  size = spotList->fields._size;
  v29 = spotList->fields._version + 1;
  spotList->fields._size = 0;
  spotList->fields._version = v29;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)spotList->fields._items, 0, size, 0);
  this = (ScrTerminalMap_o *)v2->fields.mMapInfo;
  if ( !this )
    goto LABEL_311;
  this = (ScrTerminalMap_o *)MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)this, 0);
  if ( !this )
    goto LABEL_311;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v193,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v30 = 0;
  v31 = 0;
  v199 = v193;
  x = 0;
  Component_object = 0;
  p_eventBoardGameSpotPrefab = (CGThumbnailListItem_o *)&v2->fields.eventBoardGameSpotPrefab;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v199,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v32 )
      break;
    current = (MapControl_SpotInfo_o *)v199.fields._current;
    if ( !v199.fields._current )
      sub_1C372B4(v32);
    SpotBySpotInfo = (UnityEngine_Object_o *)ScrTerminalMap__mfMap2d_Create_SpotBySpotInfo(
                                               v2,
                                               (int32_t)v199.fields._current[1].klass,
                                               IsMapModel,
                                               v33);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNextDisp = UnityEngine_Object__op_Inequality(SpotBySpotInfo, 0, 0);
    if ( IsNextDisp && current->fields.dispType == 1 )
    {
      v37 = Component_object;
      if ( current->fields.spotId == PlayerSpotId )
        v37 = SpotBySpotInfo;
      Component_object = v37;
      if ( (v30 & 1) != 0 )
      {
        v30 = 1;
      }
      else
      {
        IsNextDisp = MapControl_SpotInfo__IsNextDisp(current, 0);
        if ( IsNextDisp )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsNextDisp = UnityEngine_Object__op_Equality(x, 0, 0);
          v30 = !IsNextDisp;
          if ( IsNextDisp )
            v38 = SpotBySpotInfo;
          else
            v38 = 0;
          x = v38;
        }
        else
        {
          v30 = 0;
        }
      }
      if ( !SpotBySpotInfo )
        sub_1C372B4(IsNextDisp);
      m_CachedPtr = (MapControl_SpotInfo_o *)SpotBySpotInfo[9].fields.m_CachedPtr;
      if ( !m_CachedPtr )
        sub_1C372B4(0);
      Mine = MapControl_SpotInfo__GetMine(m_CachedPtr, 0);
      if ( !Mine )
        sub_1C372B4(0);
      if ( SpotEntity__GetPrioredImgId(Mine, 0) )
        v31 = SpotBySpotInfo;
      if ( ScrTerminalMap__IsDispEventBoardGameUI(v2, v41) && current->fields.spotId == EventBoardGameSpotId )
      {
        p_eventBoardGameSpotPrefab->klass = (CGThumbnailListItem_c *)SpotBySpotInfo;
        sub_1C36FFC(p_eventBoardGameSpotPrefab, (int32_t)SpotBySpotInfo, v42, v43);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(SpotBySpotInfo, 0, 0) )
    {
      v46 = (System_Collections_Generic_List_object__o *)v2->fields.spotList;
      if ( !v46 )
        sub_1C372B4(0);
      items = v46->fields._items;
      v48 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
      ++v46->fields._version;
      if ( !items )
        sub_1C372B4(v46);
      v49 = v46->fields._size;
      if ( (unsigned int)v49 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v46,
          (Il2CppObject *)SpotBySpotInfo,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + v49;
        v46->fields._size = v49 + 1;
        v50[4] = (Il2CppClass *)SpotBySpotInfo;
        sub_1C36FFC((CGThumbnailListItem_o *)(v50 + 4), (int32_t)SpotBySpotInfo, v44, v45);
      }
      eventQuestCooltimeComponent = (UnityEngine_Object_o *)v2->fields.eventQuestCooltimeComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(eventQuestCooltimeComponent, 0, 0) )
        goto LABEL_82;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C372B4(0);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
      if ( !MasterData_object )
        sub_1C372B4(0);
      EntityFromSpotId = UserEventQuestCooltimeMaster__GetEntityFromSpotId(
                           (UserEventQuestCooltimeMaster_o *)MasterData_object,
                           current->fields.spotId,
                           0);
      if ( EntityFromSpotId )
      {
        v56 = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !v56 )
          sub_1C372B4(0);
        if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v56, EntityFromSpotId->fields.questId, 0, 0) )
        {
          v57 = v2->fields.eventQuestCooltimeComponent;
          if ( !v57 )
            sub_1C372B4(0);
          EventQuestCooltimeComponent__SetSpot(v57, EntityFromSpotId, (SrcSpotBasePrefab_o *)SpotBySpotInfo, 0);
          goto LABEL_82;
        }
      }
      else
      {
LABEL_82:
        submarineEventMap = (UnityEngine_Object_o *)ScrTerminalMap__get_submarineEventMap(v2, v52);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(submarineEventMap, 0, 0) )
        {
          v60 = ScrTerminalMap__get_submarineEventMap(v2, v59);
          if ( !v60 )
            sub_1C372B4(0);
          SubmarineMapManager__AdjustSpotPosition(v60, (SrcSpotBasePrefab_o *)SpotBySpotInfo, 0);
        }
        eventSpotCooltimeComponent = (UnityEngine_Object_o *)v2->fields.eventSpotCooltimeComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
          v63 = v2->fields.mWarInfo;
          if ( !v63 )
            sub_1C372B4(0);
          EventId = MapControl_WarInfo__GetEventId(v63, 0);
          if ( !Master_object )
            sub_1C372B4(EventId);
          CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                 (UserEventCooltimeRewardMaster_o *)Master_object,
                                 EventId,
                                 current->fields.spotId,
                                 0);
          if ( CurrentLevelEntity )
          {
            v66 = v2->fields.eventSpotCooltimeComponent;
            if ( !v66 )
              sub_1C372B4(0);
            EventSpotCooltimeComponent__SetSpot(v66, CurrentLevelEntity, (SrcSpotBasePrefab_o *)SpotBySpotInfo, 0);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v199,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  requestPlayerSpotId = v2->fields.requestPlayerSpotId;
  if ( (requestPlayerSpotId & 0x80000000) == 0 )
  {
    SpotGameObject = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(v2, requestPlayerSpotId, v67);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(SpotGameObject, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( SpotGameObject )
      {
        Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)SpotGameObject,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
        goto LABEL_103;
      }
      goto LABEL_311;
    }
LABEL_103:
    v2->fields.requestPlayerSpotId = -1;
  }
  requestFocusSpotId = v2->fields.requestFocusSpotId;
  if ( requestFocusSpotId < 0 )
  {
    v72 = 0;
    if ( !IsMapModel )
      goto LABEL_134;
  }
  else
  {
    v71 = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(v2, requestFocusSpotId, v67);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v71, 0, 0);
    v72 = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v71 )
        goto LABEL_311;
      v72 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v71,
              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v193,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
      for ( i = v193;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
            ScrTerminalMap__mfMap2d_Create_LineBySpotID(v2, (MapControl_SpotRoadInfo_o *)i.fields._current, v74) )
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v193,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
  for ( i = v193;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
        MapModelManager__CreateModelLineBySpotId(
          mapModelManager,
          (MapControl_SpotRoadInfo_o *)i.fields._current,
          v2->fields.pfbModelLineP,
          0) )
  {
    mapModelManager = v2->fields.mapModelManager;
    if ( !mapModelManager )
      sub_1C372B4(0);
  }
LABEL_139:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
  this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
  if ( !this )
    goto LABEL_311;
  MapGimmickRootObject = MapModelManager__GetMapGimmickRootObject((MapModelManager_o *)this, 0);
  v2->fields.subRootGimmickP = MapGimmickRootObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.subRootGimmickP, (int32_t)MapGimmickRootObject, v76, v77);
  gimmickList = v2->fields.gimmickList;
  if ( !gimmickList )
    goto LABEL_311;
  v80 = gimmickList->fields._size;
  v81 = gimmickList->fields._version + 1;
  gimmickList->fields._size = 0;
  gimmickList->fields._version = v81;
  if ( v80 >= 1 )
    System_Array__Clear((System_Array_o *)gimmickList->fields._items, 0, v80, 0);
  if ( ScrTerminalMap__IsCreateBoardGameGimmick(v2, v78) )
  {
    this = (ScrTerminalMap_o *)v2->fields.mMapInfo;
    if ( !this )
      goto LABEL_311;
    this = (ScrTerminalMap_o *)MapControl_MapInfo__GetMapGimmickList((MapControl_MapInfo_o *)this, 0);
    if ( !this )
      goto LABEL_311;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v193,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    v197 = v193;
    while ( 1 )
    {
      v82 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v197,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
      if ( !v82 )
        break;
      v84 = v197.fields._current;
      if ( !ScrTerminalMap__IsSkipCreateBoardGameGimmick(
              (ScrTerminalMap_o *)v82,
              (MapControl_MapGimmickInfo_o *)v197.fields._current,
              v83) )
      {
        v86 = (System_Collections_Generic_List_object__o *)v2->fields.gimmickList;
        MapGimmick = (Il2CppObject *)ScrTerminalMap__CreateMapGimmick(
                                       v2,
                                       (MapControl_MapGimmickInfo_o *)v84,
                                       IsMapModel,
                                       v85);
        v90 = MapGimmick;
        if ( !v86 )
          sub_1C372B4(MapGimmick);
        v91 = v86->fields._items;
        v92 = Method_System_Collections_Generic_List_MapGimmickComponent__Add__;
        ++v86->fields._version;
        if ( !v91 )
          sub_1C372B4(MapGimmick);
        v93 = v86->fields._size;
        if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v86,
            MapGimmick,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
        }
        else
        {
          v94 = &v91->obj.klass + v93;
          v86->fields._size = v93 + 1;
          v94[4] = (Il2CppClass *)v90;
          sub_1C36FFC((CGThumbnailListItem_o *)(v94 + 4), (int32_t)v90, v88, v89);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v193,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    v197 = v193;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v197,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__) )
    {
      v96 = (System_Collections_Generic_List_object__o *)v2->fields.gimmickList;
      v97 = (Il2CppObject *)ScrTerminalMap__CreateMapGimmick(
                              v2,
                              (MapControl_MapGimmickInfo_o *)v197.fields._current,
                              IsMapModel,
                              v95);
      v100 = v97;
      if ( !v96 )
        sub_1C372B4(v97);
      v101 = v96->fields._items;
      v102 = Method_System_Collections_Generic_List_MapGimmickComponent__Add__;
      ++v96->fields._version;
      if ( !v101 )
        sub_1C372B4(v97);
      v103 = v96->fields._size;
      if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v96,
          v97,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v104 = &v101->obj.klass + v103;
        v96->fields._size = v103 + 1;
        v104[4] = (Il2CppClass *)v100;
        sub_1C36FFC((CGThumbnailListItem_o *)(v104 + 4), (int32_t)v100, v98, v99);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v197,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  if ( v2->fields.isRaidMap )
  {
    eventSpotMoveManager = v2->fields.eventSpotMoveManager;
    if ( eventSpotMoveManager )
    {
      this = (ScrTerminalMap_o *)System_Linq_Enumerable__Any_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)eventSpotMoveManager->fields.eventSpotMoveDataList,
                                   (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_EventSpotMoveManager_SpotMoveData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v106 = v2->fields.eventSpotMoveManager;
        if ( !v106 )
          goto LABEL_311;
        this = (ScrTerminalMap_o *)v106->fields.eventSpotMoveDataList;
        if ( !this )
          goto LABEL_311;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v193,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
        v196 = v193;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v196,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
        {
          v107 = v196.fields._current;
          v108 = (ScrTerminalMap___c__DisplayClass288_0_o *)sub_1C372A4(ScrTerminalMap___c__DisplayClass288_0_TypeInfo);
          ScrTerminalMap___c__DisplayClass288_0___ctor(v108, 0);
          if ( !v107 )
            sub_1C372B4(v109);
          v110 = v2->fields.eventSpotMoveManager;
          if ( !v110 )
            sub_1C372B4(0);
          SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(v110, (int32_t)v107[1].klass, 0);
          v112 = SpotPathEntity;
          if ( SpotPathEntity )
          {
            MapGimmickEffectId = SpotPathEntity__GetMapGimmickEffectId(SpotPathEntity, 0);
            if ( !v108 )
              sub_1C372B4(MapGimmickEffectId);
            v108->fields.gimmickEffectId = MapGimmickEffectId;
            if ( (int)MapGimmickEffectId >= 1 )
            {
              v114 = (System_Collections_Generic_List_object__o *)v2->fields.gimmickList;
              v115 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_MapGimmickComponent__TypeInfo);
              System_Predicate_object____ctor(
                v115,
                (Il2CppObject *)v108,
                Method_ScrTerminalMap___c__DisplayClass288_0__smfMap2d_SpotMarkCreate_b__2__,
                0);
              if ( !v114 )
                sub_1C372B4(v116);
              v117 = System_Collections_Generic_List_object___Find(
                       v114,
                       (System_Predicate_T__o *)v115,
                       (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_MapGimmickComponent__Find__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v117, 0, 0) )
              {
                LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v107[1].monitor, 0);
                if ( !v117 )
                  sub_1C372B4(v118);
                v119 = LocalPosition.fields.x;
                y = LocalPosition.fields.y;
                z = LocalPosition.fields.z;
                v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v117, 0);
                v202.fields.x = v119;
                v202.fields.y = y;
                v202.fields.z = z;
                GameObjectExtensions__SetLocalPosition(v122, v202, 0);
                v123 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v117, 0);
                GameObjectExtensions__SafeSetParent_36138184(v123, (UnityEngine_GameObject_o *)v107[1].monitor, 0);
              }
            }
            MapGimmickId = SpotPathEntity__GetMapGimmickId(v112, 0);
            v108->fields.gimmickId = MapGimmickId;
            if ( MapGimmickId >= 1 )
            {
              v125 = (System_Collections_Generic_List_object__o *)v2->fields.gimmickList;
              v126 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_MapGimmickComponent__TypeInfo);
              System_Predicate_object____ctor(
                v126,
                (Il2CppObject *)v108,
                Method_ScrTerminalMap___c__DisplayClass288_0__smfMap2d_SpotMarkCreate_b__1__,
                0);
              if ( !v125 )
                sub_1C372B4(v127);
              v128 = System_Collections_Generic_List_object___Find(
                       v125,
                       (System_Predicate_T__o *)v126,
                       (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_MapGimmickComponent__Find__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v128, 0, 0) )
              {
                Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)v107[1].monitor, 0);
                if ( !v128 )
                  sub_1C372B4(v129);
                v130 = Position.fields.x;
                v131 = Position.fields.y;
                v132 = Position.fields.z;
                v133 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v128, 0);
                v204.fields.x = v130;
                v204.fields.y = v131;
                v204.fields.z = v132;
                GameObjectExtensions__SetPosition(v133, v204, 0);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v196,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
      }
    }
  }
  v134 = (UnityEngine_Object_o *)v2->fields.eventQuestCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v134, 0, 0);
  v135 = x;
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
  v137 = Component_object;
  if ( !UnityEngine_Object__op_Equality(Component_object, 0, 0) )
    v135 = v137;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v138 = UnityEngine_Object__op_Equality(v135, 0, 0);
  if ( (v138 & 1) != 0 )
    v139 = v31;
  else
    v139 = v135;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v139, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v139 )
      goto LABEL_311;
    v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v139, 0);
    ScrTerminalMap__SetPlayerIcon(v2, v140, v141);
    if ( (v138 & 1) == 0 )
    {
      this = (ScrTerminalMap_o *)v2->fields.mWarInfo;
      if ( !this )
        goto LABEL_311;
      v142 = MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)this, 0);
      v144 = ScrTerminalMap__GetSaveKey_PlayerIcon(v2, v142, v143);
      UnityEngine_PlayerPrefs__SetInt(v144, (int32_t)v139[6].klass, 0);
    }
    if ( eventRaceBoost_k__BackingField )
    {
      this = (ScrTerminalMap_o *)v2->fields.playerIcon;
      if ( !this )
        goto LABEL_311;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
  }
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
    goto LABEL_311;
  p_mFocusSpot = (UnityEngine_Object_o **)&v2->fields.mFocusSpot;
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)this, 0) )
  {
    *p_mFocusSpot = v139;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)v139, v145, v146);
    v148 = MapZoom_TypeInfo;
    if ( !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v148 = MapZoom_TypeInfo;
    }
    ZOOM_DEFAULT = v148->static_fields->ZOOM_DEFAULT;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FA9D )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FA9D = 1;
    }
    v150 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v150 = TerminalPramsManager_TypeInfo;
    }
    v150->static_fields->mZoomSize = ZOOM_DEFAULT;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v72, 0, 0) )
    {
      *p_mFocusSpot = (UnityEngine_Object_o *)v72;
      v151 = (CGThumbnailListItem_o *)&v2->fields.mFocusSpot;
      v152 = (int)v72;
      goto LABEL_233;
    }
  }
  else if ( eventRaceBoost_k__BackingField )
  {
    *p_mFocusSpot = v139;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)v139, v145, v146);
  }
  else
  {
    v152 = (int)x;
    v151 = (CGThumbnailListItem_o *)&v2->fields.mFocusSpot;
    *p_mFocusSpot = x;
LABEL_233:
    sub_1C36FFC(v151, v152, v145, v146);
    v153 = *p_mFocusSpot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v138 &= !UnityEngine_Object__op_Inequality(v153, 0, 0);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsAuto(0) )
    goto LABEL_257;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
  }
  v155 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v155 = TerminalPramsManager_TypeInfo;
  }
  if ( v155->static_fields->_SpotId_k__BackingField < 0 )
    goto LABEL_257;
  if ( !v155->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v155);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
  }
  v156 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v156 = TerminalPramsManager_TypeInfo;
  }
  v157 = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(
                                   v2,
                                   v156->static_fields->_SpotId_k__BackingField,
                                   v154);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v157, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v157 )
      goto LABEL_311;
    v158 = UnityEngine_GameObject__GetComponent_object_(
             (UnityEngine_GameObject_o *)v157,
             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    *p_mFocusSpot = (UnityEngine_Object_o *)v158;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)v158, v159, v160);
LABEL_266:
    v164 = 0;
  }
  else
  {
LABEL_257:
    if ( (v138 & 1) == 0 )
      goto LABEL_266;
    pos.fields.z = 0.0;
    *(_QWORD *)&pos.fields.x = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MapCondMaster___);
    v161 = v2->fields.mMapInfo;
    if ( !v161 || !this )
      goto LABEL_311;
    v164 = 0;
    if ( MapCondMaster__TryGetOnMapCameraOffset((MapCondMaster_o *)this, v161->fields.mapId, &pos, 0, 0, 0) )
    {
      v165 = pos.fields.x;
      v166 = pos.fields.y;
      v167 = pos.fields.z;
      if ( IsMapModel )
      {
        *(UnityEngine_Vector3_o *)&v165 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                            v2,
                                            *(UnityEngine_Vector3_o *)&v165,
                                            v162);
        pos.fields.x = v165;
        pos.fields.y = v166;
        pos.fields.z = v167;
      }
      ScrTerminalMap__SetMapCamera(v2, *(UnityEngine_Vector3_o *)&v165, 0.001, 0, v163);
      v164 = 1;
    }
  }
  v168 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v168 = MapModelManager_TypeInfo;
  }
  v2->fields.currentMapLayerId = v168->static_fields->LAYER_LOWER_ID;
  if ( (v164 & 1) == 0 )
  {
    v169 = *p_mFocusSpot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v169, 0, 0) )
    {
      *p_mFocusSpot = v139;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)v139, v170, v171);
    }
    v172 = *p_mFocusSpot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v172, 0, 0) )
    {
      *p_mFocusSpot = x;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)x, v173, v174);
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
    this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !this )
      goto LABEL_311;
    if ( ((__int64)this->fields.rootEventObjP & 0x80000000) == 0 )
    {
      this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_311;
      SpotPrefab = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotPrefab(v2, (int32_t)this->fields.rootEventObjP, v175);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(SpotPrefab, 0, 0) )
      {
        v2->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)SpotPrefab;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)SpotPrefab, v177, v178);
        this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
        if ( !this )
          goto LABEL_311;
        v2->fields.currentMapLayerId = MapModelManager__GetLayerBySpotPrefab(
                                         (MapModelManager_o *)this,
                                         v2->fields.mFocusSpot,
                                         0);
      }
      this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( this )
      {
        LODWORD(this->fields.rootEventObjP) = -1;
        goto LABEL_290;
      }
LABEL_311:
      sub_1C372B4(this);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v193,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
    v194 = v193;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v194,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__) )
    {
      v179 = v194.fields._current;
      if ( !v194.fields._current )
        sub_1C372B4(0);
      LODWORD(v194.fields._current[15].klass) = v2->fields.currentMapLayerId;
      SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v179, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v194,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
    this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
    if ( !this )
      goto LABEL_311;
    MapModelManager__UpdateLineDispAll((MapModelManager_o *)this, 0);
  }
  if ( (v164 & 1) == 0 )
  {
    v180 = *p_mFocusSpot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v180, 0, 0) )
      ScrTerminalMap__SetMapCamera_FocusSpot(v2, v2->fields.mFocusSpot, 0.001, IsMapModel, 0, v181);
  }
  eventMapManagerInterface_k__BackingField = v2->fields._eventMapManagerInterface_k__BackingField;
  v183 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v183, (Il2CppObject *)v2, Method_ScrTerminalMap__smfMap2d_SpotMarkCreate_b__288_0__, 0);
  if ( !eventMapManagerInterface_k__BackingField )
    goto LABEL_311;
  klass = eventMapManagerInterface_k__BackingField->klass;
  v185 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v185;
      p_offset += 2;
      if ( !v185 )
        goto LABEL_308;
    }
    v187 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
  }
  else
  {
LABEL_308:
    v187 = sub_1C87870(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 4);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, System_Action_o *, _QWORD))v187)(
    eventMapManagerInterface_k__BackingField,
    v183,
    *(_QWORD *)(v187 + 8));
}


void ScrTerminalMap__smfSetMapChange(ScrTerminalMap_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  void *mapModelManager; // x0
  const MethodInfo *v6; // x1
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
  int requestedMapId; // w1
  MapControl_WarInfo_o *mWarInfo; // x20
  struct MapControl_MapInfo_o *Map; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w21
  int32_t v25; // w21
  struct MapControl_MapInfo_o *ActionMap; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct MapEntity_o *Mine; // x0
  struct MapEntity_o **p_mMapEnt; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int32_t BeforeClearQuestIdForAction_k__BackingField; // w22
  TitleInfoControl_o *titleInfoControl; // x21
  MapEntity_o *mMapEnt; // x23
  const MethodInfo *v38; // x1
  struct MapEntity_o *v39; // x8
  int32x2_t v40; // d0
  MapModelManager_o *v41; // x20
  int32_t currentAssetId; // w21
  int32_t currentMapId; // w22
  System_Action_o *v44; // x23
  struct MapControl_MapInfo_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3

  if ( (byte_4C400EB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C37058(&Method_ScrTerminalMap__smfSetMapChange_b__269_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C400EB = 1;
  }
  this->fields._currentMapTexture_k__BackingField = 0;
  *(_WORD *)&this->fields.isFirstFade = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._currentMapTexture_k__BackingField, 0, v2, v3);
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
  ScrTerminalMap__DestroyMapObjs(this, v6);
  mapAssetData = this->fields.mapAssetData;
  if ( mapAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(mapAssetData, 0);
    this->fields.mapAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapAssetData, 0, v14, v15);
  }
  mapMultiAssetData = this->fields.mapMultiAssetData;
  if ( mapMultiAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(mapMultiAssetData, 0);
    this->fields.mapMultiAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapMultiAssetData, 0, v17, v18);
  }
  mapModelManager = this->fields.mapModelManager;
  if ( mapModelManager )
    MapModelManager__ReleaseAsset((MapModelManager_o *)mapModelManager, 0);
  requestedMapId = this->fields.requestedMapId;
  mWarInfo = this->fields.mWarInfo;
  if ( requestedMapId > 0 )
  {
    if ( !mWarInfo )
      goto LABEL_52;
    Map = MapControl_WarInfo__GetMap(this->fields.mWarInfo, requestedMapId, 0);
    this->fields.mMapInfo = Map;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)Map, v22, v23);
LABEL_22:
    v24 = 0;
    goto LABEL_28;
  }
  mapModelManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mapModelManager )
    goto LABEL_52;
  v25 = *((_DWORD *)mapModelManager + 51);
  mapModelManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mapModelManager || !mWarInfo )
    goto LABEL_52;
  ActionMap = MapControl_WarInfo__GetActionMap(mWarInfo, v25, *((_DWORD *)mapModelManager + 52), 0);
  this->fields.mMapInfo = ActionMap;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)ActionMap, v27, v28);
  if ( !this->fields.mMapInfo )
  {
    mapModelManager = this->fields.mWarInfo;
    if ( !mapModelManager )
      goto LABEL_52;
    v45 = MapControl_WarInfo__GetMap((MapControl_WarInfo_o *)mapModelManager, this->fields.currentMapId, 0);
    this->fields.mMapInfo = v45;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)v45, v46, v47);
    mapModelManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !mapModelManager )
      goto LABEL_52;
    QuestAfterAction__SkipToNextAction((QuestAfterAction_o *)mapModelManager, 0);
    goto LABEL_22;
  }
  v24 = 1;
LABEL_28:
  mapModelManager = this->fields.mMapInfo;
  if ( !mapModelManager )
    goto LABEL_52;
  this->fields.currentMapId = *((_DWORD *)mapModelManager + 5);
  Mine = MapControl_MapInfo__GetMine((MapControl_MapInfo_o *)mapModelManager, 0);
  p_mMapEnt = &this->fields.mMapEnt;
  this->fields.mMapEnt = Mine;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapEnt, (int32_t)Mine, v31, v32);
  mapModelManager = this->fields.mWarInfo;
  if ( !mapModelManager )
    goto LABEL_52;
  if ( MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)mapModelManager, 0) )
  {
    mapModelManager = ScrTerminalMap__GetSaveKey_PlayerMap(this, v33);
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
  if ( v24 )
    BeforeClearQuestIdForAction_k__BackingField = this->fields._BeforeClearQuestIdForAction_k__BackingField;
  else
    BeforeClearQuestIdForAction_k__BackingField = 0;
  titleInfoControl = this->fields.titleInfoControl;
  mMapEnt = this->fields.mMapEnt;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE6 = 1;
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
  v39 = this->fields.mMapEnt;
  this->fields.currentMapImageId = (int)mapModelManager;
  if ( !v39 )
    goto LABEL_52;
  v40.n64_u64[0] = *(unsigned __int64 *)&v39->fields.mapImageW;
  *(int32x2_t *)&this->fields._currentMapImageW_k__BackingField = v40;
  *(float32x2_t *)&this->fields.mapImageOffsetX = vmul_f32(vcvt_f32_s32(v40), (float32x2_t)0x3F0000003F000000LL);
  ScrTerminalMap__AttachEventMapManager(this, v38);
  v41 = this->fields.mapModelManager;
  currentMapId = this->fields.currentMapId;
  currentAssetId = this->fields.currentAssetId;
  v44 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_ScrTerminalMap__smfSetMapChange_b__269_0__, 0);
  if ( !v41 )
LABEL_52:
    sub_1C372B4(mapModelManager);
  MapModelManager__LoadMapModel(v41, currentAssetId, currentMapId, v44, 0);
}


void ScrTerminalMap__smfSpotBtn_Click(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *spotObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MapControl_WarInfo_o *Component_object; // x0
  const MethodInfo *v7; // x2
  MapControl_WarInfo_o *v8; // x20
  int32_t DEFAULT_WAR_CHECK_STATUS; // w23
  TerminalPramsManager_c *v10; // x0
  bool IsMultiMap; // w0
  const MethodInfo *v12; // x2
  System_String_o *SaveKey_PlayerIcon; // x0
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *MasterData_object; // x21
  MapControl_WarInfo_o *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2

  if ( (byte_4C4013B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_19121/*"evSpotSelect_GoQuestSelect"*/);
    byte_4C4013B = 1;
  }
  this->fields.spotTouchObj = spotObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.spotTouchObj, (int32_t)spotObject, (int32_t)method, v3);
  if ( !spotObject )
    goto LABEL_39;
  Component_object = (MapControl_WarInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                               spotObject,
                                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
  if ( !Component_object )
    goto LABEL_39;
  v8 = Component_object;
  DEFAULT_WAR_CHECK_STATUS = Component_object[2].fields.DEFAULT_WAR_CHECK_STATUS;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F89B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F89B = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SpotId_k__BackingField = DEFAULT_WAR_CHECK_STATUS;
  this->fields.isEventBoardGameQuestListView = 1;
  ScrTerminalMap__SetPlayerIcon(this, spotObject, v7);
  Component_object = this->fields.mWarInfo;
  if ( !Component_object )
    goto LABEL_39;
  IsMultiMap = MapControl_WarInfo__IsMultiMap(Component_object, 0);
  SaveKey_PlayerIcon = ScrTerminalMap__GetSaveKey_PlayerIcon(this, IsMultiMap, v12);
  UnityEngine_PlayerPrefs__SetInt(SaveKey_PlayerIcon, v8[2].fields.DEFAULT_WAR_CHECK_STATUS, 0);
  Component_object = (MapControl_WarInfo_o *)this->fields.titleInfoControl;
  if ( !Component_object )
    goto LABEL_39;
  TitleInfoControl__setBackBtnSprite_39841600((TitleInfoControl_o *)Component_object, 1, 1, 0, 0);
  Component_object = (MapControl_WarInfo_o *)this->fields.titleInfoControl;
  if ( !Component_object )
    goto LABEL_39;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Component_object, 0, 0);
  Component_object = (MapControl_WarInfo_o *)this->fields.titleInfoControl;
  if ( !Component_object )
    goto LABEL_39;
  TitleInfoControl__SetDispChangeBtn((TitleInfoControl_o *)Component_object, 0, 0);
  if ( !byte_4C401B4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B4 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->_SelectedStoryQuestId_k__BackingField >= 1 )
  {
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( !byte_4C3FFA8 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFA8 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( !v15->static_fields->_SelectedRecollectionWarId_k__BackingField )
    {
      Component_object = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Component_object )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Component_object,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C401B4 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C401B4 = 1;
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
            v17 = Component_object;
            Component_object = (MapControl_WarInfo_o *)this->fields.titleInfoControl;
            if ( Component_object )
            {
              TitleInfoControl__SetBackStoryButtonEnable(
                (TitleInfoControl_o *)Component_object,
                v8[2].fields.DEFAULT_WAR_CHECK_STATUS == v17->fields.mapUpdateState,
                0);
              goto LABEL_38;
            }
          }
        }
      }
LABEL_39:
      sub_1C372B4(Component_object);
    }
  }
LABEL_38:
  ActionExtensions__Call(this->fields.mSpotClickAct, 0);
  this->fields.mSpotClickAct = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSpotClickAct, 0, v18, v19);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_19121/*"evSpotSelect_GoQuestSelect"*/, v20);
}


void ScrTerminalMap__smfSpot_SetPos(ScrTerminalMap_o *this, int32_t spotId, const MethodInfo *method)
{
  if ( (byte_4C400E3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19122/*"evSpotSet_Finish"*/);
    byte_4C400E3 = 1;
  }
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_19122/*"evSpotSet_Finish"*/, method);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ScrTerminalMap___c__DisplayClass401_0_o *v10; // x0
  struct System_Action_o *callback; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ScrTerminalMap_o *v14; // x1
  struct ScrTerminalMap___c__DisplayClass401_0_o *v15; // x8
  UnityEngine_WaitForSeconds_o *v16; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool result; // w0
  ScrTerminalMap_o *_4__this; // x20
  Il2CppObject *_8__1; // x21
  System_Action_o *v23; // x19

  if ( (byte_4C401F2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass401_0__EventBoardCameraActionAuto_IE_b__0__);
    sub_1C37058(&ScrTerminalMap___c__DisplayClass401_0_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C401F2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      _8__1,
      Method_ScrTerminalMap___c__DisplayClass401_0__EventBoardCameraActionAuto_IE_b__0__,
      0);
    if ( !_4__this )
      goto LABEL_12;
    ScrTerminalMap__EventBoardCameraAction(_4__this, v23, 1, 0, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C372A4(ScrTerminalMap___c__DisplayClass401_0_TypeInfo);
    System_Object___ctor(v4, 0);
    this->fields.__8__1 = (struct ScrTerminalMap___c__DisplayClass401_0_o *)v4;
    p__8__1 = &this->fields.__8__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v4, v6, v7);
    v10 = this->fields.__8__1;
    if ( v10 )
    {
      callback = this->fields.callback;
      v10->fields.callback = callback;
      sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields, (int32_t)callback, v8, v9);
      v10 = this->fields.__8__1;
      if ( v10 )
      {
        v14 = this->fields.__4__this;
        v10->fields.__4__this = v14;
        sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields.__4__this, (int32_t)v14, v12, v13);
        v15 = *p__8__1;
        if ( *p__8__1 )
        {
          *(_QWORD *)&v15->fields.squareId = *(_QWORD *)&this->fields.squareId;
          v15->fields.maxClearCount = this->fields.maxClearCount;
          v16 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v16, 0.5, 0);
          this->fields.__2__current = (Il2CppObject *)v16;
          p__2__current = &this->fields.__2__current;
          sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v16, v18, v19);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
    }
LABEL_12:
    sub_1C372B4(v10);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  ScrTerminalMap___c_c *v12; // x0
  System_Func_bool__o *_9__249_0; // x20
  Il2CppObject *v14; // x21
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_WaitWhile_o *v18; // x21
  Il2CppObject **v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C401F3 & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__WaitConnecting_b__249_0__);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C37058(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C401F3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
      return 0;
    }
LABEL_23:
    sub_1C372B4(Instance);
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, SLOW_CONNECT_WAIT_TIME, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
  v12 = ScrTerminalMap___c_TypeInfo;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v12 = ScrTerminalMap___c_TypeInfo;
  }
  _9__249_0 = v12->static_fields->__9__249_0;
  if ( !_9__249_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ScrTerminalMap___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__249_0 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__249_0, v14, Method_ScrTerminalMap___c__WaitConnecting_b__249_0__, 0);
    static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
    static_fields->__9__249_0 = _9__249_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__249_0, (int32_t)_9__249_0, v16, v17);
  }
  v18 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v18, _9__249_0, 0);
  this->fields.__2__current = (Il2CppObject *)v18;
  v19 = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)v19, (int32_t)v18, v20, v21);
  *((_DWORD *)v19 - 2) = 2;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ScrTerminalMap__WaitConnecting_d__249_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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

  if ( (byte_4C401F4 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__WaitScriptLoad_b__316_0__);
    sub_1C37058(&Method_ScrTerminalMap___c__WaitScriptLoad_b__316_1__);
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C401F4 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4C403D2 )
    {
      sub_1C37058(&BgmManager_TypeInfo);
      byte_4C403D2 = 1;
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
        ScrTerminalMap__mfCallFsmEvent(_4__this, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0);
        return 0;
      }
    }
LABEL_39:
    sub_1C372B4(mapButtonGrid);
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
        _9__316_0 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(_9__316_0, v6, Method_ScrTerminalMap___c__WaitScriptLoad_b__316_0__, 0);
        static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
        static_fields->__9__316_0 = _9__316_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__316_0, (int32_t)_9__316_0, v8, v9);
      }
      v10 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v10, _9__316_0, 0);
      this->fields.__2__current = (Il2CppObject *)v10;
      p__2__current = &this->fields.__2__current;
      sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v10, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
    _9__316_1 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__316_1, v19, Method_ScrTerminalMap___c__WaitScriptLoad_b__316_1__, 0);
    v20 = ScrTerminalMap___c_TypeInfo->static_fields;
    v20->__9__316_1 = _9__316_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v20->__9__316_1, (int32_t)_9__316_1, v21, v22);
  }
  v23 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v23, _9__316_1, 0);
  this->fields.__2__current = (Il2CppObject *)v23;
  v24 = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)v24, (int32_t)v23, v25, v26);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ScrTerminalMap__WaitScriptLoad_d__316_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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

  if ( (byte_4C401CD & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap___c_TypeInfo);
    byte_4C401CD = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ScrTerminalMap___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScrTerminalMap___c_TypeInfo->static_fields->__9 = (struct ScrTerminalMap___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ScrTerminalMap___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return MapGimmickComponent__IsTouched(v, 0);
}


int32_t ScrTerminalMap___c___SetBoardGameSquareHaveToken_b__409_0(
        ScrTerminalMap___c_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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

  if ( (byte_4C401D3 & 1) == 0 )
  {
    this = (ScrTerminalMap___c_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401D3 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  value = x->fields.value;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401A8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401A8 = 1;
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

  if ( (byte_4C401D2 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C401D2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return QuestTree__CheckMapGimmickCond_36630920((QuestTree_o *)Instance, x, 0);
}


bool ScrTerminalMap___c___WaitConnecting_b__249_0(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  if ( (byte_4C401CE & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C401CE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__CommunicationIsBusy(0);
}


bool ScrTerminalMap___c___WaitScriptLoad_b__316_0(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C401CF & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C401CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return !ScriptManager__get_IsLoading((ScriptManager_o *)Instance, 0);
}


bool ScrTerminalMap___c___WaitScriptLoad_b__316_1(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C401D0 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C401D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return !ScriptManager__IsJumpLine((ScriptManager_o *)Instance, 0);
}


void ScrTerminalMap___c___mcbfMapTouchDisable_b__359_7(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C401D1 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C401D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
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
  struct ScrTerminalMap_o *_4__this; // x8

  TopHomeRequest__UpdateAccessTime(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(v4);
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
  if ( (byte_4C401D4 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    byte_4C401D4 = 1;
  }
  v3 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v3 = ScrTerminalMap_TypeInfo;
  }
  RAID_TIME_OVER_NOTICE_KEY = v3->static_fields->RAID_TIME_OVER_NOTICE_KEY;
  v5 = System_Int32__ToString(v2 + 16, 0);
  v6 = System_String__Concat_63561656(RAID_TIME_OVER_NOTICE_KEY, v5, 0);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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

  if ( (byte_4C401D6 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__3__);
    byte_4C401D6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  ScrTerminalMap__SetupFeildConfiguration(_4__this, 0);
  _9__3 = this->fields.__9__3;
  assetMapName = this->fields.assetMapName;
  if ( !_9__3 )
  {
    _9__3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v6, v7);
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
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  ScrTerminalMap_o *v13; // x20
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v15; // x0
  System_String_o *AssetAtlasName; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  ScrTerminalMap_o *v23; // x20
  AssetData_o *mapMultiAssetData; // x21
  struct ScrTerminalMap_o *v25; // x8
  System_String_o *MultiMapAssetAtlasName; // x0
  Il2CppObject *v27; // x19
  System_Action_o *v28; // x20
  int32_t v29; // [xsp+8h] [xbp-28h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4C401D5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass262_0_o *)sub_1C37058(&Method_ScrTerminalMap_LoadEventMap__);
    byte_4C401D5 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.mapMultiAssetData = multiAssetData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&_4__this->fields.mapMultiAssetData,
    (int32_t)multiAssetData,
    (int32_t)method,
    v3);
  v13 = v5->fields.__4__this;
  if ( !v13 )
    goto LABEL_12;
  mapAssetData = v13->fields.mapAssetData;
  currentAssetId = v13->fields.currentAssetId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v7, v8, v9, v10, v11, v12);
  AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v13, v15, 0);
  ScrTerminalMap__LoadAssetsAtlases(v13, mapAssetData, AssetAtlasName, 0);
  v23 = v5->fields.__4__this;
  if ( !v23 )
    goto LABEL_12;
  mapMultiAssetData = v23->fields.mapMultiAssetData;
  v29 = v23->fields.currentAssetId;
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)j_il2cpp_value_box_0(
                                                      int_TypeInfo,
                                                      &v29,
                                                      v17,
                                                      v18,
                                                      v19,
                                                      v20,
                                                      v21,
                                                      v22);
  v25 = v5->fields.__4__this;
  if ( !v25 )
    goto LABEL_12;
  MultiMapAssetAtlasName = ScrTerminalMap__GetMultiMapAssetAtlasName(v23, (Il2CppObject *)this, v25->fields.mMapEnt, 0);
  ScrTerminalMap__LoadAssetsAtlases(v23, mapMultiAssetData, MultiMapAssetAtlasName, 0);
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
        v27 = (Il2CppObject *)v5->fields.__4__this,
        v28 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v28, v27, Method_ScrTerminalMap_LoadEventMap__, 0),
        !v27) )
  {
LABEL_12:
    sub_1C372B4(this);
  }
  ScrTerminalMap__LoadMapImgTex((ScrTerminalMap_o *)v27, v28, 0);
}


void ScrTerminalMap___c__DisplayClass262_0___LoadMap_b__3(
        ScrTerminalMap___c__DisplayClass262_0_o *this,
        AssetData_o *asData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 _4__this; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  struct ScrTerminalMap_o *v13; // x20
  struct ScrTerminalMap_o *v14; // x8
  System_String_o *AssetMultiMapName; // x0
  AssetLoader_LoadEndDataHandler_o *_9__4; // x21
  System_String_o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  struct ScrTerminalMap_o *v26; // x20
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v28; // x0
  System_String_o *AssetAtlasName; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  struct ScrTerminalMap_o *v36; // x8
  System_String_o *ASSETS_NAME_MAP_GIMMICK; // x20
  Il2CppObject *v38; // x0
  struct ScrTerminalMap_o *v39; // x20
  System_String_o *v40; // x1
  Il2CppObject *Object_object__51154888; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x19
  System_Action_o *v45; // x20
  int32_t v46; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v47; // [xsp+8h] [xbp-38h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C401D7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_LoadEventMap__);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__4__);
    byte_4C401D7 = 1;
  }
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  *(_QWORD *)(_4__this + 248) = asData;
  sub_1C36FFC((CGThumbnailListItem_o *)(_4__this + 248), (int32_t)asData, (int32_t)method, v3);
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  _4__this = ScrTerminalMap__IsMapChangeable((ScrTerminalMap_o *)_4__this, 0);
  if ( (_4__this & 1) == 0 )
    goto LABEL_13;
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_25;
  currentAssetId = v13->fields.currentAssetId;
  _4__this = j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v7, v8, v9, v10, v11, v12);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  AssetMultiMapName = ScrTerminalMap__GetAssetMultiMapName(v13, (Il2CppObject *)_4__this, v14->fields.mMapEnt, 0);
  _9__4 = this->fields.__9__4;
  v17 = AssetMultiMapName;
  if ( !_9__4 )
  {
    _9__4 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v18, v19);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v17, _9__4, 1, 0) )
  {
LABEL_13:
    _4__this = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
      v26 = this->fields.__4__this;
      if ( v26 )
      {
        mapAssetData = v26->fields.mapAssetData;
        v47 = v26->fields.currentAssetId;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v20, v21, v22, v23, v24, v25);
        AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v26, v28, 0);
        ScrTerminalMap__LoadAssetsAtlases(v26, mapAssetData, AssetAtlasName, 0);
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
            v36 = this->fields.__4__this;
            if ( v36 )
            {
              ASSETS_NAME_MAP_GIMMICK = ScrTerminalMap_TypeInfo->static_fields->ASSETS_NAME_MAP_GIMMICK;
              v46 = v36->fields.currentAssetId;
              v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v30, v31, v32, v33, v34, v35);
              _4__this = (__int64)System_String__Format(ASSETS_NAME_MAP_GIMMICK, v38, 0);
              v39 = this->fields.__4__this;
              if ( v39 )
              {
                v40 = (System_String_o *)_4__this;
                _4__this = (__int64)v39->fields.mapAssetData;
                if ( _4__this )
                {
                  Object_object__51154888 = AssetData__GetObject_object__51154888(
                                              (AssetData_o *)_4__this,
                                              v40,
                                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
                  v39->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)Object_object__51154888;
                  sub_1C36FFC(
                    (CGThumbnailListItem_o *)&v39->fields.mapGimmickPrefab,
                    (int32_t)Object_object__51154888,
                    v42,
                    v43);
                  v44 = (Il2CppObject *)this->fields.__4__this;
                  v45 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                  System_Action___ctor(v45, v44, Method_ScrTerminalMap_LoadEventMap__, 0);
                  if ( v44 )
                  {
                    ScrTerminalMap__LoadMapImgTex((ScrTerminalMap_o *)v44, v45, 0);
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
    sub_1C372B4(_4__this);
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
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  ScrTerminalMap_o *v13; // x20
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v15; // x0
  System_String_o *AssetAtlasName; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  ScrTerminalMap_o *v23; // x20
  AssetData_o *mapMultiAssetData; // x21
  struct ScrTerminalMap_o *v25; // x8
  System_String_o *MultiMapAssetAtlasName; // x0
  Il2CppObject *v27; // x19
  System_Action_o *v28; // x20
  int32_t v29; // [xsp+8h] [xbp-28h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4C401D8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_LoadEventMap__);
    this = (ScrTerminalMap___c__DisplayClass262_0_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C401D8 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.mapMultiAssetData = multiAssetData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&_4__this->fields.mapMultiAssetData,
    (int32_t)multiAssetData,
    (int32_t)method,
    v3);
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  v13 = v5->fields.__4__this;
  if ( !v13 )
    goto LABEL_13;
  mapAssetData = v13->fields.mapAssetData;
  currentAssetId = v13->fields.currentAssetId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v7, v8, v9, v10, v11, v12);
  AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v13, v15, 0);
  ScrTerminalMap__LoadAssetsAtlases(v13, mapAssetData, AssetAtlasName, 0);
  v23 = v5->fields.__4__this;
  if ( !v23 )
    goto LABEL_13;
  mapMultiAssetData = v23->fields.mapMultiAssetData;
  v29 = v23->fields.currentAssetId;
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)j_il2cpp_value_box_0(
                                                      int_TypeInfo,
                                                      &v29,
                                                      v17,
                                                      v18,
                                                      v19,
                                                      v20,
                                                      v21,
                                                      v22);
  v25 = v5->fields.__4__this;
  if ( !v25 )
    goto LABEL_13;
  MultiMapAssetAtlasName = ScrTerminalMap__GetMultiMapAssetAtlasName(v23, (Il2CppObject *)this, v25->fields.mMapEnt, 0);
  ScrTerminalMap__LoadAssetsAtlases(v23, mapMultiAssetData, MultiMapAssetAtlasName, 0);
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
        v27 = (Il2CppObject *)v5->fields.__4__this,
        v28 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v28, v27, Method_ScrTerminalMap_LoadEventMap__, 0),
        !v27) )
  {
LABEL_13:
    sub_1C372B4(this);
  }
  ScrTerminalMap__LoadMapImgTex((ScrTerminalMap_o *)v27, v28, 0);
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
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  struct ScrTerminalMap___c__DisplayClass262_0_o *v18; // x8
  ScrTerminalMap_o *v19; // x20
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v21; // x0
  System_String_o *AssetAtlasName; // x0
  struct ScrTerminalMap___c__DisplayClass262_0_o *v23; // x8
  struct ScrTerminalMap___c__DisplayClass262_0_o *v24; // x8
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  struct ScrTerminalMap___c__DisplayClass262_0_o *v31; // x8
  struct ScrTerminalMap_o *v32; // x8
  struct ScrTerminalMap_o *v33; // x20
  Il2CppObject *v34; // x0
  struct ScrTerminalMap___c__DisplayClass262_0_o *v35; // x8
  struct ScrTerminalMap_o *v36; // x20
  ScrTerminalMap___c__DisplayClass262_1_o *v37; // x1
  Il2CppObject *Object_object__51154888; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct ScrTerminalMap___c__DisplayClass262_0_o *v41; // x8
  Il2CppObject *v42; // x19
  System_Action_o *v43; // x20
  int32_t v44; // [xsp+8h] [xbp-38h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C401D9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_LoadEventMap__);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass262_1_o *)sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__2__);
    byte_4C401D9 = 1;
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
    _9__2 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (ScrTerminalMap___c__DisplayClass262_1_o *)AssetManager__loadAssetStorage(assetMultiMapName, _9__2, 1, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v18 = v2->fields.CS___8__locals1;
    if ( v18 )
    {
      v19 = v18->fields.__4__this;
      if ( v19 )
      {
        mapAssetData = v19->fields.mapAssetData;
        currentAssetId = v19->fields.currentAssetId;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v12, v13, v14, v15, v16, v17);
        AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v19, v21, 0);
        ScrTerminalMap__LoadAssetsAtlases(v19, mapAssetData, AssetAtlasName, 0);
        v23 = v2->fields.CS___8__locals1;
        if ( v23 )
        {
          this = (ScrTerminalMap___c__DisplayClass262_1_o *)v23->fields.__4__this;
          if ( this )
          {
            ScrTerminalMap__LoadMapEffectPrefab(
              (ScrTerminalMap_o *)this,
              (AssetData_o *)this[7].fields.CS___8__locals1,
              0);
            v24 = v2->fields.CS___8__locals1;
            if ( v24 )
            {
              this = (ScrTerminalMap___c__DisplayClass262_1_o *)v24->fields.__4__this;
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
                v31 = v2->fields.CS___8__locals1;
                if ( v31 )
                {
                  v32 = v31->fields.__4__this;
                  if ( v32 )
                  {
                    v33 = this[5].fields.CS___8__locals1[1].fields.__4__this;
                    v44 = v32->fields.currentAssetId;
                    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v25, v26, v27, v28, v29, v30);
                    this = (ScrTerminalMap___c__DisplayClass262_1_o *)System_String__Format(
                                                                        (System_String_o *)v33,
                                                                        v34,
                                                                        0);
                    v35 = v2->fields.CS___8__locals1;
                    if ( v35 )
                    {
                      v36 = v35->fields.__4__this;
                      if ( v36 )
                      {
                        v37 = this;
                        this = (ScrTerminalMap___c__DisplayClass262_1_o *)v36->fields.mapAssetData;
                        if ( this )
                        {
                          Object_object__51154888 = AssetData__GetObject_object__51154888(
                                                      (AssetData_o *)this,
                                                      (System_String_o *)v37,
                                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
                          v36->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)Object_object__51154888;
                          sub_1C36FFC(
                            (CGThumbnailListItem_o *)&v36->fields.mapGimmickPrefab,
                            (int32_t)Object_object__51154888,
                            v39,
                            v40);
                          v41 = v2->fields.CS___8__locals1;
                          if ( v41 )
                          {
                            v42 = (Il2CppObject *)v41->fields.__4__this;
                            v43 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                            System_Action___ctor(v43, v42, Method_ScrTerminalMap_LoadEventMap__, 0);
                            if ( v42 )
                            {
                              ScrTerminalMap__LoadMapImgTex((ScrTerminalMap_o *)v42, v43, 0);
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
    sub_1C372B4(this);
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
  if ( (byte_4C401DA & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass270_0__eventInfoAssetLoad_b__1__);
    this = (ScrTerminalMap___c__DisplayClass270_0_o *)sub_1C37058(&StringLiteral_5885/*"Effect/Race"*/);
    byte_4C401DA = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  _4__this->fields.mapInfoAssetData = assetData;
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.mapInfoAssetData, (int32_t)assetData, (int32_t)method, v3);
  _9__1 = v5->fields.__9__1;
  v8 = (System_String_o *)StringLiteral_5885/*"Effect/Race"*/;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_ScrTerminalMap___c__DisplayClass270_0__eventInfoAssetLoad_b__1__,
      0);
    v5->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.__9__1, (int32_t)_9__1, v9, v10);
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
    sub_1C372B4(this);
  _4__this->fields.mapInfoEffectAssetData = effectData;
  sub_1C36FFC(
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
  Il2CppObject *Object_object__51154888; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ScrTerminalMap_o *v11; // x20
  UnityEngine_Texture2D_o *currentMapTexture_k__BackingField; // x21
  int32_t currentMapImageW_k__BackingField; // w22
  int32_t currentMapImageH_k__BackingField; // w23
  bool IsMapModel; // w0

  v5 = this;
  if ( (byte_4C401DB & 1) == 0 )
  {
    this = (ScrTerminalMap___c__DisplayClass281_0_o *)sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    byte_4C401DB = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.mapImgAssetData = mapImgData;
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.mapImgAssetData, (int32_t)mapImgData, (int32_t)method, v3);
  v7 = v5->fields.__4__this;
  if ( !v7
    || (this = (ScrTerminalMap___c__DisplayClass281_0_o *)v7->fields.mapImgAssetData) == 0
    || (Object_object__51154888 = AssetData__GetObject_object__51154888(
                                    (AssetData_o *)this,
                                    v5->fields.textureName,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200),
        v7->fields._currentMapTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__51154888,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&v7->fields._currentMapTexture_k__BackingField,
          (int32_t)Object_object__51154888,
          v9,
          v10),
        (v11 = v5->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return mMapCtrl_MapGimmickInfo->fields.mapGimmickId == this->fields.gimmickId;
}


bool ScrTerminalMap___c__DisplayClass288_0___smfMap2d_SpotMarkCreate_b__2(
        ScrTerminalMap___c__DisplayClass288_0_o *this,
        MapGimmickComponent_o *n,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( !n || (mMapCtrl_MapGimmickInfo = n->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  const MethodInfo *v9; // x2
  struct ScrTerminalMap_o *v10; // x8
  Il2CppObject *current; // x0
  struct ScrTerminalMap_o *v12; // x8
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C401DC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__get_Current__);
    this = (ScrTerminalMap___c__DisplayClass334_0_o *)sub_1C37058(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
    byte_4C401DC = 1;
  }
  memset(&v13, 0, sizeof(v13));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    if ( !v8 )
      break;
    v10 = v2->fields.__4__this;
    if ( !v10 )
      sub_1C372B4(v8);
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C372B4(0);
    *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_F0) = v10->fields.currentMapLayerId;
    SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)current, 1, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
  v12 = v2->fields.__4__this;
  if ( !v12 || (this = (ScrTerminalMap___c__DisplayClass334_0_o *)v12->fields.mapModelManager) == 0 )
LABEL_20:
    sub_1C372B4(this);
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
  const MethodInfo *v10; // x2
  struct ScrTerminalMap_o *v11; // x8
  Il2CppObject *current; // x0
  struct ScrTerminalMap_o *v13; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C401DD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__get_Current__);
    this = (ScrTerminalMap___c__DisplayClass335_0_o *)sub_1C37058(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
    byte_4C401DD = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    if ( !v9 )
      break;
    v11 = v2->fields.__4__this;
    if ( !v11 )
      sub_1C372B4(v9);
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C372B4(0);
    *(_DWORD *)((char *)&v14.fields._current->klass + (unsigned __int64)&qword_F0) = v11->fields.currentMapLayerId;
    SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)current, 1, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
  v13 = v2->fields.__4__this;
  if ( !v13 || (this = (ScrTerminalMap___c__DisplayClass335_0_o *)v13->fields.mapModelManager) == 0 )
LABEL_22:
    sub_1C372B4(this);
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
    sub_1C372B4(_4__this);
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
  if ( (byte_4C401DE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass340_0_o *)sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__4__);
    byte_4C401DE = 1;
  }
  _9__4 = v2->fields.__9__4;
  _4__this = v2->fields.__4__this;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__4__,
      0);
    v2->fields.__9__4 = _9__4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v5, v6);
  }
  if ( !_4__this )
    sub_1C372B4(this);
  ScrTerminalMap__MakeFarmGrowthDialogOpen(_4__this, _9__4, 0);
}


void ScrTerminalMap___c__DisplayClass340_0___EventActionPlay_b__2(
        ScrTerminalMap___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x19
  System_Action_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4C401E0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_EventScriptPlay__);
    byte_4C401E0 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, _4__this, Method_ScrTerminalMap_EventScriptPlay__, 0);
  if ( !_4__this )
    sub_1C372B4(v5);
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
  if ( (byte_4C401E1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass340_0_o *)sub_1C37058(&Method_ScrTerminalMap_EventScriptPlay__);
    byte_4C401E1 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this || (monitor = _4__this[22].monitor) == 0 )
    sub_1C372B4(this);
  eventId = v2->fields.eventId;
  v6 = monitor[4];
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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

  if ( (byte_4C401DF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_EventScriptPlay__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401DF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
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
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, _4__this, Method_ScrTerminalMap_EventScriptPlay__, 0);
  if ( !klass )
LABEL_14:
    sub_1C372B4(v3);
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
  if ( (byte_4C401E2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass341_0_o *)sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass341_0__ProductivityGrowthDialogOpen_b__1__);
    byte_4C401E2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  titleInfoControl = _4__this->fields.titleInfoControl;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ScrTerminalMap___c__DisplayClass341_0__ProductivityGrowthDialogOpen_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !titleInfoControl )
LABEL_8:
    sub_1C372B4(this);
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

  if ( (byte_4C401E3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401E3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (CGThumbnailListItem_o *)&v5->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0;
  sub_1C36FFC(p_eventConquestInfos, 0, v2, v3);
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

  if ( (byte_4C401E4 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401E4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v5->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0;
  sub_1C36FFC(p_eventHarvestGrowthInfo, 0, v2, v3);
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

  if ( (byte_4C401E5 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401E5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_eventAreaImproveResultInfo = (CGThumbnailListItem_o *)&v5->static_fields->eventAreaImproveResultInfo;
  p_eventAreaImproveResultInfo->klass = 0;
  sub_1C36FFC(p_eventAreaImproveResultInfo, 0, v2, v3);
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
  if ( (byte_4C401E6 & 1) == 0 )
  {
    sub_1C37058(&DataLostResetManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap_StartDataLostBattleResetEffect__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (ScrTerminalMap___c__DisplayClass349_0_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401E6 = 1;
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
        sub_1C36FFC((CGThumbnailListItem_o *)&v15->fields.dataLostBattleResetEffectEndAct, 0, v13, v14);
        v16 = v4->fields.__4__this;
        if ( v16 )
        {
          v16->fields.isPlayingDataLostBattleResetEffect = 0;
          return;
        }
      }
    }
LABEL_26:
    sub_1C372B4(this);
  }
  this = (ScrTerminalMap___c__DisplayClass349_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 1;
  eventId = v4->fields.eventId;
  if ( !byte_4C401B8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C401B8 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleEventId_k__BackingField = eventId;
  warId = v4->fields.warId;
  if ( !byte_4C401B9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C401B9 = 1;
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
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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

  if ( (byte_4C401E7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass353_0__showEventScriptDlgs_b__1__);
    byte_4C401E7 = 1;
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
    (const MethodInfo_37A4890 *)Method_System_Collections_Generic_List_string__RemoveRange__);
  eventScriptMessages = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)eventScriptMessages;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ScrTerminalMap___c__DisplayClass353_0__showEventScriptDlgs_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
LABEL_10:
    sub_1C372B4(eventScriptMessages);
  CommonUI__CloseNotificationDialog_31211056(v6, _9__1, 0);
}


void ScrTerminalMap___c__DisplayClass353_0___showEventScriptDlgs_b__1(
        ScrTerminalMap___c__DisplayClass353_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ScrTerminalMap__OnEndEventScripts(_4__this, this->fields.eventScriptEntity, 0);
}


void ScrTerminalMap___c__DisplayClass356_0___EventScriptCaller_b__2(
        ScrTerminalMap___c__DisplayClass356_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
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
  if ( (byte_4C401E8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass356_1_o *)sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass356_0__EventScriptCaller_b__2__);
    byte_4C401E8 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  effect = v2->fields.effect;
  _9__2 = CS___8__locals1->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_ScrTerminalMap___c__DisplayClass356_0__EventScriptCaller_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !effect )
LABEL_8:
    sub_1C372B4(this);
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
  if ( (byte_4C401E9 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (ScrTerminalMap___c__DisplayClass364_0_o *)sub_1C37058(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    byte_4C401E9 = 1;
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
        (this = (ScrTerminalMap___c__DisplayClass364_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0),
        (this = (ScrTerminalMap___c__DisplayClass364_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_1C372B4(this);
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
  if ( (byte_4C401EA & 1) == 0 )
  {
    this = (ScrTerminalMap___c__DisplayClass385_0_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C401EA = 1;
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
  this = (ScrTerminalMap___c__DisplayClass385_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_10:
    sub_1C372B4(this);
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
  struct ScrTerminalMap_o *_4__this; // x8
  System_Collections_Generic_Dictionary_object__object__o *v6; // x21
  struct ScrTerminalMap_o *v7; // x8
  struct ScrTerminalMap_o *v8; // x8
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct ScrTerminalMap_o *v10; // x8
  int32_t v11; // w20
  Il2CppObject *Item; // x21
  int32_t v13; // w21
  System_Action_o *_9__1; // x23
  ScrTerminalMap_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C401EB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass391_0__EndRequestDiceUse_b__1__);
    sub_1C37058(&StringLiteral_18617/*"diceType"*/);
    sub_1C37058(&StringLiteral_18618/*"diceValue"*/);
    byte_4C401EB = 1;
  }
  result = this->fields.result;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  v6 = Dictionary;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.titleInfoControl;
  if ( !Dictionary )
    goto LABEL_24;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)Dictionary, 0);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_24;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.titleInfoControl;
  if ( !Dictionary )
    goto LABEL_24;
  TitleInfoControl__UpdateEventMissionClearInfo((TitleInfoControl_o *)Dictionary, 0);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_24;
  terminalScene = v8->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_24;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)terminalScene->fields.mTerminalList;
  if ( !Dictionary )
    goto LABEL_24;
  ScrTerminalListTop__UpdateList((ScrTerminalListTop_o *)Dictionary, 0);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_24;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.eventBoardGameUsingItem;
  if ( !Dictionary )
    goto LABEL_24;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)ItemEntity__getScript(
                                                                            (ItemEntity_o *)Dictionary,
                                                                            (System_String_o *)StringLiteral_18617/*"diceType"*/,
                                                                            1,
                                                                            0);
  if ( !v6 )
    goto LABEL_24;
  v11 = (int)Dictionary;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                            v6,
                                                                            (Il2CppObject *)StringLiteral_18618/*"diceValue"*/,
                                                                            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)Dictionary & 1) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             v6,
             (Il2CppObject *)StringLiteral_18618/*"diceValue"*/,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Convert__ToInt32(Item, 0);
    v13 = (int)Dictionary;
  }
  else
  {
    v13 = 1;
  }
  _9__1 = this->fields.__9__1;
  v15 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ScrTerminalMap___c__DisplayClass391_0__EndRequestDiceUse_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v16, v17);
  }
  if ( !v15 )
LABEL_24:
    sub_1C372B4(Dictionary);
  ScrTerminalMap__PlayBoardGameDiceEffect(v15, 1, v11, v13, _9__1, 0);
}


void ScrTerminalMap___c__DisplayClass391_0___EndRequestDiceUse_b__1(
        ScrTerminalMap___c__DisplayClass391_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
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

  if ( (byte_4C401EC & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&StringLiteral_13051/*"StartBoardGamePieceEffectSub"*/);
    sub_1C37058(&StringLiteral_5983/*"EndBoardGamePieceEffect"*/);
    byte_4C401EC = 1;
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
                                   (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
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
  v15 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  v16 = currentSquareIndex == endSquareIndex;
  v17 = (Il2CppObject *)v15;
  v18 = (System_String_o **)(v16 ? &StringLiteral_5983/*"EndBoardGamePieceEffect"*/ : &StringLiteral_13051/*"StartBoardGamePieceEffectSub"*/);
  EventDelegate___ctor_49274436(v15, (UnityEngine_MonoBehaviour_o *)v11, *v18, 0);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v22 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C372B4(_4__this);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      v17,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v17;
    sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
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
  if ( (byte_4C401ED & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass400_0_o *)sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass400_0__PlayBoardGameQuestArrivalEffect_b__1__);
    byte_4C401ED = 1;
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
      UnityEngine_MonoBehaviour__StartCoroutine_71252324(_4__this, v4, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(this);
  }
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ScrTerminalMap___c__DisplayClass400_0__PlayBoardGameQuestArrivalEffect_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
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
    sub_1C372B4(EventBoardQuestArrivalPanelObj_k__BackingField);
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
  struct ScrTerminalMap_o *_4__this; // x8
  UnityEngine_Object_o *EventBoardQuestArrivalPanelObj_k__BackingField; // x20
  struct ScrTerminalMap_o *v6; // x8

  if ( (byte_4C401EE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C401EE = 1;
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
    v6 = this->fields.__4__this;
    if ( v6 )
    {
      v3 = v6->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
      if ( v3 )
      {
        UnityEngine_GameObject__SetActive(v3, 1, 0);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_1C372B4(v3);
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
    sub_1C372B4(this);
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
  if ( (byte_4C401EF & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    this = (ScrTerminalMap___c__DisplayClass404_0_o *)sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__1__);
    byte_4C401EF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (ScrTerminalMap___c__DisplayClass404_0_o *)_4__this->fields._EventBoardPieceObj_k__BackingField;
  if ( !this )
    goto LABEL_15;
  this = (ScrTerminalMap___c__DisplayClass404_0_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
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
    _9__1 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  v12 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49273948(v12, _9__1, 0);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v16 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_15:
    sub_1C372B4(this);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      (Il2CppObject *)v12,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
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

  if ( (byte_4C401F0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__2__);
    byte_4C401F0 = 1;
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
      _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
    }
    if ( v6 )
    {
      ScrTerminalMap__PlayBoardGameQuestArrivalEffect(v6, v7, _9__2, 0, 0);
      return;
    }
    goto LABEL_30;
  }
  _4__this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_30;
    if ( !_4__this )
      goto LABEL_30;
    UnityEngine_Animation__Stop_71011180((UnityEngine_Animation_o *)_4__this, v12->fields.animationNameBuffer, 0);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_30;
    v15->fields.animationNameBuffer = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v15->fields.animationNameBuffer, 0, v13, v14);
  }
  v16 = this->fields.endIndex;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401C1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C1 = 1;
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
    sub_1C372B4(_4__this);
  ScrTerminalMap__UpdateEventBoardGameSpot(_4__this, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass404_0___JumpEventBoardGamePiece_b__2(
        ScrTerminalMap___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct ScrTerminalMap_o *_4__this; // x8
  struct ScrTerminalMap_o *v5; // x8
  struct ScrTerminalMap_o *v6; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct ScrTerminalMap_o *v9; // x8
  int32_t endIndex; // w20
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4C401F1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401F1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_21;
    Instance = (CommonUI_o *)v5->fields._EventBoardPieceObj_k__BackingField;
    if ( !Instance )
      goto LABEL_21;
    Instance = (CommonUI_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Instance,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_21;
    if ( !Instance )
      goto LABEL_21;
    UnityEngine_Animation__Stop_71011180((UnityEngine_Animation_o *)Instance, v6->fields.animationNameBuffer, 0);
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_21;
    v9->fields.animationNameBuffer = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields.animationNameBuffer, 0, v7, v8);
  }
  endIndex = this->fields.endIndex;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401C1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C1 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_EventBoardGameSquareIndex_k__BackingField = endIndex;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
LABEL_21:
    sub_1C372B4(Instance);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  _4__this->fields._MapUIState_k__BackingField = this->fields.state;
}