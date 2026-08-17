void MapButtonPrefab___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct MapButtonPrefab_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct MapButtonPrefab_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  MissionNaviTransitionBoardItem_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  MissionNaviTransitionBoardItem_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_596D09E & 1) == 0 )
  {
    sub_2213A60(&MapButtonPrefab_TypeInfo);
    sub_2213A60(&StringLiteral_18207/*"btn_bg_16"*/);
    sub_2213A60(&StringLiteral_22510/*"map_button_{0}_c"*/);
    sub_2213A60(&StringLiteral_6342/*"EntryAnim"*/);
    sub_2213A60(&StringLiteral_22509/*"map_button_{0}"*/);
    sub_2213A60(&StringLiteral_8900/*"MAP_BUTTON_NAME_LABEL_{0}"*/);
    byte_596D09E = 1;
  }
  v7 = StringLiteral_22509/*"map_button_{0}"*/;
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_22509/*"map_button_{0}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)MapButtonPrefab_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_22510/*"map_button_{0}_c"*/;
  static_fields = MapButtonPrefab_TypeInfo->static_fields;
  static_fields->MAP_CURRENT_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_22510/*"map_button_{0}_c"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->MAP_CURRENT_BUTTON_SP_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_18207/*"btn_bg_16"*/;
  v17 = MapButtonPrefab_TypeInfo->static_fields;
  v17->DEFAULT_BUTTON_SP = (struct System_String_o *)StringLiteral_18207/*"btn_bg_16"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->DEFAULT_BUTTON_SP, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_6342/*"EntryAnim"*/;
  v25 = (MissionNaviTransitionBoardItem_o *)MapButtonPrefab_TypeInfo->static_fields;
  v25->fields.sortValue0 = StringLiteral_6342/*"EntryAnim"*/;
  v25 = (MissionNaviTransitionBoardItem_o *)((char *)v25 + 32);
  *(_QWORD *)&v25[-1].fields._BoardType_k__BackingField = 0x3DCCCCCD3E4CCCCDLL;
  sub_2213A04(v25, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_8900/*"MAP_BUTTON_NAME_LABEL_{0}"*/;
  v33 = (MissionNaviTransitionBoardItem_o *)MapButtonPrefab_TypeInfo->static_fields;
  v33->fields.sortValue1 = StringLiteral_8900/*"MAP_BUTTON_NAME_LABEL_{0}"*/;
  v33 = (MissionNaviTransitionBoardItem_o *)((char *)v33 + 48);
  v33[-1].fields._BoardType_k__BackingField = 1113849856;
  sub_2213A04(v33, v32, v34, v35, v36, v37, v38, v39);
}


void MapButtonPrefab___ctor(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapButtonPrefab_c *v4; // x0

  if ( (byte_596D09D & 1) == 0 )
  {
    sub_2213A60(&MapButtonPrefab_TypeInfo);
    byte_596D09D = 1;
  }
  v4 = MapButtonPrefab_TypeInfo;
  this->fields.labelEffectColor = (struct UnityEngine_Color_o)xmmword_E9CC90;
  this->fields.currentLabelEffectColor = (struct UnityEngine_Color_o)xmmword_E9CDE0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = MapButtonPrefab_TypeInfo;
  }
  this->fields.cellHeight = v4->static_fields->MAP_BUTTON_GRID_HEIGHT;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void MapButtonPrefab__EntryAnim(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab__FrameIn(this, method);
}


void MapButtonPrefab__ExecAnimEndAction(MapButtonPrefab_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_2213A04(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0);
}


