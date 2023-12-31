void __fastcall MapButtonPrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v13; // x1
  struct MapButtonPrefab_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct MapButtonPrefab_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  MapButtonPrefab_c *v30; // x8
  struct MapButtonPrefab_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FB58F & 1) == 0 )
  {
    sub_B16FFC(&MapButtonPrefab_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16897, v8);
    sub_B16FFC(&StringLiteral_20292, v9);
    sub_B16FFC(&StringLiteral_6013, v10);
    sub_B16FFC(&StringLiteral_20291, v11);
    byte_40FB58F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapButtonPrefab_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_20291;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20291;
  sub_B16F98(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = MapButtonPrefab_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_20292;
  v14->MAP_CURRENT_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_20292;
  sub_B16F98((BattleServantConfConponent_o *)&v14->MAP_CURRENT_BUTTON_SP_NAME, v15, v16, v17, v18, v19, v20, v21);
  v22 = MapButtonPrefab_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_16897;
  v22->DEFAULT_BUTTON_SP = (struct System_String_o *)StringLiteral_16897;
  sub_B16F98((BattleServantConfConponent_o *)&v22->DEFAULT_BUTTON_SP, v23, v24, v25, v26, v27, v28, v29);
  v30 = MapButtonPrefab_TypeInfo;
  MapButtonPrefab_TypeInfo->static_fields->FRAME_IN_ANIM_DURATION = 0.2;
  v30->static_fields->FRAME_OUT_ANIM_DURATION = 0.1;
  v31 = v30->static_fields;
  v32 = (System_Int32_array **)StringLiteral_6013;
  v31->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6013;
  sub_B16F98((BattleServantConfConponent_o *)&v31->FUNC_ENTRY_ANIM, v32, v33, v34, v35, v36, v37, v38);
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_GRID_HEIGHT = 57.0;
}


void __fastcall MapButtonPrefab___ctor(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab_c *v3; // x0

  if ( (byte_40FB58E & 1) == 0 )
  {
    sub_B16FFC(&MapButtonPrefab_TypeInfo, method);
    byte_40FB58E = 1;
  }
  v3 = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
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
  sub_B16F98(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall MapButtonPrefab__FrameIn(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x20
  MapButtonPrefab_c *v8; // x8
  TweenWidth_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  float z; // w9
  UITweener_o *v15; // x20
  __int64 v16; // x8
  float v17; // w9
  EventDelegate_Callback_o *v18; // x21

  if ( (byte_40FB58B & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_MapButtonPrefab__FrameIn_b__31_0__, v3);
    sub_B16FFC(&MapButtonPrefab_TypeInfo, v4);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_40FB58B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v8 = MapButtonPrefab_TypeInfo;
  }
  v9 = UITweener__Begin_TweenWidth_(
         v7,
         v8->static_fields->FRAME_IN_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
LABEL_9:
    sub_B170D4();
  z = this->fields.outPos.fields.z;
  v15 = (UITweener_o *)v9;
  *(_QWORD *)&v9->fields.from = *(_QWORD *)&this->fields.outPos.fields.x;
  *(float *)&v9->fields.updateTable = z;
  v16 = *(_QWORD *)&this->fields.inPos.fields.x;
  v17 = this->fields.inPos.fields.z;
  v9->fields.style = 6;
  *(_QWORD *)(&v9->fields.updateTable + 4) = v16;
  *((float *)&v9->fields.mWidget + 1) = v17;
  v18 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v10, v11, v12, v13);
  EventDelegate_Callback___ctor(v18, (Il2CppObject *)this, Method_MapButtonPrefab__FrameIn_b__31_0__, 0LL);
  UITweener__SetOnFinished(v15, v18, 0LL);
}


void __fastcall MapButtonPrefab__FrameOut(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MapButtonPrefab_c *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenWidth_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  float z; // w9
  UITweener_o *v14; // x20
  __int64 v15; // x8
  float v16; // w9
  EventDelegate_Callback_o *v17; // x21

  if ( (byte_40FB58C & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_MapButtonPrefab__FrameOut_b__32_0__, v3);
    sub_B16FFC(&MapButtonPrefab_TypeInfo, v4);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_40FB58C = 1;
  }
  v6 = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v6 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    v6->static_fields->FUNC_ENTRY_ANIM,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = UITweener__Begin_TweenWidth_(
         gameObject,
         MapButtonPrefab_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_B170D4();
  z = this->fields.inPos.fields.z;
  v14 = (UITweener_o *)v8;
  *(_QWORD *)&v8->fields.from = *(_QWORD *)&this->fields.inPos.fields.x;
  *(float *)&v8->fields.updateTable = z;
  v15 = *(_QWORD *)&this->fields.outPos.fields.x;
  v16 = this->fields.outPos.fields.z;
  v8->fields.style = 2;
  *(_QWORD *)(&v8->fields.updateTable + 4) = v15;
  *((float *)&v8->fields.mWidget + 1) = v16;
  v17 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v9, v10, v11, v12);
  EventDelegate_Callback___ctor(v17, (Il2CppObject *)this, Method_MapButtonPrefab__FrameOut_b__32_0__, 0LL);
  UITweener__SetOnFinished(v14, v17, 0LL);
}


float __fastcall MapButtonPrefab__GetGridCellHeight(MapButtonPrefab_o *this, const MethodInfo *method)
{
  float result; // s0
  MapButtonPrefab_c *v4; // x0

  if ( (byte_40FB58D & 1) == 0 )
  {
    sub_B16FFC(&MapButtonPrefab_TypeInfo, method);
    byte_40FB58D = 1;
  }
  result = this->fields.cellHeight;
  if ( result <= 0.0 )
  {
    v4 = MapButtonPrefab_TypeInfo;
    if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
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
  ScrTerminalMap_o *terminalMap; // x0

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (terminalMap = this->fields.terminalMap) == 0LL )
    sub_B170D4();
  ScrTerminalMap__RequestMapChange(terminalMap, mapButtonEntity->fields.targetMapId, -1, -1, 0LL);
}


void __fastcall MapButtonPrefab__OnClickMapSlideButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8
  ScrTerminalMap_o *terminalMap; // x0

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (terminalMap = this->fields.terminalMap) == 0LL )
    sub_B170D4();
  ScrTerminalMap__RequestMapMove(terminalMap, mapButtonEntity->fields.layer, 0LL);
}


void __fastcall MapButtonPrefab__ResetIsNew(MapButtonPrefab_o *this, const MethodInfo *method)
{
  this->fields.isNew = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapButtonPrefab__SetBadge(MapButtonPrefab_o *this, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  NoticeNumberComponent_o **p_mNoticeNumber; // x20
  UnityEngine_Object_o *mNoticeNumber; // x22
  UnityEngine_GameObject_o *mNoticeNumberObj; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FB588 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&num);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB588 = 1;
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
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (NoticeNumberComponent_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
      Component_srcLineSprite,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !*p_mNoticeNumber )
LABEL_11:
    sub_B170D4();
  NoticeNumberComponent__SetNumber(*p_mNoticeNumber, num, 0LL);
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
  MapButtonPrefab_c *v13; // x0
  struct MapButtonPrefab_StaticFields *static_fields; // x8
  System_String_o *MAP_BUTTON_SP_NAME; // x24
  struct MapButtonEntity_o *mapButtonEntity; // x9
  struct MapButtonEntity_o *v17; // x8
  Il2CppObject *v18; // x0
  System_String_o *DEFAULT_BUTTON_SP; // x20
  UnityEngine_Object_o *UIAtlasBySpriteName; // x21
  MapButtonPrefab_c *v21; // x0
  UISprite_o *buttonSprite; // x0
  UISprite_o *v23; // x0
  struct UISprite_o *v24; // x0
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB587 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, isMapModel);
    sub_B16FFC(&MapButtonPrefab_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FB587 = 1;
  }
  v13 = MapButtonPrefab_TypeInfo;
  if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
    v13 = MapButtonPrefab_TypeInfo;
  }
  static_fields = v13->static_fields;
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
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = MapButtonPrefab_TypeInfo->static_fields;
    }
    MAP_BUTTON_SP_NAME = static_fields->MAP_CURRENT_BUTTON_SP_NAME;
  }
