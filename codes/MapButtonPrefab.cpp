void MapButtonPrefab___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct MapButtonPrefab_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct MapButtonPrefab_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct MapButtonPrefab_StaticFields *v23; // x0
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct MapButtonPrefab_StaticFields *v31; // x0
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4E0140E & 1) == 0 )
  {
    sub_1CE6700(&MapButtonPrefab_TypeInfo);
    sub_1CE6700(&StringLiteral_17631/*"btn_bg_16"*/);
    sub_1CE6700(&StringLiteral_21757/*"map_button_{0}_c"*/);
    sub_1CE6700(&StringLiteral_6129/*"EntryAnim"*/);
    sub_1CE6700(&StringLiteral_21756/*"map_button_{0}"*/);
    sub_1CE6700(&StringLiteral_8603/*"MAP_BUTTON_NAME_LABEL_{0}"*/);
    byte_4E0140E = 1;
  }
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_21756/*"map_button_{0}"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)MapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_21756/*"map_button_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_21757/*"map_button_{0}_c"*/;
  static_fields = MapButtonPrefab_TypeInfo->static_fields;
  static_fields->MAP_CURRENT_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_21757/*"map_button_{0}_c"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&static_fields->MAP_CURRENT_BUTTON_SP_NAME,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_17631/*"btn_bg_16"*/;
  v16 = MapButtonPrefab_TypeInfo->static_fields;
  v16->DEFAULT_BUTTON_SP = (struct System_String_o *)StringLiteral_17631/*"btn_bg_16"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v16->DEFAULT_BUTTON_SP, v15, v17, v18, v19, v20, v21, v22);
  v23 = MapButtonPrefab_TypeInfo->static_fields;
  *(_QWORD *)&v23->FRAME_IN_ANIM_DURATION = 0x3DCCCCCD3E4CCCCDLL;
  v24 = StringLiteral_6129/*"EntryAnim"*/;
  v23->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6129/*"EntryAnim"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v23->FUNC_ENTRY_ANIM, v24, v25, v26, v27, v28, v29, v30);
  v31 = MapButtonPrefab_TypeInfo->static_fields;
  v31->MAP_BUTTON_GRID_HEIGHT = 57.0;
  v32 = StringLiteral_8603/*"MAP_BUTTON_NAME_LABEL_{0}"*/;
  v31->MAP_BUTTON_NAME_LABEL_KEY = (struct System_String_o *)StringLiteral_8603/*"MAP_BUTTON_NAME_LABEL_{0}"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v31->MAP_BUTTON_NAME_LABEL_KEY, v32, v33, v34, v35, v36, v37, v38);
}


void MapButtonPrefab___ctor(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab_c *v3; // x0

  if ( (byte_4E0140D & 1) == 0 )
  {
    sub_1CE6700(&MapButtonPrefab_TypeInfo);
    byte_4E0140D = 1;
  }
  this->fields.labelEffectColor = (struct UnityEngine_Color_o)xmmword_D26280;
  this->fields.currentLabelEffectColor = (struct UnityEngine_Color_o)xmmword_D25360;
  v3 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v3 = MapButtonPrefab_TypeInfo;
  }
  this->fields.cellHeight = v3->static_fields->MAP_BUTTON_GRID_HEIGHT;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void MapButtonPrefab__EntryAnim(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab__FrameIn(this, method);
}


void MapButtonPrefab__ExecAnimEndAction(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (GrandQuestFolderBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1CE66A4(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0);
}


void MapButtonPrefab__FrameIn(MapButtonPrefab_o *this, const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  MapButtonPrefab_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  float z; // w8
  __int64 v9; // x9
  UITweener_o *v10; // x20
  EventDelegate_Callback_o *v11; // x21
  __int64 v12; // [xsp+0h] [xbp-40h]

  if ( (byte_4E0140A & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_MapButtonPrefab__FrameIn_b__36_0__);
    sub_1CE6700(&MapButtonPrefab_TypeInfo);
    sub_1CE6700(&Method_UITweener_Begin_TweenPosition___);
    byte_4E0140A = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = MapButtonPrefab_TypeInfo;
  v7 = v5;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v6 = MapButtonPrefab_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v7,
                         v6->static_fields->FRAME_IN_ANIM_DURATION,
                         (const MethodInfo_32DA710 *)Method_UITweener_Begin_TweenPosition___);
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
LABEL_8:
    sub_1CE6958(gameObject, v4);
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v12;
  z = this->fields.inPos.fields.z;
  v9 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v9;
  v10 = (UITweener_o *)gameObject;
  v11 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, Method_MapButtonPrefab__FrameIn_b__36_0__, 0);
  UITweener__SetOnFinished(v10, v11, 0);
}


void MapButtonPrefab__FrameOut(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab_c *v3; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  float z; // w8
  void *v8; // x9
  UITweener_o *v9; // x20
  EventDelegate_Callback_o *v10; // x21
  Il2CppClass *v11; // [xsp+0h] [xbp-30h]

  if ( (byte_4E0140B & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_MapButtonPrefab__FrameOut_b__37_0__);
    sub_1CE6700(&MapButtonPrefab_TypeInfo);
    sub_1CE6700(&Method_UITweener_Begin_TweenPosition___);
    byte_4E0140B = 1;
  }
  v3 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v3 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_72903040(
    (UnityEngine_MonoBehaviour_o *)this,
    v3->static_fields->FUNC_ENTRY_ANIM,
    0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = UITweener__Begin_object_(
         gameObject,
         MapButtonPrefab_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_32DA710 *)Method_UITweener_Begin_TweenPosition___);
  v11 = *(Il2CppClass **)&this->fields.inPos.fields.x;
  if ( !v5 )
    sub_1CE6958(0, v6);
  *(float *)&v5[8].monitor = this->fields.inPos.fields.z;
  v5[8].klass = v11;
  z = this->fields.outPos.fields.z;
  v8 = *(void **)&this->fields.outPos.fields.x;
  LODWORD(v5[2].klass) = 2;
  *((float *)&v5[9].klass + 1) = z;
  *(void **)((char *)&v5[8].monitor + 4) = v8;
  v9 = (UITweener_o *)v5;
  v10 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v10, (Il2CppObject *)this, Method_MapButtonPrefab__FrameOut_b__37_0__, 0);
  UITweener__SetOnFinished(v9, v10, 0);
}


float MapButtonPrefab__GetGridCellHeight(MapButtonPrefab_o *this, const MethodInfo *method)
{
  float result; // s0
  MapButtonPrefab_c *v4; // x0

  if ( (byte_4E0140C & 1) == 0 )
  {
    sub_1CE6700(&MapButtonPrefab_TypeInfo);
    byte_4E0140C = 1;
  }
  result = this->fields.cellHeight;
  if ( result <= 0.0 )
  {
    v4 = MapButtonPrefab_TypeInfo;
    if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
      v4 = MapButtonPrefab_TypeInfo;
    }
    return v4->static_fields->MAP_BUTTON_GRID_HEIGHT;
  }
  return result;
}


void MapButtonPrefab__OnClickButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0 )
    sub_1CE6958(this, method);
  ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)this, mapButtonEntity->fields.targetMapId, -1, -1, 0);
}


void MapButtonPrefab__OnClickMapSlideButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0 )
    sub_1CE6958(this, method);
  ScrTerminalMap__RequestMapMove((ScrTerminalMap_o *)this, mapButtonEntity->fields.layer, 0);
}


void MapButtonPrefab__ResetIsNew(MapButtonPrefab_o *this, const MethodInfo *method)
{
  this->fields.isNew = 0;
}


void MapButtonPrefab__SetBadge(MapButtonPrefab_o *this, int32_t num, const MethodInfo *method)
{
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *mNoticeNumberObj; // x0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4E01407 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E01407 = 1;
  }
  p_mNoticeNumber = &this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0) )
  {
    mNoticeNumberObj = this->fields.mNoticeNumberObj;
    if ( !mNoticeNumberObj )
      goto LABEL_10;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mNoticeNumberObj,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.mNoticeNumber,
      (int32_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  mNoticeNumberObj = (UnityEngine_GameObject_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
LABEL_10:
    sub_1CE6958(mNoticeNumberObj, v7);
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mNoticeNumberObj, num, v8);
}


// local variable allocation has failed, the output may be wrong!
void MapButtonPrefab__SetButtonSprite(
        MapButtonPrefab_o *this,
        bool isMapModel,
        int32_t currentMapId,
        int32_t currentMapLayerId,
        bool isForceFalse,
        const MethodInfo *method)
{
  void *buttonSprite; // x0
  struct MapButtonPrefab_StaticFields *static_fields; // x8
  System_String_o *MAP_BUTTON_SP_NAME; // x22
  struct MapButtonEntity_o *mapButtonEntity; // x9
  struct MapButtonEntity_o *v15; // x8
  Il2CppObject *v16; // x0
  System_String_o *DEFAULT_BUTTON_SP; // x20
  UnityEngine_Object_o *UIAtlasBySpriteName; // x21
  MapButtonPrefab_c *v19; // x0
  int32_t imageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4E01405 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&MapButtonPrefab_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E01405 = 1;
  }
  buttonSprite = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    buttonSprite = MapButtonPrefab_TypeInfo;
  }
  static_fields = (struct MapButtonPrefab_StaticFields *)*((_QWORD *)buttonSprite + 23);
  MAP_BUTTON_SP_NAME = static_fields->MAP_BUTTON_SP_NAME;
  if ( isForceFalse )
    goto LABEL_15;
  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !isMapModel )
  {
    if ( !mapButtonEntity )
      goto LABEL_26;
    if ( mapButtonEntity->fields.targetMapId != currentMapId )
      goto LABEL_15;
    goto LABEL_12;
  }
  if ( !mapButtonEntity )
    goto LABEL_26;
  if ( mapButtonEntity->fields.layer == currentMapLayerId )
  {
LABEL_12:
    if ( !*((_DWORD *)buttonSprite + 56) )
    {
      j_il2cpp_runtime_class_init_0(buttonSprite);
      static_fields = MapButtonPrefab_TypeInfo->static_fields;
    }
    MAP_BUTTON_SP_NAME = static_fields->MAP_CURRENT_BUTTON_SP_NAME;
  }
LABEL_15:
  v15 = this->fields.mapButtonEntity;
  if ( !v15 )
    goto LABEL_26;
  imageId = v15->fields.imageId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  DEFAULT_BUTTON_SP = System_String__Format(MAP_BUTTON_SP_NAME, v16, 0);
  UIAtlasBySpriteName = (UnityEngine_Object_o *)UIAtlas__GetUIAtlasBySpriteName(
                                                  this->fields.mapAtlases,
                                                  DEFAULT_BUTTON_SP,
                                                  0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(UIAtlasBySpriteName, 0, 0) )
  {
    v19 = MapButtonPrefab_TypeInfo;
    UIAtlasBySpriteName = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
    if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
      v19 = MapButtonPrefab_TypeInfo;
    }
    DEFAULT_BUTTON_SP = v19->static_fields->DEFAULT_BUTTON_SP;
  }
  buttonSprite = this->fields.buttonSprite;
  if ( !buttonSprite
    || (UISprite__set_atlas((UISprite_o *)buttonSprite, (UIAtlas_o *)UIAtlasBySpriteName, 0),
        (buttonSprite = this->fields.buttonSprite) == 0)
    || (UISprite__set_spriteName((UISprite_o *)buttonSprite, DEFAULT_BUTTON_SP, 0),
        (buttonSprite = this->fields.buttonSprite) == 0) )
  {
LABEL_26:
    sub_1CE6958(buttonSprite, isMapModel);
  }
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)buttonSprite + 840LL))(
    buttonSprite,
    *(_QWORD *)(*(_QWORD *)buttonSprite + 848LL));
}


void MapButtonPrefab__SetEntryAnim(MapButtonPrefab_o *this, System_Action_o *endAction, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  struct UISprite_o *buttonSprite; // x8
  MapButtonPrefab_c *v13; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E01409 & 1) == 0 )
  {
    sub_1CE6700(&MapButtonPrefab_TypeInfo);
    byte_4E01409 = 1;
  }
  this->fields.animEndAction = endAction;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.animEndAction,
    (int32_t)endAction,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  buttonSprite = this->fields.buttonSprite;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  if ( !buttonSprite
    || (this->fields.outPos.fields.x = (float)((float)buttonSprite->fields.mWidth * 1.6) + 0.0,
        this->fields.outPos.fields.y = localPosition.fields.y + 0.0,
        this->fields.outPos.fields.z = 0.0,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_9:
    sub_1CE6958(transform, v11);
  }
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0);
  v13 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v13 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v13->static_fields->FUNC_ENTRY_ANIM,
    this->fields.inPos.fields.y / 500.0,
    0);
}


void MapButtonPrefab__SetMapNameLabel(
        MapButtonPrefab_o *this,
        bool isMapModel,
        int32_t currentMapId,
        int32_t currentMapLayerId,
        bool isForceFalse,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapNameLabel; // x24
  System_String_o *v12; // x0
  __int64 v13; // x1
  struct MapButtonEntity_o *mapButtonEntity; // x8
  int32_t targetMapId; // w25
  MapButtonPrefab_c *v16; // x0
  System_String_o *MAP_BUTTON_NAME_LABEL_KEY; // x24
  Il2CppObject *v18; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  System_String_o *v23; // x24
  struct MapButtonEntity_o *v24; // x8
  UILabel_o *v25; // x20
  System_String_o **v26; // x8
  int32_t v27; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *resultText; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E01406 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&MapButtonPrefab_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E01406 = 1;
  }
  resultText = 0;
  mapNameLabel = (UnityEngine_Object_o *)this->fields.mapNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (System_String_o *)UnityEngine_Object__op_Equality(mapNameLabel, 0, 0);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    mapButtonEntity = this->fields.mapButtonEntity;
    if ( !mapButtonEntity )
      goto LABEL_25;
    targetMapId = mapButtonEntity->fields.targetMapId;
    v16 = MapButtonPrefab_TypeInfo;
    if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
      v16 = MapButtonPrefab_TypeInfo;
    }
    MAP_BUTTON_NAME_LABEL_KEY = v16->static_fields->MAP_BUTTON_NAME_LABEL_KEY;
    v27 = targetMapId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v12 = System_String__Format(MAP_BUTTON_NAME_LABEL_KEY, v18, 0);
    r = this->fields.labelEffectColor.fields.r;
    g = this->fields.labelEffectColor.fields.g;
    b = this->fields.labelEffectColor.fields.b;
    a = this->fields.labelEffectColor.fields.a;
    v23 = v12;
    if ( isForceFalse )
      goto LABEL_16;
    if ( isMapModel )
    {
      v24 = this->fields.mapButtonEntity;
      if ( !v24 )
        goto LABEL_25;
      if ( v24->fields.layer != currentMapLayerId )
      {
LABEL_16:
        v25 = this->fields.mapNameLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = (System_String_o *)LocalizationManager__TryGet(&resultText, v23, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( v25 )
        {
          v26 = ((unsigned __int8)v12 & 1) != 0 ? &resultText : (System_String_o **)&StringLiteral_1/*""*/;
          UILabel__set_text(v25, *v26, 0);
          v12 = (System_String_o *)this->fields.mapNameLabel;
          if ( v12 )
          {
            v29.fields.r = r;
            v29.fields.g = g;
            v29.fields.b = b;
            v29.fields.a = a;
            UILabel__set_effectColor((UILabel_o *)v12, v29, 0);
            return;
          }
        }
