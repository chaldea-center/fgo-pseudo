void __fastcall TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_41863AC & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventTowerNameLabel_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_22746/*"tower_img_title{0:00}"*/, v8);
    byte_41863AC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22746/*"tower_img_title{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22746/*"tower_img_title{0:00}"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall TitleInfoEventTowerNameLabel___ctor(TitleInfoEventTowerNameLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.towerNameLabelPosY = 0xC39D800042240000LL;
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
  __int64 v13; // x1
  __int64 v14; // x1
  TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  struct TitleInfoEventTowerNameLabel_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v21; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_41863AB & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___, v7);
    sub_B2C35C(&Method_System_Func_TitleInfoEventTowerNameLabel_TowerData__bool___ctor__, v8);
    sub_B2C35C(&Method_System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool___ctor__, v9);
    sub_B2C35C(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo, v10);
    sub_B2C35C(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo, v11);
    sub_B2C35C(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__, v12);
    sub_B2C35C(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__, v13);
    sub_B2C35C(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo, v14);
    byte_41863AB = 1;
  }
  v15 = (TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *)sub_B2C42C(TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
  TitleInfoEventTowerNameLabel___c__DisplayClass7_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  v15->fields.eventId = eventId;
  v15->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                         (System_Func_T__bool__o *)v19,
                                                         (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v21 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.NamePosition.fields.y;
    v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v22,
      (Il2CppObject *)v15,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_TitleInfoEventTowerNameLabel_TowerData__bool___ctor__);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         v21,
                                                         (System_Func_T__bool__o *)v22,
                                                         (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
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
  UISprite_o *Component_srcLineSprite; // x20
  TitleInfoEventTowerNameLabel_c *v15; // x8
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x19
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41863AA & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&TitleInfoEventTowerNameLabel_TypeInfo, v9);
    byte_41863AA = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
  {
    this->fields.towerNameLabelPosY = TowerData->fields.NamePosition.fields.x;
    *((_DWORD *)&this->fields.towerNameLabelPosY + 1) = LODWORD(TowerData->fields.NamePosition.fields.y);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_31326032(
    gameObject,
    this->fields.towerNameLabelPosY,
    *(&this->fields.towerNameLabelPosY + 1),
    0.0,
    0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    sub_B2C434(0LL, v13);
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v12,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v15 = TitleInfoEventTowerNameLabel_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerNameLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo);
    v15 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v15->static_fields->SPRITE_NAME_NAME;
  v19 = towerId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = System_String__Format(SPRITE_NAME_NAME, v17, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v18, 0LL);
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
    sub_B2C434(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}