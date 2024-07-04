void __fastcall TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct TitleInfoEventTowerFloorLabel_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E1391 & 1) == 0 )
  {
    sub_1B00CCC(&TitleInfoEventTowerFloorLabel_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_23649/*"tower_img_floor"*/, v4);
    sub_1B00CCC(&StringLiteral_23650/*"tower_img_floor_clear"*/, v5);
    byte_48E1391 = 1;
  }
  TitleInfoEventTowerFloorLabel_TypeInfo->static_fields->SPRITE_NAME_FLOOR_CLEAR = (struct System_String_o *)StringLiteral_23650/*"tower_img_floor_clear"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields,
    StringLiteral_23650/*"tower_img_floor_clear"*/,
    v2,
    v3);
  v6 = StringLiteral_23649/*"tower_img_floor"*/;
  static_fields = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_23649/*"tower_img_floor"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_FLOOR, v6, v8, v9);
}


void __fastcall TitleInfoEventTowerFloorLabel___ctor(TitleInfoEventTowerFloorLabel_o *this, const MethodInfo *method)
{
  this->fields.towerFloorMoveRange = 300.0;
  *(_QWORD *)&this->fields.towerFloorInitPosX = 0xC38B800042D40000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTowerFloorLabel_TowerData_o *__fastcall TitleInfoEventTowerFloorLabel__GetTowerData(
        TitleInfoEventTowerFloorLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v17; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  System_Object_array *v19; // x19
  System_Func_object__bool__o *v20; // x20

  if ( (byte_48E1390 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___, v7);
    sub_1B00CCC(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo, v8);
    sub_1B00CCC(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo, v9);
    sub_1B00CCC(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__, v10);
    sub_1B00CCC(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__, v11);
    sub_1B00CCC(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo, v12);
    byte_48E1390 = 1;
  }
  v13 = sub_1B00F18(TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B00F28(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v17 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    0LL);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          towerEventInfoList,
                                                          (System_Func_T__bool__o *)v17,
                                                          (const MethodInfo_2D4F34C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v19 = *(System_Object_array **)&result->fields.InitPosition.fields.y;
    v20 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      0LL);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          v19,
                                                          (System_Func_T__bool__o *)v20,
                                                          (const MethodInfo_2D4F34C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerFloorLabel__SetFloorLabel(
        TitleInfoEventTowerFloorLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        int32_t towerFloorMax,
        int32_t floor,
        System_String_o *floorLabel,
        bool isTowerClear,
        bool fixedLabel,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v29; // x23
  UnityEngine_GameObject_o *v30; // x0
  float towerFloorInitPosX; // s8
  UnityEngine_GameObject_o *v32; // x24
  float v33; // s2
  UnityEngine_GameObject_o *v34; // x0
  float v35; // s1
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x23
  float v38; // s2
  Il2CppObject *Component_object; // x0
  TitleInfoEventTowerFloorLabel_c *v40; // x8
  UISprite_o *v41; // x19
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v43; // x20
  int v44; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_48E138F & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17);
    sub_1B00CCC(&int_TypeInfo, v18);
    sub_1B00CCC(&System_Math_TypeInfo, v19);
    sub_1B00CCC(&TitleInfoEventTowerFloorLabel_TypeInfo, v20);
    byte_48E138F = 1;
  }
  if ( floor >= towerFloorMax )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, isTowerClear, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v22 = this->fields.floorLabel;
    v44 = floor + 1;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v23, v24, v25);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v26, 0LL);
    if ( !v22 )
      goto LABEL_35;
    UILabel__set_text(v22, (System_String_o *)gameObject, 0LL);
    isTowerClear = 0;
  }
  if ( fixedLabel )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  else
  {
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v27);
    if ( TowerData )
    {
      v29 = TowerData;
      *(struct UnityEngine_Vector2_o *)&this->fields.towerFloorInitPosX = TowerData->fields.InitPosition;
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v32 = v30;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v33 = (float)System_Math__Min_61144584(floor, towerFloorMax - 1, 0LL);
      v34 = v32;
      v35 = (float)(v29->fields.FloorHeight * v33) + this->fields.towerFloorInitPosY;
    }
    else
    {
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v37 = v36;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v38 = (float)System_Math__Min_61144584(floor, towerFloorMax - 1, 0LL);
      v34 = v37;
      v35 = this->fields.towerFloorInitPosY
          + (float)((float)(this->fields.towerFloorMoveRange * v38) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_32535464(v34, towerFloorInitPosX, v35, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_35:
    sub_1B00F28(gameObject, *(_QWORD *)&eventId);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v40 = TitleInfoEventTowerFloorLabel_TypeInfo;
  v41 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
    v40 = TitleInfoEventTowerFloorLabel_TypeInfo;
  }
  p_SPRITE_NAME_FLOOR_CLEAR = &v40->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  if ( !isTowerClear )
    ++p_SPRITE_NAME_FLOOR_CLEAR;
  v43 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v41, v43, 0LL);
}


void __fastcall TitleInfoEventTowerFloorLabel_TowerData___ctor(
        TitleInfoEventTowerFloorLabel_TowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerFloorLabel_TowerEventInfo___ctor(
        TitleInfoEventTowerFloorLabel_TowerEventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___ctor(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__0(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B00F28(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B00F28(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}