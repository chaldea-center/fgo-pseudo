void MapButtonPrefab___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct MapButtonPrefab_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct MapButtonPrefab_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct MapButtonPrefab_StaticFields *v11; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3FA7F & 1) == 0 )
  {
    sub_1C37058(&MapButtonPrefab_TypeInfo);
    sub_1C37058(&StringLiteral_17445/*"btn_bg_16"*/);
    sub_1C37058(&StringLiteral_21422/*"map_button_{0}_c"*/);
    sub_1C37058(&StringLiteral_6085/*"EntryAnim"*/);
    sub_1C37058(&StringLiteral_21421/*"map_button_{0}"*/);
    byte_4C3FA7F = 1;
  }
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_21421/*"map_button_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)MapButtonPrefab_TypeInfo->static_fields, StringLiteral_21421/*"map_button_{0}"*/, v1, v2);
  v3 = StringLiteral_21422/*"map_button_{0}_c"*/;
  static_fields = MapButtonPrefab_TypeInfo->static_fields;
  static_fields->MAP_CURRENT_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_21422/*"map_button_{0}_c"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->MAP_CURRENT_BUTTON_SP_NAME, v3, v5, v6);
  v7 = StringLiteral_17445/*"btn_bg_16"*/;
  v8 = MapButtonPrefab_TypeInfo->static_fields;
  v8->DEFAULT_BUTTON_SP = (struct System_String_o *)StringLiteral_17445/*"btn_bg_16"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->DEFAULT_BUTTON_SP, v7, v9, v10);
  v11 = MapButtonPrefab_TypeInfo->static_fields;
  *(_QWORD *)&v11->FRAME_IN_ANIM_DURATION = 0x3DCCCCCD3E4CCCCDLL;
  v12 = StringLiteral_6085/*"EntryAnim"*/;
  v11->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6085/*"EntryAnim"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->FUNC_ENTRY_ANIM, v12, v13, v14);
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_GRID_HEIGHT = 57.0;
}


void MapButtonPrefab___ctor(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab_c *v3; // x0

  if ( (byte_4C3FA7E & 1) == 0 )
  {
    sub_1C37058(&MapButtonPrefab_TypeInfo);
    byte_4C3FA7E = 1;
  }
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (CGThumbnailListItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1C36FFC(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0);
}


void MapButtonPrefab__FrameIn(MapButtonPrefab_o *this, const MethodInfo *method)
{
  char *gameObject; // x0
  UnityEngine_GameObject_o *v4; // x0
  MapButtonPrefab_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20
  float z; // w8
  __int64 v8; // x9
  UITweener_o *v9; // x20
  EventDelegate_Callback_o *v10; // x21
  __int64 v11; // [xsp+0h] [xbp-40h]

  if ( (byte_4C3FA7B & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_MapButtonPrefab__FrameIn_b__31_0__);
    sub_1C37058(&MapButtonPrefab_TypeInfo);
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    byte_4C3FA7B = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = MapButtonPrefab_TypeInfo;
  v6 = v4;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v5 = MapButtonPrefab_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v6,
                         v5->static_fields->FRAME_IN_ANIM_DURATION,
                         (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  v11 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
LABEL_8:
    sub_1C372B4(gameObject);
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v11;
  z = this->fields.inPos.fields.z;
  v8 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v8;
  v9 = (UITweener_o *)gameObject;
  v10 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v10, (Il2CppObject *)this, Method_MapButtonPrefab__FrameIn_b__31_0__, 0);
  UITweener__SetOnFinished(v9, v10, 0);
}


void MapButtonPrefab__FrameOut(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab_c *v3; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v5; // x0
  float z; // w8
  void *v7; // x9
  UITweener_o *v8; // x20
  EventDelegate_Callback_o *v9; // x21
  Il2CppClass *v10; // [xsp+0h] [xbp-30h]

  if ( (byte_4C3FA7C & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_MapButtonPrefab__FrameOut_b__32_0__);
    sub_1C37058(&MapButtonPrefab_TypeInfo);
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    byte_4C3FA7C = 1;
  }
  v3 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v3 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71251632(
    (UnityEngine_MonoBehaviour_o *)this,
    v3->static_fields->FUNC_ENTRY_ANIM,
    0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = UITweener__Begin_object_(
         gameObject,
         MapButtonPrefab_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  v10 = *(Il2CppClass **)&this->fields.inPos.fields.x;
  if ( !v5 )
    sub_1C372B4(0);
  *(float *)&v5[8].monitor = this->fields.inPos.fields.z;
  v5[8].klass = v10;
  z = this->fields.outPos.fields.z;
  v7 = *(void **)&this->fields.outPos.fields.x;
  LODWORD(v5[2].klass) = 2;
  *((float *)&v5[9].klass + 1) = z;
  *(void **)((char *)&v5[8].monitor + 4) = v7;
  v8 = (UITweener_o *)v5;
  v9 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)this, Method_MapButtonPrefab__FrameOut_b__32_0__, 0);
  UITweener__SetOnFinished(v8, v9, 0);
}


float MapButtonPrefab__GetGridCellHeight(MapButtonPrefab_o *this, const MethodInfo *method)
{
  float result; // s0
  MapButtonPrefab_c *v4; // x0

  if ( (byte_4C3FA7D & 1) == 0 )
  {
    sub_1C37058(&MapButtonPrefab_TypeInfo);
    byte_4C3FA7D = 1;
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
    sub_1C372B4(this);
  ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)this, mapButtonEntity->fields.targetMapId, -1, -1, 0);
}


void MapButtonPrefab__OnClickMapSlideButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0 )
    sub_1C372B4(this);
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
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *mNoticeNumberObj; // x0
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3FA78 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FA78 = 1;
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
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mNoticeNumber, (int32_t)Component_object, v10, v11);
  }
  mNoticeNumberObj = (UnityEngine_GameObject_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
LABEL_10:
    sub_1C372B4(mNoticeNumberObj);
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mNoticeNumberObj, num, v7);
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
  __int64 v6; // x6
  __int64 v7; // x7
  void *buttonSprite; // x0
  struct MapButtonPrefab_StaticFields *static_fields; // x8
  System_String_o *MAP_BUTTON_SP_NAME; // x22
  struct MapButtonEntity_o *mapButtonEntity; // x9
  struct MapButtonEntity_o *v17; // x8
  Il2CppObject *v18; // x0
  System_String_o *DEFAULT_BUTTON_SP; // x20
  UnityEngine_Object_o *UIAtlasBySpriteName; // x21
  MapButtonPrefab_c *v21; // x0
  int32_t imageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3FA77 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&MapButtonPrefab_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FA77 = 1;
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
  v17 = this->fields.mapButtonEntity;
  if ( !v17 )
    goto LABEL_26;
  imageId = v17->fields.imageId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(
                          int_TypeInfo,
                          &imageId,
                          *(_QWORD *)&currentMapId,
                          *(_QWORD *)&currentMapLayerId,
                          isForceFalse,
                          method,
                          v6,
                          v7);
  DEFAULT_BUTTON_SP = System_String__Format(MAP_BUTTON_SP_NAME, v18, 0);
  UIAtlasBySpriteName = (UnityEngine_Object_o *)UIAtlas__GetUIAtlasBySpriteName(
                                                  this->fields.mapAtlases,
                                                  DEFAULT_BUTTON_SP,
                                                  0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(UIAtlasBySpriteName, 0, 0) )
  {
    v21 = MapButtonPrefab_TypeInfo;
    UIAtlasBySpriteName = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
    if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
      v21 = MapButtonPrefab_TypeInfo;
    }
    DEFAULT_BUTTON_SP = v21->static_fields->DEFAULT_BUTTON_SP;
  }
  buttonSprite = this->fields.buttonSprite;
  if ( !buttonSprite
    || (UISprite__set_atlas((UISprite_o *)buttonSprite, (UIAtlas_o *)UIAtlasBySpriteName, 0),
        (buttonSprite = this->fields.buttonSprite) == 0)
    || (UISprite__set_spriteName((UISprite_o *)buttonSprite, DEFAULT_BUTTON_SP, 0),
        (buttonSprite = this->fields.buttonSprite) == 0) )
  {
LABEL_26:
    sub_1C372B4(buttonSprite);
  }
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)buttonSprite + 840LL))(
    buttonSprite,
    *(_QWORD *)(*(_QWORD *)buttonSprite + 848LL));
}


void MapButtonPrefab__SetEntryAnim(MapButtonPrefab_o *this, System_Action_o *endAction, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Transform_o *transform; // x0
  struct UISprite_o *buttonSprite; // x8
  MapButtonPrefab_c *v8; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FA7A & 1) == 0 )
  {
    sub_1C37058(&MapButtonPrefab_TypeInfo);
    byte_4C3FA7A = 1;
  }
  this->fields.animEndAction = endAction;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animEndAction, (int32_t)endAction, (int32_t)method, v3);
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
    sub_1C372B4(transform);
  }
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0);
  v8 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v8 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v8->static_fields->FUNC_ENTRY_ANIM,
    this->fields.inPos.fields.y / 500.0,
    0);
}


void MapButtonPrefab__SetNext(MapButtonPrefab_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *mNextObj; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C3FA79 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FA79 = 1;
  }
  mNextObj = (UnityEngine_Object_o *)this->fields.mNextObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNextObj, 0, 0) )
  {
    v6 = this->fields.mNextObj;
    if ( !v6 )
      goto LABEL_11;
    if ( UnityEngine_GameObject__get_activeSelf(v6, 0) != isDisp )
    {
      v6 = this->fields.mNextObj;
      if ( v6 )
      {
        UnityEngine_GameObject__SetActive(v6, isDisp, 0);
        return;
      }
LABEL_11:
      sub_1C372B4(v6);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v23; // x0
  Il2CppObject *v24; // x0
  struct UISprite_o **p_buttonSprite; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UIWidget_o *v28; // x0
  float v29; // s8
  float y; // s9
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isNew;
  if ( (byte_4C3FA76 & 1) == 0 )
  {
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    byte_4C3FA76 = 1;
  }
  this->fields.terminalMap = terminalMap;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.terminalMap,
    (int32_t)terminalMap,
    (int32_t)commonUiAtlas,
    (const MethodInfo *)terminalMap);
  this->fields.mapButtonEntity = mapButtonEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapButtonEntity, (int32_t)mapButtonEntity, v15, v16);
  this->fields.mapAtlases = mapAtlases;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapAtlases, (int32_t)mapAtlases, v17, v18);
  this->fields.commonUiAtlas = commonUiAtlas;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.commonUiAtlas, (int32_t)commonUiAtlas, v19, v20);
  this->fields.isNew = v14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v24 = GameObjectExtensions__SafeGetComponent_object_(
          v23,
          (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.buttonSprite = (struct UISprite_o *)v24;
  p_buttonSprite = &this->fields.buttonSprite;
  sub_1C36FFC((CGThumbnailListItem_o *)p_buttonSprite, (int32_t)v24, v26, v27);
  v28 = (UIWidget_o *)*p_buttonSprite;
  if ( !*p_buttonSprite )
    goto LABEL_9;
  UIWidget__set_pivot(v28, 8, 0);
  if ( isMapButtonTop )
  {
    if ( Component_object )
    {
      LODWORD(v29) = (unsigned int)UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
      center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
      y = center.fields.y;
      v32 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
      v32.fields.y = -y;
      v32.fields.x = v29;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, v32, 0);
      v28 = (UIWidget_o *)*p_buttonSprite;
      if ( *p_buttonSprite )
      {
        UIWidget__set_pivot(v28, 2, 0);
        return;
      }
    }
LABEL_9:
    sub_1C372B4(v28);
  }
}


void MapButtonPrefab___FrameIn_b__31_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (CGThumbnailListItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1C36FFC(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0);
}


void MapButtonPrefab___FrameOut_b__32_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (CGThumbnailListItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1C36FFC(p_animEndAction, 0, v2, v3);
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