void MapButtonPrefab__FrameIn(MapButtonPrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  MapButtonPrefab_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x20
  void *v10; // x9
  UnityEngine_GameObject_o *v11; // x20
  intptr_t v12; // x10
  EventDelegate_Callback_c *v13; // x0
  EventDelegate_Callback_o *v14; // x21

  if ( (byte_596D09A & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_MapButtonPrefab__FrameIn_b__36_0__);
    sub_2213A60(&MapButtonPrefab_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596D09A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = MapButtonPrefab_TypeInfo;
  v9 = v5;
  if ( !*(&MapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, v6, v7);
    v8 = MapButtonPrefab_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UITweener__Begin_object_(
                                             v9,
                                             v8->static_fields->FRAME_IN_ANIM_DURATION,
                                             (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !gameObject )
LABEL_8:
    sub_2213CDC(gameObject, v4);
  v10 = *(void **)&this->fields.outPos.fields.x;
  v11 = gameObject;
  *(float *)&gameObject[5].fields.m_CachedPtr = this->fields.outPos.fields.z;
  gameObject[5].monitor = v10;
  v12 = *(_QWORD *)&this->fields.inPos.fields.x;
  HIDWORD(gameObject[6].klass) = LODWORD(this->fields.inPos.fields.z);
  v13 = EventDelegate_Callback_TypeInfo;
  *(intptr_t *)((char *)&v11[5].fields.m_CachedPtr + 4) = v12;
  LODWORD(v11[1].monitor) = 6;
  v14 = (EventDelegate_Callback_o *)sub_2213CCC(v13);
  EventDelegate_Callback___ctor(v14, (Il2CppObject *)this, Method_MapButtonPrefab__FrameIn_b__36_0__, 0);
  UITweener__SetOnFinished((UITweener_o *)v11, v14, 0);
}


void MapButtonPrefab__FrameOut(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapButtonPrefab_c *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppClass *v8; // x9
  Il2CppObject *v9; // x20
  void *v10; // x10
  EventDelegate_Callback_c *v11; // x0
  EventDelegate_Callback_o *v12; // x21

  if ( (byte_596D09B & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_MapButtonPrefab__FrameOut_b__37_0__);
    sub_2213A60(&MapButtonPrefab_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596D09B = 1;
  }
  v4 = MapButtonPrefab_TypeInfo;
  if ( !*(&MapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, method, v2);
    v4 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83442996(
    (UnityEngine_MonoBehaviour_o *)this,
    v4->static_fields->FUNC_ENTRY_ANIM,
    0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = UITweener__Begin_object_(
         gameObject,
         MapButtonPrefab_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v6 )
    sub_2213CDC(0, v7);
  v8 = *(Il2CppClass **)&this->fields.inPos.fields.x;
  v9 = v6;
  *(float *)&v6[8].monitor = this->fields.inPos.fields.z;
  v6[8].klass = v8;
  v10 = *(void **)&this->fields.outPos.fields.x;
  HIDWORD(v6[9].klass) = LODWORD(this->fields.outPos.fields.z);
  v11 = EventDelegate_Callback_TypeInfo;
  *(void **)((char *)&v9[8].monitor + 4) = v10;
  LODWORD(v9[2].klass) = 2;
  v12 = (EventDelegate_Callback_o *)sub_2213CCC(v11);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)this, Method_MapButtonPrefab__FrameOut_b__37_0__, 0);
  UITweener__SetOnFinished((UITweener_o *)v9, v12, 0);
}


float MapButtonPrefab__GetGridCellHeight(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float result; // s0
  MapButtonPrefab_c *v5; // x0

  if ( (byte_596D09C & 1) == 0 )
  {
    sub_2213A60(&MapButtonPrefab_TypeInfo);
    byte_596D09C = 1;
  }
  result = this->fields.cellHeight;
  if ( result <= 0.0 )
  {
    v5 = MapButtonPrefab_TypeInfo;
    if ( !*(&MapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, method, v2);
      v5 = MapButtonPrefab_TypeInfo;
    }
    return v5->static_fields->MAP_BUTTON_GRID_HEIGHT;
  }
  return result;
}


void MapButtonPrefab__OnClickButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0 )
    sub_2213CDC(this, method);
  ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)this, mapButtonEntity->fields.targetMapId, -1, -1, 0);
}


void MapButtonPrefab__OnClickMapSlideButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0 )
    sub_2213CDC(this, method);
  ScrTerminalMap__RequestMapMove((ScrTerminalMap_o *)this, mapButtonEntity->fields.layer, 0);
}


void MapButtonPrefab__ResetIsNew(MapButtonPrefab_o *this, const MethodInfo *method)
{
  this->fields.isNew = 0;
}


