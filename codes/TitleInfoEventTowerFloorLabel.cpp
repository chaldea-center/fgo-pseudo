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

  if ( (byte_49FAF37 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventTowerFloorLabel_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_23905/*"tower_img_floor"*/, v4);
    sub_1B640C8(&StringLiteral_23906/*"tower_img_floor_clear"*/, v5);
    byte_49FAF37 = 1;
  }
  TitleInfoEventTowerFloorLabel_TypeInfo->static_fields->SPRITE_NAME_FLOOR_CLEAR = (struct System_String_o *)StringLiteral_23906/*"tower_img_floor_clear"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields,
    StringLiteral_23906/*"tower_img_floor_clear"*/,
    v2,
    v3);
  v6 = StringLiteral_23905/*"tower_img_floor"*/;
  static_fields = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_23905/*"tower_img_floor"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_FLOOR, v6, v8, v9);
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
  __int64 v16; // x2
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v18; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Object_array *v22; // x19
  System_Func_object__bool__o *v23; // x20

  if ( (byte_49FAF36 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___, v7);
    sub_1B640C8(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo, v8);
    sub_1B640C8(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo, v9);
    sub_1B640C8(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__, v10);
    sub_1B640C8(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__, v11);
    sub_1B640C8(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo, v12);
    byte_49FAF36 = 1;
  }
  v13 = sub_1B64314(
          TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&towerId);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64324(v14);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v18 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    0LL);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          towerEventInfoList,
                                                          (System_Func_T__bool__o *)v18,
                                                          (const MethodInfo_2E2543C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v22 = *(System_Object_array **)&result->fields.InitPosition.fields.y;
    v23 = (System_Func_object__bool__o *)sub_1B64314(
                                           System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo,
                                           v20,
                                           v21);
    System_Func_object__bool____ctor(
      v23,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      0LL);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          v22,
                                                          (System_Func_T__bool__o *)v23,
                                                          (const MethodInfo_2E2543C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
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
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v26; // x23
  UnityEngine_GameObject_o *v27; // x0
  float towerFloorInitPosX; // s8
  UnityEngine_GameObject_o *v29; // x24
  float v30; // s2
  UnityEngine_GameObject_o *v31; // x0
  float v32; // s1
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x23
  float v35; // s2
  Il2CppObject *Component_object; // x0
  TitleInfoEventTowerFloorLabel_c *v37; // x8
  UISprite_o *v38; // x19
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v40; // x20
  int v41; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FAF35 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17);
    sub_1B640C8(&int_TypeInfo, v18);
    sub_1B640C8(&System_Math_TypeInfo, v19);
    sub_1B640C8(&TitleInfoEventTowerFloorLabel_TypeInfo, v20);
    byte_49FAF35 = 1;
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
    v41 = floor + 1;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v23, 0LL);
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
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v24);
    if ( TowerData )
    {
      v26 = TowerData;
      *(struct UnityEngine_Vector2_o *)&this->fields.towerFloorInitPosX = TowerData->fields.InitPosition;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v29 = v27;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v30 = (float)System_Math__Min_62194364(floor, towerFloorMax - 1, 0LL);
      v31 = v29;
      v32 = (float)(v26->fields.FloorHeight * v30) + this->fields.towerFloorInitPosY;
    }
    else
    {
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v34 = v33;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v35 = (float)System_Math__Min_62194364(floor, towerFloorMax - 1, 0LL);
      v31 = v34;
      v32 = this->fields.towerFloorInitPosY
          + (float)((float)(this->fields.towerFloorMoveRange * v35) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_33375460(v31, towerFloorInitPosX, v32, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_35:
    sub_1B64324(gameObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v37 = TitleInfoEventTowerFloorLabel_TypeInfo;
  v38 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
    v37 = TitleInfoEventTowerFloorLabel_TypeInfo;
  }
  p_SPRITE_NAME_FLOOR_CLEAR = &v37->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  if ( !isTowerClear )
    ++p_SPRITE_NAME_FLOOR_CLEAR;
  v40 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v38, v40, 0LL);
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
    sub_1B64324(this);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64324(this);
  return data->fields.TowerId == this->fields.towerId;
}