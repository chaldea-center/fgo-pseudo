void __fastcall MapButtonPrefab___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v21; // x1
  struct MapButtonPrefab_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct MapButtonPrefab_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  MapButtonPrefab_c *v38; // x8
  struct MapButtonPrefab_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42E72E5 & 1) == 0 )
  {
    sub_B5D5C4(&MapButtonPrefab_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17172/*"btn_bg_16"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_20635/*"map_button_{0}_c"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6110/*"EntryAnim"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_20634/*"map_button_{0}"*/, v17, v18, v19);
    byte_42E72E5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapButtonPrefab_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_20634/*"map_button_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20634/*"map_button_{0}"*/;
  sub_B5D560(static_fields, v21, v2, v3, v4, v5, v6, v7);
  v22 = MapButtonPrefab_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_20635/*"map_button_{0}_c"*/;
  v22->MAP_CURRENT_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_20635/*"map_button_{0}_c"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->MAP_CURRENT_BUTTON_SP_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = MapButtonPrefab_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_17172/*"btn_bg_16"*/;
  v30->DEFAULT_BUTTON_SP = (struct System_String_o *)StringLiteral_17172/*"btn_bg_16"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v30->DEFAULT_BUTTON_SP, v31, v32, v33, v34, v35, v36, v37);
  v38 = MapButtonPrefab_TypeInfo;
  MapButtonPrefab_TypeInfo->static_fields->FRAME_IN_ANIM_DURATION = 0.2;
  v38->static_fields->FRAME_OUT_ANIM_DURATION = 0.1;
  v39 = v38->static_fields;
  v40 = (System_Int32_array **)StringLiteral_6110/*"EntryAnim"*/;
  v39->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6110/*"EntryAnim"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v39->FUNC_ENTRY_ANIM, v40, v41, v42, v43, v44, v45, v46);
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_GRID_HEIGHT = 57.0;
}


void __fastcall MapButtonPrefab___ctor(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MapButtonPrefab_c *v5; // x0

  if ( (byte_42E72E4 & 1) == 0 )
  {
    sub_B5D5C4(&MapButtonPrefab_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E72E4 = 1;
  }
  v5 = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v5 = MapButtonPrefab_TypeInfo;
  }
  this->fields.cellHeight = v5->static_fields->MAP_BUTTON_GRID_HEIGHT;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall MapButtonPrefab__EntryAnim(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab__FrameIn(this, method);
}


void __fastcall MapButtonPrefab__ExecAnimEndAction(MapButtonPrefab_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (BattleServantConfConponent_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_B5D560(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall MapButtonPrefab__FrameIn(MapButtonPrefab_o *this, const MethodInfo *method)
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
  char *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x20
  MapButtonPrefab_c *v17; // x8
  float z; // w9
  UITweener_o *v19; // x20
  __int64 v20; // x8
  float v21; // w9
  EventDelegate_Callback_o *v22; // x21

  if ( (byte_42E72E1 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MapButtonPrefab__FrameIn_b__31_0__, v5, v6, v7);
    sub_B5D5C4(&MapButtonPrefab_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v11, v12, v13);
    byte_42E72E1 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v17 = MapButtonPrefab_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_TweenWidth_(
                         v16,
                         v17->static_fields->FRAME_IN_ANIM_DURATION,
                         (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !gameObject )
LABEL_9:
    sub_B5D69C(gameObject, v15);
  z = this->fields.outPos.fields.z;
  v19 = (UITweener_o *)gameObject;
  *((_QWORD *)gameObject + 15) = *(_QWORD *)&this->fields.outPos.fields.x;
  *((float *)gameObject + 32) = z;
  v20 = *(_QWORD *)&this->fields.inPos.fields.x;
  v21 = this->fields.inPos.fields.z;
  *((_DWORD *)gameObject + 6) = 6;
  *(_QWORD *)(gameObject + 132) = v20;
  *((float *)gameObject + 35) = v21;
  v22 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v22, (Il2CppObject *)this, Method_MapButtonPrefab__FrameIn_b__31_0__, 0LL);
  UITweener__SetOnFinished(v19, v22, 0LL);
}


void __fastcall MapButtonPrefab__FrameOut(MapButtonPrefab_o *this, const MethodInfo *method)
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
  MapButtonPrefab_c *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenWidth_o *v16; // x0
  __int64 v17; // x1
  float z; // w9
  UITweener_o *v19; // x20
  __int64 v20; // x8
  float v21; // w9
  EventDelegate_Callback_o *v22; // x21

  if ( (byte_42E72E2 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MapButtonPrefab__FrameOut_b__32_0__, v5, v6, v7);
    sub_B5D5C4(&MapButtonPrefab_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v11, v12, v13);
    byte_42E72E2 = 1;
  }
  v14 = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v14 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    v14->static_fields->FUNC_ENTRY_ANIM,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16 = UITweener__Begin_TweenWidth_(
          gameObject,
          MapButtonPrefab_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v16 )
    sub_B5D69C(0LL, v17);
  z = this->fields.inPos.fields.z;
  v19 = (UITweener_o *)v16;
  *(_QWORD *)&v16->fields.from = *(_QWORD *)&this->fields.inPos.fields.x;
  *(float *)&v16->fields.updateTable = z;
  v20 = *(_QWORD *)&this->fields.outPos.fields.x;
  v21 = this->fields.outPos.fields.z;
  v16->fields.style = 2;
  *(_QWORD *)(&v16->fields.updateTable + 4) = v20;
  *((float *)&v16->fields.mWidget + 1) = v21;
  v22 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v22, (Il2CppObject *)this, Method_MapButtonPrefab__FrameOut_b__32_0__, 0LL);
  UITweener__SetOnFinished(v19, v22, 0LL);
}


float __fastcall MapButtonPrefab__GetGridCellHeight(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float result; // s0
  MapButtonPrefab_c *v6; // x0

  if ( (byte_42E72E3 & 1) == 0 )
  {
    sub_B5D5C4(&MapButtonPrefab_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E72E3 = 1;
  }
  result = this->fields.cellHeight;
  if ( result <= 0.0 )
  {
    v6 = MapButtonPrefab_TypeInfo;
    if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
      v6 = MapButtonPrefab_TypeInfo;
    }
    return v6->static_fields->MAP_BUTTON_GRID_HEIGHT;
  }
  return result;
}


void __fastcall MapButtonPrefab__OnClickButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0LL )
    sub_B5D69C(this, method);
  ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)this, mapButtonEntity->fields.targetMapId, -1, -1, 0LL);
}


void __fastcall MapButtonPrefab__OnClickMapSlideButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0LL )
    sub_B5D69C(this, method);
  ScrTerminalMap__RequestMapMove((ScrTerminalMap_o *)this, mapButtonEntity->fields.layer, 0LL);
}


void __fastcall MapButtonPrefab__ResetIsNew(MapButtonPrefab_o *this, const MethodInfo *method)
{
  this->fields.isNew = 0;
}


void __fastcall MapButtonPrefab__SetBadge(MapButtonPrefab_o *this, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x20
  UnityEngine_Object_o *mNoticeNumber; // x22
  __int64 v11; // x1
  UnityEngine_GameObject_o *mNoticeNumberObj; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E72DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, num, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E72DE = 1;
  }
  p_mNoticeNumber = &this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberObj = this->fields.mNoticeNumberObj;
    if ( !mNoticeNumberObj )
      goto LABEL_11;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       mNoticeNumberObj,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
      Component_srcLineSprite,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  mNoticeNumberObj = (UnityEngine_GameObject_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
LABEL_11:
    sub_B5D69C(mNoticeNumberObj, v11);
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mNoticeNumberObj, num, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *buttonSprite; // x0
  struct MapButtonPrefab_StaticFields *static_fields; // x8
  System_String_o *MAP_BUTTON_SP_NAME; // x24
  struct MapButtonEntity_o *mapButtonEntity; // x9
  struct MapButtonEntity_o *v21; // x8
  Il2CppObject *v22; // x0
  System_String_o *DEFAULT_BUTTON_SP; // x20
  UnityEngine_Object_o *UIAtlasBySpriteName; // x21
  MapButtonPrefab_c *v25; // x0
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E72DD & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, isMapModel, currentMapId, *(_QWORD *)&currentMapLayerId);
    sub_B5D5C4(&MapButtonPrefab_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E72DD = 1;
  }
  buttonSprite = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    buttonSprite = MapButtonPrefab_TypeInfo;
  }
  static_fields = (struct MapButtonPrefab_StaticFields *)*((_QWORD *)buttonSprite + 23);
  MAP_BUTTON_SP_NAME = static_fields->MAP_BUTTON_SP_NAME;
  if ( isForceFalse )
    goto LABEL_17;
  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !isMapModel )
  {
    if ( !mapButtonEntity )
      goto LABEL_30;
    if ( mapButtonEntity->fields.targetMapId != currentMapId )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( !mapButtonEntity )
    goto LABEL_30;
  if ( mapButtonEntity->fields.layer == currentMapLayerId )
  {
LABEL_13:
    if ( (*((_BYTE *)buttonSprite + 307) & 4) != 0 && !*((_DWORD *)buttonSprite + 56) )
    {
      j_il2cpp_runtime_class_init_0(buttonSprite);
      static_fields = MapButtonPrefab_TypeInfo->static_fields;
    }
    MAP_BUTTON_SP_NAME = static_fields->MAP_CURRENT_BUTTON_SP_NAME;
  }
LABEL_17:
  v21 = this->fields.mapButtonEntity;
  if ( !v21 )
    goto LABEL_30;
  imageId = v21->fields.imageId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  DEFAULT_BUTTON_SP = System_String__Format(MAP_BUTTON_SP_NAME, v22, 0LL);
  UIAtlasBySpriteName = (UnityEngine_Object_o *)UIAtlas__GetUIAtlasBySpriteName(
                                                  this->fields.mapAtlases,
                                                  DEFAULT_BUTTON_SP,
                                                  0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(UIAtlasBySpriteName, 0LL, 0LL) )
  {
    v25 = MapButtonPrefab_TypeInfo;
    UIAtlasBySpriteName = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
    if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
      v25 = MapButtonPrefab_TypeInfo;
    }
    DEFAULT_BUTTON_SP = v25->static_fields->DEFAULT_BUTTON_SP;
  }
  buttonSprite = this->fields.buttonSprite;
  if ( !buttonSprite
    || (UISprite__set_atlas((UISprite_o *)buttonSprite, (UIAtlas_o *)UIAtlasBySpriteName, 0LL),
        (buttonSprite = this->fields.buttonSprite) == 0LL)
    || (UISprite__set_spriteName((UISprite_o *)buttonSprite, DEFAULT_BUTTON_SP, 0LL),
        (buttonSprite = this->fields.buttonSprite) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(buttonSprite, isMapModel);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  float v12; // s1
  struct UISprite_o *buttonSprite; // x8
  MapButtonPrefab_c *v14; // x0

  if ( (byte_42E72E0 & 1) == 0 )
  {
    sub_B5D5C4(&MapButtonPrefab_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    byte_42E72E0 = 1;
  }
  this->fields.animEndAction = endAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animEndAction,
    (System_Int32_array **)endAction,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  buttonSprite = this->fields.buttonSprite;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v12;
  this->fields.inPos.fields.z = 0.0;
  if ( !buttonSprite
    || (this->fields.outPos.fields.x = (float)((float)buttonSprite->fields.mWidth * 1.6) + 0.0,
        this->fields.outPos.fields.y = v12 + 0.0,
        this->fields.outPos.fields.z = 0.0,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(transform, v11);
  }
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL);
  v14 = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v14 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v14->static_fields->FUNC_ENTRY_ANIM,
    this->fields.inPos.fields.y / 500.0,
    0LL);
}


void __fastcall MapButtonPrefab__SetNext(MapButtonPrefab_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL4 v4; // w19
  UnityEngine_Object_o *mNextObj; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  v4 = isDisp;
  if ( (byte_42E72DF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42E72DF = 1;
  }
  mNextObj = (UnityEngine_Object_o *)this->fields.mNextObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNextObj, 0LL, 0LL) )
  {
    v8 = this->fields.mNextObj;
    if ( !v8 )
      goto LABEL_12;
    if ( ((UnityEngine_GameObject__get_activeSelf(v8, 0LL) ^ v4) & 1) != 0 )
    {
      v8 = this->fields.mNextObj;
      if ( v8 )
      {
        UnityEngine_GameObject__SetActive(v8, v4, 0LL);
        return;
      }
LABEL_12:
      sub_B5D69C(v8, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_BoxCollider_o *Component_UIWidget; // x21
  UnityEngine_GameObject_o *v38; // x0
  UIWidget_o *v39; // x0
  struct UISprite_o **p_buttonSprite; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  UIWidget_o *buttonSprite; // x0
  float v49; // s8
  float y; // s9
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E72DC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_GameObjectExtensions_SafeGetComponent_BoxCollider___,
      (_DWORD)mapAtlases,
      (_DWORD)commonUiAtlas,
      terminalMap);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v15, v16, v17);
    byte_42E72DC = 1;
  }
  this->fields.terminalMap = terminalMap;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.terminalMap,
    (System_Int32_array **)terminalMap,
    (System_String_array **)commonUiAtlas,
    (System_String_array **)terminalMap,
    (System_Boolean_array **)mapButtonEntity,
    (System_Int32_array **)isMapButtonTop,
    (System_Int32_array *)isNew,
    (System_Int32_array *)method);
  this->fields.mapButtonEntity = mapButtonEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mapButtonEntity,
    (System_Int32_array **)mapButtonEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.mapAtlases = mapAtlases;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mapAtlases,
    (System_Int32_array **)mapAtlases,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.commonUiAtlas = commonUiAtlas;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commonUiAtlas,
    (System_Int32_array **)commonUiAtlas,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.isNew = isNew;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (UnityEngine_BoxCollider_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      gameObject,
                                                      (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v39 = GameObjectExtensions__SafeGetComponent_UIWidget_(
          v38,
          (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  p_buttonSprite = &this->fields.buttonSprite;
  this->fields.buttonSprite = (struct UISprite_o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.buttonSprite,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
  if ( !buttonSprite )
    goto LABEL_9;
  UIWidget__set_pivot(buttonSprite, 8, 0LL);
  if ( isMapButtonTop )
  {
    if ( Component_UIWidget )
    {
      LODWORD(v49) = (unsigned int)UnityEngine_BoxCollider__get_center(Component_UIWidget, 0LL);
      center = UnityEngine_BoxCollider__get_center(Component_UIWidget, 0LL);
      y = center.fields.y;
      v52 = UnityEngine_BoxCollider__get_center(Component_UIWidget, 0LL);
      v52.fields.y = -y;
      v52.fields.x = v49;
      UnityEngine_BoxCollider__set_center(Component_UIWidget, v52, 0LL);
      buttonSprite = (UIWidget_o *)*p_buttonSprite;
      if ( *p_buttonSprite )
      {
        UIWidget__set_pivot(buttonSprite, 2, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B5D69C(buttonSprite, v47);
  }
}


void __fastcall MapButtonPrefab___FrameIn_b__31_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (BattleServantConfConponent_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_B5D560(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall MapButtonPrefab___FrameOut_b__32_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (BattleServantConfConponent_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_B5D560(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
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