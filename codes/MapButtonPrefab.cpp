void __fastcall MapButtonPrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct MapButtonPrefab_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  struct MapButtonPrefab_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct MapButtonPrefab_StaticFields *v16; // x0
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49F9237 & 1) == 0 )
  {
    sub_1B640C8(&MapButtonPrefab_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_17407/*"btn_bg_16"*/, v4);
    sub_1B640C8(&StringLiteral_21190/*"map_button_{0}_c"*/, v5);
    sub_1B640C8(&StringLiteral_6019/*"EntryAnim"*/, v6);
    sub_1B640C8(&StringLiteral_21189/*"map_button_{0}"*/, v7);
    byte_49F9237 = 1;
  }
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_21189/*"map_button_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)MapButtonPrefab_TypeInfo->static_fields, StringLiteral_21189/*"map_button_{0}"*/, v2, v3);
  v8 = StringLiteral_21190/*"map_button_{0}_c"*/;
  static_fields = MapButtonPrefab_TypeInfo->static_fields;
  static_fields->MAP_CURRENT_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_21190/*"map_button_{0}_c"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->MAP_CURRENT_BUTTON_SP_NAME, v8, v10, v11);
  v12 = StringLiteral_17407/*"btn_bg_16"*/;
  v13 = MapButtonPrefab_TypeInfo->static_fields;
  v13->DEFAULT_BUTTON_SP = (struct System_String_o *)StringLiteral_17407/*"btn_bg_16"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->DEFAULT_BUTTON_SP, v12, v14, v15);
  v16 = MapButtonPrefab_TypeInfo->static_fields;
  *(_QWORD *)&v16->FRAME_IN_ANIM_DURATION = 0x3DCCCCCD3E4CCCCDLL;
  v17 = StringLiteral_6019/*"EntryAnim"*/;
  v16->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6019/*"EntryAnim"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->FUNC_ENTRY_ANIM, v17, v18, v19);
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_GRID_HEIGHT = 57.0;
}


void __fastcall MapButtonPrefab___ctor(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab_c *v3; // x0

  if ( (byte_49F9236 & 1) == 0 )
  {
    sub_1B640C8(&MapButtonPrefab_TypeInfo, method);
    byte_49F9236 = 1;
  }
  v3 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v3 = MapButtonPrefab_TypeInfo;
  }
  this->fields.cellHeight = v3->static_fields->MAP_BUTTON_GRID_HEIGHT;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall MapButtonPrefab__EntryAnim(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab__FrameIn(this, method);
}


void __fastcall MapButtonPrefab__ExecAnimEndAction(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (ServantStatusBattleListViewItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1B6406C(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall MapButtonPrefab__FrameIn(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  char *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  MapButtonPrefab_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  float z; // w8
  __int64 v13; // x9
  UITweener_o *v14; // x20
  EventDelegate_Callback_o *v15; // x21
  __int64 v16; // [xsp+0h] [xbp-40h]

  if ( (byte_49F9233 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_MapButtonPrefab__FrameIn_b__31_0__, v3);
    sub_1B640C8(&MapButtonPrefab_TypeInfo, v4);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_49F9233 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = MapButtonPrefab_TypeInfo;
  v9 = v7;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v8 = MapButtonPrefab_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v9,
                         v8->static_fields->FRAME_IN_ANIM_DURATION,
                         (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  v16 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
LABEL_8:
    sub_1B64324(gameObject);
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v16;
  z = this->fields.inPos.fields.z;
  v13 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v13;
  v14 = (UITweener_o *)gameObject;
  v15 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v10, v11);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)this, Method_MapButtonPrefab__FrameIn_b__31_0__, 0LL);
  UITweener__SetOnFinished(v14, v15, 0LL);
}


void __fastcall MapButtonPrefab__FrameOut(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MapButtonPrefab_c *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  float z; // w8
  void *v12; // x9
  UITweener_o *v13; // x20
  EventDelegate_Callback_o *v14; // x21
  Il2CppClass *v15; // [xsp+0h] [xbp-30h]

  if ( (byte_49F9234 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_MapButtonPrefab__FrameOut_b__32_0__, v3);
    sub_1B640C8(&MapButtonPrefab_TypeInfo, v4);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_49F9234 = 1;
  }
  v6 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v6 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    v6->static_fields->FUNC_ENTRY_ANIM,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = UITweener__Begin_object_(
         gameObject,
         MapButtonPrefab_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  v15 = *(Il2CppClass **)&this->fields.inPos.fields.x;
  if ( !v8 )
    sub_1B64324(0LL);
  *(float *)&v8[8].monitor = this->fields.inPos.fields.z;
  v8[8].klass = v15;
  z = this->fields.outPos.fields.z;
  v12 = *(void **)&this->fields.outPos.fields.x;
  LODWORD(v8[2].klass) = 2;
  *((float *)&v8[9].klass + 1) = z;
  *(void **)((char *)&v8[8].monitor + 4) = v12;
  v13 = (UITweener_o *)v8;
  v14 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v9, v10);
  EventDelegate_Callback___ctor(v14, (Il2CppObject *)this, Method_MapButtonPrefab__FrameOut_b__32_0__, 0LL);
  UITweener__SetOnFinished(v13, v14, 0LL);
}


float __fastcall MapButtonPrefab__GetGridCellHeight(MapButtonPrefab_o *this, const MethodInfo *method)
{
  float result; // s0
  MapButtonPrefab_c *v4; // x0

  if ( (byte_49F9235 & 1) == 0 )
  {
    sub_1B640C8(&MapButtonPrefab_TypeInfo, method);
    byte_49F9235 = 1;
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


void __fastcall MapButtonPrefab__OnClickButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0LL )
    sub_1B64324(this);
  ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)this, mapButtonEntity->fields.targetMapId, -1, -1, 0LL);
}


void __fastcall MapButtonPrefab__OnClickMapSlideButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0LL )
    sub_1B64324(this);
  ScrTerminalMap__RequestMapMove((ScrTerminalMap_o *)this, mapButtonEntity->fields.layer, 0LL);
}


void __fastcall MapButtonPrefab__ResetIsNew(MapButtonPrefab_o *this, const MethodInfo *method)
{
  this->fields.isNew = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapButtonPrefab__SetBadge(MapButtonPrefab_o *this, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *mNoticeNumberObj; // x0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49F9230 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&num);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F9230 = 1;
  }
  p_mNoticeNumber = &this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberObj = this->fields.mNoticeNumberObj;
    if ( !mNoticeNumberObj )
      goto LABEL_10;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mNoticeNumberObj,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mNoticeNumber, (int32_t)Component_object, v11, v12);
  }
  mNoticeNumberObj = (UnityEngine_GameObject_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
LABEL_10:
    sub_1B64324(mNoticeNumberObj);
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mNoticeNumberObj, num, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapButtonPrefab__SetButtonSprite(
        MapButtonPrefab_o *this,
        bool isMapModel,
        int32_t currentMapId,
        int32_t currentMapLayerId,
        bool isForceFalse,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
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

  if ( (byte_49F922F & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, isMapModel);
    sub_1B640C8(&MapButtonPrefab_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49F922F = 1;
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
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  DEFAULT_BUTTON_SP = System_String__Format(MAP_BUTTON_SP_NAME, v18, 0LL);
  UIAtlasBySpriteName = (UnityEngine_Object_o *)UIAtlas__GetUIAtlasBySpriteName(
                                                  this->fields.mapAtlases,
                                                  DEFAULT_BUTTON_SP,
                                                  0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(UIAtlasBySpriteName, 0LL, 0LL) )
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
    || (UISprite__set_atlas((UISprite_o *)buttonSprite, (UIAtlas_o *)UIAtlasBySpriteName, 0LL),
        (buttonSprite = this->fields.buttonSprite) == 0LL)
    || (UISprite__set_spriteName((UISprite_o *)buttonSprite, DEFAULT_BUTTON_SP, 0LL),
        (buttonSprite = this->fields.buttonSprite) == 0LL) )
  {
LABEL_26:
    sub_1B64324(buttonSprite);
  }
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)buttonSprite + 840LL))(
    buttonSprite,
    *(_QWORD *)(*(_QWORD *)buttonSprite + 848LL));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapButtonPrefab__SetEntryAnim(
        MapButtonPrefab_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_Transform_o *transform; // x0
  float v7; // s1
  struct UISprite_o *buttonSprite; // x8
  MapButtonPrefab_c *v9; // x0

  if ( (byte_49F9232 & 1) == 0 )
  {
    sub_1B640C8(&MapButtonPrefab_TypeInfo, endAction);
    byte_49F9232 = 1;
  }
  this->fields.animEndAction = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animEndAction, (int32_t)endAction, (int32_t)method, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  buttonSprite = this->fields.buttonSprite;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v7;
  this->fields.inPos.fields.z = 0.0;
  if ( !buttonSprite
    || (this->fields.outPos.fields.x = (float)((float)buttonSprite->fields.mWidth * 1.6) + 0.0,
        this->fields.outPos.fields.y = v7 + 0.0,
        this->fields.outPos.fields.z = 0.0,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(transform);
  }
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL);
  v9 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v9 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v9->static_fields->FUNC_ENTRY_ANIM,
    this->fields.inPos.fields.y / 500.0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapButtonPrefab__SetNext(MapButtonPrefab_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *mNextObj; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_49F9231 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49F9231 = 1;
  }
  mNextObj = (UnityEngine_Object_o *)this->fields.mNextObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNextObj, 0LL, 0LL) )
  {
    v6 = this->fields.mNextObj;
    if ( !v6 )
      goto LABEL_11;
    if ( UnityEngine_GameObject__get_activeSelf(v6, 0LL) != isDisp )
    {
      v6 = this->fields.mNextObj;
      if ( v6 )
      {
        UnityEngine_GameObject__SetActive(v6, isDisp, 0LL);
        return;
      }
LABEL_11:
      sub_1B64324(v6);
    }
  }
}


void __fastcall MapButtonPrefab__SetupButton(
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
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v24; // x0
  Il2CppObject *v25; // x0
  struct UISprite_o **p_buttonSprite; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  UIWidget_o *v29; // x0
  float v30; // s8
  float y; // s9
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isNew;
  if ( (byte_49F922E & 1) == 0 )
  {
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___, mapAtlases);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v15);
    byte_49F922E = 1;
  }
  this->fields.terminalMap = terminalMap;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.terminalMap,
    (int32_t)terminalMap,
    (int32_t)commonUiAtlas,
    (int32_t)terminalMap);
  this->fields.mapButtonEntity = mapButtonEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mapButtonEntity, (int32_t)mapButtonEntity, v16, v17);
  this->fields.mapAtlases = mapAtlases;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mapAtlases, (int32_t)mapAtlases, v18, v19);
  this->fields.commonUiAtlas = commonUiAtlas;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commonUiAtlas, (int32_t)commonUiAtlas, v20, v21);
  this->fields.isNew = v14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25 = GameObjectExtensions__SafeGetComponent_object_(
          v24,
          (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.buttonSprite = (struct UISprite_o *)v25;
  p_buttonSprite = &this->fields.buttonSprite;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_buttonSprite, (int32_t)v25, v27, v28);
  v29 = (UIWidget_o *)*p_buttonSprite;
  if ( !*p_buttonSprite )
    goto LABEL_9;
  UIWidget__set_pivot(v29, 8, 0LL);
  if ( isMapButtonTop )
  {
    if ( Component_object )
    {
      LODWORD(v30) = (unsigned int)UnityEngine_BoxCollider__get_center(
                                     (UnityEngine_BoxCollider_o *)Component_object,
                                     0LL);
      center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0LL);
      y = center.fields.y;
      v33 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0LL);
      v33.fields.y = -y;
      v33.fields.x = v30;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, v33, 0LL);
      v29 = (UIWidget_o *)*p_buttonSprite;
      if ( *p_buttonSprite )
      {
        UIWidget__set_pivot(v29, 2, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B64324(v29);
  }
}


void __fastcall MapButtonPrefab___FrameIn_b__31_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (ServantStatusBattleListViewItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1B6406C(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall MapButtonPrefab___FrameOut_b__32_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (ServantStatusBattleListViewItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1B6406C(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0LL);
}


MapButtonEntity_o *__fastcall MapButtonPrefab__get_Entity(MapButtonPrefab_o *this, const MethodInfo *method)
{
  return this->fields.mapButtonEntity;
}


bool __fastcall MapButtonPrefab__get_IsNew(MapButtonPrefab_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}