LABEL_25:
        sub_1CE6958(v12, v13);
      }
    }
    else if ( targetMapId != currentMapId )
    {
      goto LABEL_16;
    }
    r = this->fields.currentLabelEffectColor.fields.r;
    g = this->fields.currentLabelEffectColor.fields.g;
    b = this->fields.currentLabelEffectColor.fields.b;
    a = this->fields.currentLabelEffectColor.fields.a;
    goto LABEL_16;
  }
}


void MapButtonPrefab__SetNext(MapButtonPrefab_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *mNextObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4E01408 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E01408 = 1;
  }
  mNextObj = (UnityEngine_Object_o *)this->fields.mNextObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNextObj, 0, 0) )
  {
    v7 = this->fields.mNextObj;
    if ( !v7 )
      goto LABEL_11;
    if ( UnityEngine_GameObject__get_activeSelf(v7, 0) != isDisp )
    {
      v7 = this->fields.mNextObj;
      if ( v7 )
      {
        UnityEngine_GameObject__SetActive(v7, isDisp, 0);
        return;
      }
LABEL_11:
      sub_1CE6958(v7, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void MapButtonPrefab__SetupButton(
        MapButtonPrefab_o *this,
        System_Collections_Generic_List_UIAtlas__o *mapAtlases,
        UIAtlas_o *commonUiAtlas,
        ScrTerminalMap_o *terminalMap,
        MapButtonEntity_o *mapButtonEntity,
        bool isMapButtonTop,
        bool isNew,
        const MethodInfo *method)
{
  bool v14; // w27
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  char v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  char v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  char v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v35; // x0
  Il2CppObject *v36; // x0
  struct UISprite_o **p_buttonSprite; // x19
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  char v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x1
  UIWidget_o *v45; // x0
  float v46; // s8
  float y; // s9
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isNew;
  if ( (byte_4E01404 & 1) == 0 )
  {
    sub_1CE6700(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
    sub_1CE6700(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    byte_4E01404 = 1;
  }
  this->fields.terminalMap = terminalMap;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.terminalMap,
    (int32_t)terminalMap,
    (int32_t)commonUiAtlas,
    (int32_t)terminalMap,
    (System_String_o *)mapButtonEntity,
    isMapButtonTop,
    isNew,
    (System_String_o *)method);
  this->fields.mapButtonEntity = mapButtonEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.mapButtonEntity,
    (int32_t)mapButtonEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.mapAtlases = mapAtlases;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.mapAtlases,
    (int32_t)mapAtlases,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.commonUiAtlas = commonUiAtlas;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.commonUiAtlas,
    (int32_t)commonUiAtlas,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.isNew = v14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_325D924 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v36 = GameObjectExtensions__SafeGetComponent_object_(
          v35,
          (const MethodInfo_325D924 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.buttonSprite = (struct UISprite_o *)v36;
  p_buttonSprite = &this->fields.buttonSprite;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_buttonSprite, (int32_t)v36, v38, v39, v40, v41, v42, v43);
  v45 = (UIWidget_o *)*p_buttonSprite;
  if ( !*p_buttonSprite )
    goto LABEL_9;
  UIWidget__set_pivot(v45, 8, 0);
  if ( isMapButtonTop )
  {
    if ( Component_object )
    {
      LODWORD(v46) = (unsigned int)UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
      center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
      y = center.fields.y;
      v49 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
      v49.fields.y = -y;
      v49.fields.x = v46;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, v49, 0);
      v45 = (UIWidget_o *)*p_buttonSprite;
      if ( *p_buttonSprite )
      {
        UIWidget__set_pivot(v45, 2, 0);
        return;
      }
    }
LABEL_9:
    sub_1CE6958(v45, v44);
  }
}


void MapButtonPrefab___FrameIn_b__36_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (GrandQuestFolderBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1CE66A4(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0);
}


void MapButtonPrefab___FrameOut_b__37_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (GrandQuestFolderBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1CE66A4(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0);
}


MapButtonEntity_o *MapButtonPrefab__get_Entity(MapButtonPrefab_o *this, const MethodInfo *method)
{
  return this->fields.mapButtonEntity;
}


bool MapButtonPrefab__get_IsNew(MapButtonPrefab_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}