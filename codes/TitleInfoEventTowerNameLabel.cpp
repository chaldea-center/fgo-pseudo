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

  if ( (byte_4B35C43 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoEventTowerNameLabel_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_24291/*"tower_img_title{0:00}"*/, v8);
    byte_4B35C43 = 1;
  }
  TitleInfoEventTowerNameLabel_TypeInfo->static_fields->SPRITE_NAME_NAME = (struct System_String_o *)StringLiteral_24291/*"tower_img_title{0:00}"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields,
    StringLiteral_24291/*"tower_img_title{0:00}"*/,
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
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  System_Object_array *v19; // x19
  System_Func_object__bool__o *v20; // x20

  if ( (byte_4B35C42 & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___, v7);
    sub_1BD3458(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo, v8);
    sub_1BD3458(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo, v9);
    sub_1BD3458(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__, v10);
    sub_1BD3458(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__, v11);
    sub_1BD3458(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo, v12);
    byte_4B35C42 = 1;
  }
  v13 = sub_1BD36A4(TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BD36B4(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v17 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    0LL);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         towerEventInfoList,
                                                         (System_Func_T__bool__o *)v17,
                                                         (const MethodInfo_2F1D1BC *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v19 = *(System_Object_array **)&result->fields.NamePosition.fields.y;
    v20 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      0LL);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         v19,
                                                         (System_Func_T__bool__o *)v20,
                                                         (const MethodInfo_2F1D1BC *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
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
  __int64 v8; // x1
  __int64 v9; // x1
  TitleInfoEventTowerNameLabel_TowerData_o *TowerData; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  TitleInfoEventTowerNameLabel_c *v18; // x8
  UISprite_o *v19; // x20
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x19
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B35C41 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1BD3458(&int_TypeInfo, v8);
    sub_1BD3458(&TitleInfoEventTowerNameLabel_TypeInfo, v9);
    byte_4B35C41 = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
    *(struct UnityEngine_Vector2_o *)&this->fields.towerNameLabelPosX = TowerData->fields.NamePosition;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_34381008(
    gameObject,
    this->fields.towerNameLabelPosX,
    this->fields.towerNameLabelPosY,
    0.0,
    0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    sub_1BD36B4(0LL, v13);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v12,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v18 = TitleInfoEventTowerNameLabel_TypeInfo;
  v19 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo);
    v18 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v18->static_fields->SPRITE_NAME_NAME;
  v23 = towerId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v15, v16, v17);
  v22 = System_String__Format(SPRITE_NAME_NAME, v21, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v19, v22, 0LL);
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
    sub_1BD36B4(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BD36B4(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}