// local variable allocation has failed, the output may be wrong!
void MapButtonPrefab__SetBadge(MapButtonPrefab_o *this, int32_t num, const MethodInfo *method)
{
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *mNoticeNumberObj; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596D097 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D097 = 1;
  }
  p_mNoticeNumber = &this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&num, method);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0) )
  {
    mNoticeNumberObj = this->fields.mNoticeNumberObj;
    if ( !mNoticeNumberObj )
      goto LABEL_10;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mNoticeNumberObj,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mNoticeNumber,
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
    sub_2213CDC(mNoticeNumberObj, v7);
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
  System_String_o *MAP_BUTTON_SP_NAME; // x20
  struct MapButtonEntity_o *mapButtonEntity; // x9
  struct MapButtonEntity_o *v15; // x8
  Il2CppObject *v16; // x0
  System_String_o *DEFAULT_BUTTON_SP; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *UIAtlasBySpriteName; // x21
  __int64 v21; // x2
  MapButtonPrefab_c *v22; // x0
  int32_t imageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596D095 & 1) == 0 )
  {
    sub_2213A60(&MapButtonPrefab_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D095 = 1;
  }
  buttonSprite = MapButtonPrefab_TypeInfo;
  if ( !*(&MapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, isMapModel, *(_QWORD *)&currentMapId);
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
    if ( !*((_DWORD *)buttonSprite + 57) )
    {
      j_il2cpp_runtime_class_init_0(buttonSprite, isMapModel, *(_QWORD *)&currentMapId);
      static_fields = MapButtonPrefab_TypeInfo->static_fields;
    }
    MAP_BUTTON_SP_NAME = static_fields->MAP_CURRENT_BUTTON_SP_NAME;
  }
LABEL_15:
  v15 = this->fields.mapButtonEntity;
  if ( !v15 )
    goto LABEL_26;
  imageId = v15->fields.imageId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &imageId);
  DEFAULT_BUTTON_SP = System_String__Format(MAP_BUTTON_SP_NAME, v16, 0);
  UIAtlasBySpriteName = (UnityEngine_Object_o *)UIAtlas__GetUIAtlasBySpriteName(
                                                  this->fields.mapAtlases,
                                                  DEFAULT_BUTTON_SP,
                                                  0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Equality(UIAtlasBySpriteName, 0, 0) )
  {
    v22 = MapButtonPrefab_TypeInfo;
    UIAtlasBySpriteName = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
    if ( !*(&MapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, isMapModel, v21);
      v22 = MapButtonPrefab_TypeInfo;
    }
    DEFAULT_BUTTON_SP = v22->static_fields->DEFAULT_BUTTON_SP;
  }
  buttonSprite = this->fields.buttonSprite;
  if ( !buttonSprite
    || (UISprite__set_atlas((UISprite_o *)buttonSprite, (UIAtlas_o *)UIAtlasBySpriteName, 0),
        (buttonSprite = this->fields.buttonSprite) == 0)
    || (UISprite__set_spriteName((UISprite_o *)buttonSprite, DEFAULT_BUTTON_SP, 0),
        (buttonSprite = this->fields.buttonSprite) == 0) )
  {
LABEL_26:
    sub_2213CDC(buttonSprite, isMapModel);
  }
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)buttonSprite + 840LL))(
    buttonSprite,
    *(_QWORD *)(*(_QWORD *)buttonSprite + 848LL));
}


