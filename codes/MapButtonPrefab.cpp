void __fastcall MapButtonPrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct MapButtonPrefab_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct MapButtonPrefab_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct MapButtonPrefab_StaticFields *v32; // x0
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B12F28 & 1) == 0 )
  {
    sub_1BCA7E0(&MapButtonPrefab_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17650/*"btn_bg_16"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_21506/*"map_button_{0}_c"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_6160/*"EntryAnim"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21505/*"map_button_{0}"*/, v14, v15);
    byte_4B12F28 = 1;
  }
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_21505/*"map_button_{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_21505/*"map_button_{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_21506/*"map_button_{0}_c"*/;
  static_fields = MapButtonPrefab_TypeInfo->static_fields;
  static_fields->MAP_CURRENT_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_21506/*"map_button_{0}_c"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->MAP_CURRENT_BUTTON_SP_NAME,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_17650/*"btn_bg_16"*/;
  v25 = MapButtonPrefab_TypeInfo->static_fields;
  v25->DEFAULT_BUTTON_SP = (struct System_String_o *)StringLiteral_17650/*"btn_bg_16"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->DEFAULT_BUTTON_SP, v24, v26, v27, v28, v29, v30, v31);
  v32 = MapButtonPrefab_TypeInfo->static_fields;
  *(_QWORD *)&v32->FRAME_IN_ANIM_DURATION = 0x3DCCCCCD3E4CCCCDLL;
  v33 = StringLiteral_6160/*"EntryAnim"*/;
  v32->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6160/*"EntryAnim"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v32->FUNC_ENTRY_ANIM, v33, v34, v35, v36, v37, v38, v39);
  MapButtonPrefab_TypeInfo->static_fields->MAP_BUTTON_GRID_HEIGHT = 57.0;
}


void __fastcall MapButtonPrefab___ctor(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapButtonPrefab_c *v4; // x0

  if ( (byte_4B12F27 & 1) == 0 )
  {
    sub_1BCA7E0(&MapButtonPrefab_TypeInfo, method, v2);
    byte_4B12F27 = 1;
  }
  v4 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, method);
    v4 = MapButtonPrefab_TypeInfo;
  }
  this->fields.cellHeight = v4->static_fields->MAP_BUTTON_GRID_HEIGHT;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall MapButtonPrefab__EntryAnim(MapButtonPrefab_o *this, const MethodInfo *method)
{
  MapButtonPrefab__FrameIn(this, method);
}


void __fastcall MapButtonPrefab__ExecAnimEndAction(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (PartyOrganizationUtility_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1BCA784(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall MapButtonPrefab__FrameIn(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  char *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  MapButtonPrefab_c *v14; // x8
  UnityEngine_GameObject_o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  float z; // w8
  __int64 v19; // x9
  UITweener_o *v20; // x20
  EventDelegate_Callback_o *v21; // x21
  __int64 v22; // [xsp+0h] [xbp-40h]

  if ( (byte_4B12F24 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MapButtonPrefab__FrameIn_b__31_0__, v4, v5);
    sub_1BCA7E0(&MapButtonPrefab_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v8, v9);
    byte_4B12F24 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = MapButtonPrefab_TypeInfo;
  v15 = v12;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, v13);
    v14 = MapButtonPrefab_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v15,
                         v14->static_fields->FRAME_IN_ANIM_DURATION,
                         (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v22 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
LABEL_8:
    sub_1BCAA3C(gameObject, v11);
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v22;
  z = this->fields.inPos.fields.z;
  v19 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v19;
  v20 = (UITweener_o *)gameObject;
  v21 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v11, v16, v17);
  EventDelegate_Callback___ctor(v21, (Il2CppObject *)this, Method_MapButtonPrefab__FrameIn_b__31_0__, 0LL);
  UITweener__SetOnFinished(v20, v21, 0LL);
}


void __fastcall MapButtonPrefab__FrameOut(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MapButtonPrefab_c *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  float z; // w8
  void *v17; // x9
  UITweener_o *v18; // x20
  EventDelegate_Callback_o *v19; // x21
  Il2CppClass *v20; // [xsp+0h] [xbp-30h]

  if ( (byte_4B12F25 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MapButtonPrefab__FrameOut_b__32_0__, v4, v5);
    sub_1BCA7E0(&MapButtonPrefab_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v8, v9);
    byte_4B12F25 = 1;
  }
  v10 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, method);
    v10 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    v10->static_fields->FUNC_ENTRY_ANIM,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = UITweener__Begin_object_(
          gameObject,
          MapButtonPrefab_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v20 = *(Il2CppClass **)&this->fields.inPos.fields.x;
  if ( !v12 )
    sub_1BCAA3C(0LL, v13);
  *(float *)&v12[8].monitor = this->fields.inPos.fields.z;
  v12[8].klass = v20;
  z = this->fields.outPos.fields.z;
  v17 = *(void **)&this->fields.outPos.fields.x;
  LODWORD(v12[2].klass) = 2;
  *((float *)&v12[9].klass + 1) = z;
  *(void **)((char *)&v12[8].monitor + 4) = v17;
  v18 = (UITweener_o *)v12;
  v19 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v13, v14, v15);
  EventDelegate_Callback___ctor(v19, (Il2CppObject *)this, Method_MapButtonPrefab__FrameOut_b__32_0__, 0LL);
  UITweener__SetOnFinished(v18, v19, 0LL);
}


float __fastcall MapButtonPrefab__GetGridCellHeight(MapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float result; // s0
  MapButtonPrefab_c *v5; // x0

  if ( (byte_4B12F26 & 1) == 0 )
  {
    sub_1BCA7E0(&MapButtonPrefab_TypeInfo, method, v2);
    byte_4B12F26 = 1;
  }
  result = this->fields.cellHeight;
  if ( result <= 0.0 )
  {
    v5 = MapButtonPrefab_TypeInfo;
    if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, method);
      v5 = MapButtonPrefab_TypeInfo;
    }
    return v5->static_fields->MAP_BUTTON_GRID_HEIGHT;
  }
  return result;
}


void __fastcall MapButtonPrefab__OnClickButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0LL )
    sub_1BCAA3C(this, method);
  ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)this, mapButtonEntity->fields.targetMapId, -1, -1, 0LL);
}


void __fastcall MapButtonPrefab__OnClickMapSlideButton(MapButtonPrefab_o *this, const MethodInfo *method)
{
  struct MapButtonEntity_o *mapButtonEntity; // x8

  mapButtonEntity = this->fields.mapButtonEntity;
  if ( !mapButtonEntity || (this = (MapButtonPrefab_o *)this->fields.terminalMap) == 0LL )
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x21
  UnityEngine_Object_o *mNoticeNumber; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *mNoticeNumberObj; // x0
  Il2CppObject *Component_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B12F21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&num, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B12F21 = 1;
  }
  p_mNoticeNumber = &this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&num);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberObj = this->fields.mNoticeNumberObj;
    if ( !mNoticeNumberObj )
      goto LABEL_10;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mNoticeNumberObj,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mNoticeNumber,
      (int64_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  mNoticeNumberObj = (UnityEngine_GameObject_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
LABEL_10:
    sub_1BCAA3C(mNoticeNumberObj, v9);
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mNoticeNumberObj, num, v10);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *buttonSprite; // x0
  struct MapButtonPrefab_StaticFields *static_fields; // x8
  System_String_o *MAP_BUTTON_SP_NAME; // x22
  struct MapButtonEntity_o *mapButtonEntity; // x9
  struct MapButtonEntity_o *v19; // x8
  Il2CppObject *v20; // x0
  System_String_o *DEFAULT_BUTTON_SP; // x20
  __int64 v22; // x1
  UnityEngine_Object_o *UIAtlasBySpriteName; // x21
  MapButtonPrefab_c *v24; // x0
  int32_t imageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B12F20 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, isMapModel, *(_QWORD *)&currentMapId);
    sub_1BCA7E0(&MapButtonPrefab_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B12F20 = 1;
  }
  buttonSprite = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, isMapModel);
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
      j_il2cpp_runtime_class_init_0(buttonSprite, isMapModel);
      static_fields = MapButtonPrefab_TypeInfo->static_fields;
    }
    MAP_BUTTON_SP_NAME = static_fields->MAP_CURRENT_BUTTON_SP_NAME;
  }
LABEL_15:
  v19 = this->fields.mapButtonEntity;
  if ( !v19 )
    goto LABEL_26;
  imageId = v19->fields.imageId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  DEFAULT_BUTTON_SP = System_String__Format(MAP_BUTTON_SP_NAME, v20, 0LL);
  UIAtlasBySpriteName = (UnityEngine_Object_o *)UIAtlas__GetUIAtlasBySpriteName(
                                                  this->fields.mapAtlases,
                                                  DEFAULT_BUTTON_SP,
                                                  0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Equality(UIAtlasBySpriteName, 0LL, 0LL) )
  {
    v24 = MapButtonPrefab_TypeInfo;
    UIAtlasBySpriteName = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
    if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, isMapModel);
      v24 = MapButtonPrefab_TypeInfo;
    }
    DEFAULT_BUTTON_SP = v24->static_fields->DEFAULT_BUTTON_SP;
  }
  buttonSprite = this->fields.buttonSprite;
  if ( !buttonSprite
    || (UISprite__set_atlas((UISprite_o *)buttonSprite, (UIAtlas_o *)UIAtlasBySpriteName, 0LL),
        (buttonSprite = this->fields.buttonSprite) == 0LL)
    || (UISprite__set_spriteName((UISprite_o *)buttonSprite, DEFAULT_BUTTON_SP, 0LL),
        (buttonSprite = this->fields.buttonSprite) == 0LL) )
  {
LABEL_26:
    sub_1BCAA3C(buttonSprite, isMapModel);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  float v12; // s1
  struct UISprite_o *buttonSprite; // x8
  __int64 v14; // x1
  MapButtonPrefab_c *v15; // x0

  if ( (byte_4B12F23 & 1) == 0 )
  {
    sub_1BCA7E0(&MapButtonPrefab_TypeInfo, endAction, method);
    byte_4B12F23 = 1;
  }
  this->fields.animEndAction = endAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animEndAction,
    (int64_t)endAction,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
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
LABEL_9:
    sub_1BCAA3C(transform, v11);
  }
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL);
  v15 = MapButtonPrefab_TypeInfo;
  if ( !MapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonPrefab_TypeInfo, v14);
    v15 = MapButtonPrefab_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v15->static_fields->FUNC_ENTRY_ANIM,
    this->fields.inPos.fields.y / 500.0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapButtonPrefab__SetNext(MapButtonPrefab_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *mNextObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B12F22 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B12F22 = 1;
  }
  mNextObj = (UnityEngine_Object_o *)this->fields.mNextObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( UnityEngine_Object__op_Inequality(mNextObj, 0LL, 0LL) )
  {
    v7 = this->fields.mNextObj;
    if ( !v7 )
      goto LABEL_11;
    if ( UnityEngine_GameObject__get_activeSelf(v7, 0LL) != isDisp )
    {
      v7 = this->fields.mNextObj;
      if ( v7 )
      {
        UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
        return;
      }
LABEL_11:
      sub_1BCAA3C(v7, v6);
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
  bool v14; // w27
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v37; // x0
  Il2CppObject *v38; // x0
  struct UISprite_o **p_buttonSprite; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  UIWidget_o *v47; // x0
  float v48; // s8
  float y; // s9
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isNew;
  if ( (byte_4B12F1F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___, mapAtlases, commonUiAtlas);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v15, v16);
    byte_4B12F1F = 1;
  }
  this->fields.terminalMap = terminalMap;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.terminalMap,
    (int64_t)terminalMap,
    (int64_t)commonUiAtlas,
    (int32_t)terminalMap,
    (System_String_o *)mapButtonEntity,
    (BattleSetupInfo_o *)isMapButtonTop,
    (FollowerInfo_o *)isNew,
    (PartyListViewItem_o *)method);
  this->fields.mapButtonEntity = mapButtonEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mapButtonEntity,
    (int64_t)mapButtonEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.mapAtlases = mapAtlases;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mapAtlases, (int64_t)mapAtlases, v23, v24, v25, v26, v27, v28);
  this->fields.commonUiAtlas = commonUiAtlas;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commonUiAtlas,
    (int64_t)commonUiAtlas,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.isNew = v14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v38 = GameObjectExtensions__SafeGetComponent_object_(
          v37,
          (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.buttonSprite = (struct UISprite_o *)v38;
  p_buttonSprite = &this->fields.buttonSprite;
  sub_1BCA784((PartyOrganizationUtility_o *)p_buttonSprite, (int64_t)v38, v40, v41, v42, v43, v44, v45);
  v47 = (UIWidget_o *)*p_buttonSprite;
  if ( !*p_buttonSprite )
    goto LABEL_9;
  UIWidget__set_pivot(v47, 8, 0LL);
  if ( isMapButtonTop )
  {
    if ( Component_object )
    {
      LODWORD(v48) = (unsigned int)UnityEngine_BoxCollider__get_center(
                                     (UnityEngine_BoxCollider_o *)Component_object,
                                     0LL);
      center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0LL);
      y = center.fields.y;
      v51 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0LL);
      v51.fields.y = -y;
      v51.fields.x = v48;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, v51, 0LL);
      v47 = (UIWidget_o *)*p_buttonSprite;
      if ( *p_buttonSprite )
      {
        UIWidget__set_pivot(v47, 2, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1BCAA3C(v47, v46);
  }
}


void __fastcall MapButtonPrefab___FrameIn_b__31_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (PartyOrganizationUtility_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1BCA784(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall MapButtonPrefab___FrameOut_b__32_0(MapButtonPrefab_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (PartyOrganizationUtility_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1BCA784(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
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