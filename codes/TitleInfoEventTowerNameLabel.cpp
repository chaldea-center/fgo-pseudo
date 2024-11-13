void __fastcall TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
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

  if ( (byte_4B14CAB & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTowerNameLabel_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24256/*"tower_img_title{0:00}"*/, v8, v9);
    byte_4B14CAB = 1;
  }
  TitleInfoEventTowerNameLabel_TypeInfo->static_fields->SPRITE_NAME_NAME = (struct System_String_o *)StringLiteral_24256/*"tower_img_title{0:00}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields,
    StringLiteral_24256/*"tower_img_title{0:00}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TitleInfoEventTowerNameLabel___ctor(TitleInfoEventTowerNameLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.towerNameLabelPosX = 0xC39D800042240000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTowerNameLabel_TowerData_o *__fastcall TitleInfoEventTowerNameLabel__GetTowerData(
        TitleInfoEventTowerNameLabel_o *this,
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
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Object_array *v30; // x19
  System_Func_object__bool__o *v31; // x20

  if ( (byte_4B14CAA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&towerId);
    sub_1BCA7E0(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___, v7, v8);
    sub_1BCA7E0(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__, v13, v14);
    sub_1BCA7E0(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__, v15, v16);
    sub_1BCA7E0(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo, v17, v18);
    byte_4B14CAA = 1;
  }
  v19 = sub_1BCAA2C(
          TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo,
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
                                         System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo,
                                         v21,
                                         v22,
                                         v23);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v19,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    0LL);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         towerEventInfoList,
                                                         (System_Func_T__bool__o *)v25,
                                                         (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v30 = *(System_Object_array **)&result->fields.NamePosition.fields.y;
    v31 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo,
                                           v27,
                                           v28,
                                           v29);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v19,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      0LL);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         v30,
                                                         (System_Func_T__bool__o *)v31,
                                                         (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerNameLabel__SetTowerNameLabel(
        TitleInfoEventTowerNameLabel_o *this,
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
  TitleInfoEventTowerNameLabel_TowerData_o *TowerData; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  __int64 v18; // x1
  TitleInfoEventTowerNameLabel_c *v19; // x8
  UISprite_o *v20; // x20
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x19
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14CA9 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&towerId);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&TitleInfoEventTowerNameLabel_TypeInfo, v11, v12);
    byte_4B14CA9 = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
    *(struct UnityEngine_Vector2_o *)&this->fields.towerNameLabelPosX = TowerData->fields.NamePosition;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_34331148(
    gameObject,
    this->fields.towerNameLabelPosX,
    this->fields.towerNameLabelPosY,
    0.0,
    0LL);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v15,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v19 = TitleInfoEventTowerNameLabel_TypeInfo;
  v20 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo, v18);
    v19 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v19->static_fields->SPRITE_NAME_NAME;
  v25 = towerId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = System_String__Format(SPRITE_NAME_NAME, v22, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
  AtlasManager__SetEventUI(v20, v24, 0LL);
}


void __fastcall TitleInfoEventTowerNameLabel_TowerData___ctor(
        TitleInfoEventTowerNameLabel_TowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerNameLabel_TowerEventInfo___ctor(
        TitleInfoEventTowerNameLabel_TowerEventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___ctor(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__0(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}