void MapButtonPrefab__SetEntryAnim(MapButtonPrefab_o *this, System_Action_o *endAction, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  struct UISprite_o *buttonSprite; // x8
  int mWidth; // s0
  __int64 v14; // x1
  __int64 v15; // x2
  MapButtonPrefab_c *v16; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D099 & 1) == 0 )
  {
    sub_2213A60(&MapButtonPrefab_TypeInfo);
    byte_596D099 = 1;
  }
  this->fields.animEndAction = endAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction,
    (int32_t)endAction,
    (System_String_o *)method,
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
    || (mWidth = buttonSprite->fields.mWidth,
        this->fields.outPos.fields.z = 0.0,
        this->fields.outPos.fields.x = (float)((float)mWidth * 1.6) + 0.0,
        this->fields.outPos.fields.y = localPosition.fields.y + 0.0,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(transform, v11);
  }
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0);
  v16 = MapButtonPrefab_TypeInfo;
  if ( !*(&MapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, v14, v15);
    v16 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v16->static_fields->FUNC_ENTRY_ANIM,
    this->fields.inPos.fields.y / 500.0,
    0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  struct MapButtonEntity_o *mapButtonEntity; // x8
  int32_t targetMapId; // w25
  MapButtonPrefab_c *v17; // x0
  struct MapButtonPrefab_StaticFields *static_fields; // x8
  System_String_o *MAP_BUTTON_NAME_LABEL_KEY; // x24
  Il2CppObject *v20; // x0
  __int64 v21; // x2
  float r; // s8
  float g; // s9
  System_String_o *v24; // x24
  float b; // s10
  float a; // s11
  struct MapButtonEntity_o *v27; // x8
  UILabel_o *v28; // x20
  System_String_o **v29; // x8
  int32_t v30; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *resultText; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D096 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MapButtonPrefab_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D096 = 1;
  }
  mapNameLabel = (UnityEngine_Object_o *)this->fields.mapNameLabel;
  resultText = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isMapModel, *(_QWORD *)&currentMapId);
  v12 = (System_String_o *)UnityEngine_Object__op_Equality(mapNameLabel, 0, 0);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    mapButtonEntity = this->fields.mapButtonEntity;
    if ( !mapButtonEntity )
      goto LABEL_25;
    targetMapId = mapButtonEntity->fields.targetMapId;
    v17 = MapButtonPrefab_TypeInfo;
    if ( !*(&MapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, v13, v14);
      v17 = MapButtonPrefab_TypeInfo;
    }
    static_fields = v17->static_fields;
    v30 = targetMapId;
    MAP_BUTTON_NAME_LABEL_KEY = static_fields->MAP_BUTTON_NAME_LABEL_KEY;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v30);
    v12 = System_String__Format(MAP_BUTTON_NAME_LABEL_KEY, v20, 0);
    r = this->fields.labelEffectColor.fields.r;
    g = this->fields.labelEffectColor.fields.g;
    v24 = v12;
    b = this->fields.labelEffectColor.fields.b;
    a = this->fields.labelEffectColor.fields.a;
    if ( isForceFalse )
      goto LABEL_16;
    if ( isMapModel )
    {
      v27 = this->fields.mapButtonEntity;
      if ( !v27 )
        goto LABEL_25;
      if ( v27->fields.layer != currentMapLayerId )
      {
LABEL_16:
        v28 = this->fields.mapNameLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v21);
        v12 = (System_String_o *)LocalizationManager__TryGet(&resultText, v24, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( v28 )
        {
          v29 = ((unsigned __int8)v12 & 1) != 0 ? &resultText : (System_String_o **)&StringLiteral_1/*""*/;
          UILabel__set_text(v28, *v29, 0);
          v12 = (System_String_o *)this->fields.mapNameLabel;
          if ( v12 )
          {
            v32.fields.r = r;
            v32.fields.g = g;
            v32.fields.b = b;
            v32.fields.a = a;
            UILabel__set_effectColor((UILabel_o *)v12, v32, 0);
            return;
          }
        }
LABEL_25:
        sub_2213CDC(v12, v13);
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


// local variable allocation has failed, the output may be wrong!
void MapButtonPrefab__SetNext(MapButtonPrefab_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *mNextObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596D098 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D098 = 1;
  }
  mNextObj = (UnityEngine_Object_o *)this->fields.mNextObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
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
      sub_2213CDC(v7, v6);
    }
  }
}


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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  char v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  char v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  char v30; // w5
  bool v31; // w6
  bool v32; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v35; // x0
  Il2CppObject *v36; // x0
  struct UISprite_o **p_buttonSprite; // x19
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  char v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x1
  UIWidget_o *v45; // x0
  float v46; // s8
  float y; // s9
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isNew;
  if ( (byte_596D094 & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    byte_596D094 = 1;
  }
  this->fields.terminalMap = terminalMap;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.terminalMap,
    (int32_t)terminalMap,
    (System_String_o *)commonUiAtlas,
    (System_String_o *)terminalMap,
    (int32_t)mapButtonEntity,
    isMapButtonTop,
    isNew,
    (bool)method);
  this->fields.mapButtonEntity = mapButtonEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mapButtonEntity,
    (int32_t)mapButtonEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.mapAtlases = mapAtlases;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mapAtlases,
    (int32_t)mapAtlases,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.commonUiAtlas = commonUiAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commonUiAtlas,
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
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v36 = GameObjectExtensions__SafeGetComponent_object_(
          v35,
          (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.buttonSprite = (struct UISprite_o *)v36;
  p_buttonSprite = &this->fields.buttonSprite;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_buttonSprite, (int32_t)v36, v38, v39, v40, v41, v42, v43);
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
    sub_2213CDC(v45, v44);
  }
}


void MapButtonPrefab___FrameIn_b__36_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_2213A04(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0);
}


void MapButtonPrefab___FrameOut_b__37_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_2213A04(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
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