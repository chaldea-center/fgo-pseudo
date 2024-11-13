void __fastcall TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
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
  int64_t v12; // x1
  struct TitleInfoEventTowerFloorLabel_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B14CA8 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTowerFloorLabel_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24254/*"tower_img_floor"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_24255/*"tower_img_floor_clear"*/, v10, v11);
    byte_4B14CA8 = 1;
  }
  TitleInfoEventTowerFloorLabel_TypeInfo->static_fields->SPRITE_NAME_FLOOR_CLEAR = (struct System_String_o *)StringLiteral_24255/*"tower_img_floor_clear"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields,
    StringLiteral_24255/*"tower_img_floor_clear"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_24254/*"tower_img_floor"*/;
  static_fields = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_24254/*"tower_img_floor"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SPRITE_NAME_FLOOR, v12, v14, v15, v16, v17, v18, v19);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v25; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Object_array *v30; // x19
  System_Func_object__bool__o *v31; // x20

  if ( (byte_4B14CA7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&towerId);
    sub_1BCA7E0(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___, v7, v8);
    sub_1BCA7E0(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__, v13, v14);
    sub_1BCA7E0(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__, v15, v16);
    sub_1BCA7E0(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo, v17, v18);
    byte_4B14CA7 = 1;
  }
  v19 = sub_1BCAA2C(
          TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&towerId,
          method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  *(_DWORD *)(v19 + 16) = eventId;
  *(_DWORD *)(v19 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo,
                                         v21,
                                         v22,
                                         v23);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v19,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    0LL);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          towerEventInfoList,
                                                          (System_Func_T__bool__o *)v25,
                                                          (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v30 = *(System_Object_array **)&result->fields.InitPosition.fields.y;
    v31 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo,
                                           v27,
                                           v28,
                                           v29);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v19,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      0LL);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          v30,
                                                          (System_Func_T__bool__o *)v31,
                                                          (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v26; // x20
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v30; // x23
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  float towerFloorInitPosX; // s8
  UnityEngine_GameObject_o *v34; // x24
  float v35; // s2
  UnityEngine_GameObject_o *v36; // x0
  float v37; // s1
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x1
  UnityEngine_GameObject_o *v40; // x23
  float v41; // s2
  Il2CppObject *Component_object; // x0
  __int64 v43; // x1
  TitleInfoEventTowerFloorLabel_c *v44; // x8
  UISprite_o *v45; // x19
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v47; // x20
  int v48; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B14CA6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&towerId);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Math_TypeInfo, v21, v22);
    sub_1BCA7E0(&TitleInfoEventTowerFloorLabel_TypeInfo, v23, v24);
    byte_4B14CA6 = 1;
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
    v26 = this->fields.floorLabel;
    v48 = floor + 1;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v27, 0LL);
    if ( !v26 )
      goto LABEL_35;
    UILabel__set_text(v26, (System_String_o *)gameObject, 0LL);
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
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v28);
    if ( TowerData )
    {
      v30 = TowerData;
      *(struct UnityEngine_Vector2_o *)&this->fields.towerFloorInitPosX = TowerData->fields.InitPosition;
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v34 = v31;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v32);
      v35 = (float)System_Math__Min_63220524(floor, towerFloorMax - 1, 0LL);
      v36 = v34;
      v37 = (float)(v30->fields.FloorHeight * v35) + this->fields.towerFloorInitPosY;
    }
    else
    {
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v40 = v38;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v39);
      v41 = (float)System_Math__Min_63220524(floor, towerFloorMax - 1, 0LL);
      v36 = v40;
      v37 = this->fields.towerFloorInitPosY
          + (float)((float)(this->fields.towerFloorMoveRange * v41) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_34331044(v36, towerFloorInitPosX, v37, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_35:
    sub_1BCAA3C(gameObject, *(_QWORD *)&eventId);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v44 = TitleInfoEventTowerFloorLabel_TypeInfo;
  v45 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo, v43);
    v44 = TitleInfoEventTowerFloorLabel_TypeInfo;
  }
  p_SPRITE_NAME_FLOOR_CLEAR = &v44->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  if ( !isTowerClear )
    ++p_SPRITE_NAME_FLOOR_CLEAR;
  v47 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43);
  AtlasManager__SetEventUI(v45, v47, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}