LABEL_17:
  v17 = this->fields.mapButtonEntity;
  if ( !v17 )
    goto LABEL_30;
  imageId = v17->fields.imageId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  DEFAULT_BUTTON_SP = System_String__Format(MAP_BUTTON_SP_NAME, v18, 0LL);
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
    v21 = MapButtonPrefab_TypeInfo;
    UIAtlasBySpriteName = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
    if ( (BYTE3(MapButtonPrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo);
      v21 = MapButtonPrefab_TypeInfo;
    }
    DEFAULT_BUTTON_SP = v21->static_fields->DEFAULT_BUTTON_SP;
  }
  buttonSprite = this->fields.buttonSprite;
  if ( !buttonSprite
    || (UISprite__set_atlas(buttonSprite, (UIAtlas_o *)UIAtlasBySpriteName, 0LL),
        (v23 = this->fields.buttonSprite) == 0LL)
    || (UISprite__set_spriteName(v23, DEFAULT_BUTTON_SP, 0LL), (v24 = this->fields.buttonSprite) == 0LL) )
  {
LABEL_30:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v24->klass->vtable._33_MakePixelPerfect.method)(
    v24,
    v24->klass->vtable._34_get_minWidth.methodPtr);
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
  float v11; // s1
  struct UISprite_o *buttonSprite; // x8
  UnityEngine_Transform_o *v13; // x0
  MapButtonPrefab_c *v14; // x0

  if ( (byte_40FB58A & 1) == 0 )
  {
    sub_B16FFC(&MapButtonPrefab_TypeInfo, endAction);
    byte_40FB58A = 1;
  }
  this->fields.animEndAction = endAction;
  sub_B16F98(
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
  *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  buttonSprite = this->fields.buttonSprite;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v11;
  this->fields.inPos.fields.z = 0.0;
  if ( !buttonSprite
    || (this->fields.outPos.fields.x = (float)((float)buttonSprite->fields.mWidth * 1.6) + 0.0,
        this->fields.outPos.fields.y = v11 + 0.0,
        this->fields.outPos.fields.z = 0.0,
        (v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localPosition(v13, this->fields.outPos, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MapButtonPrefab__SetNext(MapButtonPrefab_o *this, bool isDisp, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  UnityEngine_Object_o *mNextObj; // x21
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0

  v3 = isDisp;
  if ( (byte_40FB589 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40FB589 = 1;
  }
  mNextObj = (UnityEngine_Object_o *)this->fields.mNextObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNextObj, 0LL, 0LL) )
  {
    v6 = this->fields.mNextObj;
    if ( !v6 )
      goto LABEL_12;
    if ( ((UnityEngine_GameObject__get_activeSelf(v6, 0LL) ^ v3) & 1) != 0 )
    {
      v7 = this->fields.mNextObj;
      if ( v7 )
      {
        UnityEngine_GameObject__SetActive(v7, v3, 0LL);
        return;
      }
LABEL_12:
      sub_B170D4();
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_BoxCollider_o *Component_UIWidget; // x21
  UnityEngine_GameObject_o *v36; // x0
  UIWidget_o *v37; // x0
  UIWidget_o **p_buttonSprite; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UIWidget_o *buttonSprite; // x0
  float v46; // s8
  float y; // s9
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB586 & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___, mapAtlases);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v15);
    byte_40FB586 = 1;
  }
  this->fields.terminalMap = terminalMap;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.terminalMap,
    (System_Int32_array **)terminalMap,
    (System_String_array **)commonUiAtlas,
    (System_String_array **)terminalMap,
    (System_Boolean_array **)mapButtonEntity,
    (System_Int32_array **)isMapButtonTop,
    (System_Int32_array *)isNew,
    (System_Int32_array *)method);
  this->fields.mapButtonEntity = mapButtonEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mapButtonEntity,
    (System_Int32_array **)mapButtonEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.mapAtlases = mapAtlases;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mapAtlases,
    (System_Int32_array **)mapAtlases,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.commonUiAtlas = commonUiAtlas;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commonUiAtlas,
    (System_Int32_array **)commonUiAtlas,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.isNew = isNew;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (UnityEngine_BoxCollider_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      gameObject,
                                                      (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37 = GameObjectExtensions__SafeGetComponent_UIWidget_(
          v36,
          (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  p_buttonSprite = (UIWidget_o **)&this->fields.buttonSprite;
  this->fields.buttonSprite = (struct UISprite_o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.buttonSprite,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
  if ( !buttonSprite )
    goto LABEL_9;
  UIWidget__set_pivot(buttonSprite, 8, 0LL);
  if ( isMapButtonTop )
  {
    if ( Component_UIWidget )
    {
      LODWORD(v46) = (unsigned int)UnityEngine_BoxCollider__get_center(Component_UIWidget, 0LL);
      center = UnityEngine_BoxCollider__get_center(Component_UIWidget, 0LL);
      y = center.fields.y;
      v49 = UnityEngine_BoxCollider__get_center(Component_UIWidget, 0LL);
      v49.fields.y = -y;
      v49.fields.x = v46;
      UnityEngine_BoxCollider__set_center(Component_UIWidget, v49, 0LL);
      if ( *p_buttonSprite )
      {
        UIWidget__set_pivot(*p_buttonSprite, 2, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B170D4();
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
  sub_B16F98(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B16F98(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
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