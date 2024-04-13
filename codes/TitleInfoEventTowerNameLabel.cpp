void __fastcall TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E6C34 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTowerNameLabel_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23051/*"tower_img_title{0:00}"*/, v8, v9, v10);
    byte_42E6C34 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_23051/*"tower_img_title{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23051/*"tower_img_title{0:00}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall TitleInfoEventTowerNameLabel___ctor(TitleInfoEventTowerNameLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.towerNameLabelPosY = 0xC39D800042240000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


TitleInfoEventTowerNameLabel_TowerData_o *__fastcall TitleInfoEventTowerNameLabel__GetTowerData(
        TitleInfoEventTowerNameLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  struct TitleInfoEventTowerNameLabel_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x20
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v37; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x20

  if ( (byte_42E6C33 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___, eventId, towerId, method);
    sub_B5D5C4(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_TitleInfoEventTowerNameLabel_TowerData__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__, v22, v23, v24);
    sub_B5D5C4(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__, v25, v26, v27);
    sub_B5D5C4(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo, v28, v29, v30);
    byte_42E6C33 = 1;
  }
  v31 = (TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *)sub_B5D694(TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
  TitleInfoEventTowerNameLabel___c__DisplayClass7_0___ctor(v31, 0LL);
  if ( !v31 )
    sub_B5D69C(v32, v33);
  v31->fields.eventId = eventId;
  v31->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v31,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                         (System_Func_T__bool__o *)v35,
                                                         (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v37 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.NamePosition.fields.y;
    v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v38,
      (Il2CppObject *)v31,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_TitleInfoEventTowerNameLabel_TowerData__bool___ctor__);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         v37,
                                                         (System_Func_T__bool__o *)v38,
                                                         (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
  }
  return result;
}


void __fastcall TitleInfoEventTowerNameLabel__SetTowerNameLabel(
        TitleInfoEventTowerNameLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  TitleInfoEventTowerNameLabel_TowerData_o *TowerData; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  UISprite_o *Component_srcLineSprite; // x20
  TitleInfoEventTowerNameLabel_c *v21; // x8
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x19
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E6C32 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, towerId, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7, v8, v9);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&TitleInfoEventTowerNameLabel_TypeInfo, v13, v14, v15);
    byte_42E6C32 = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
  {
    this->fields.towerNameLabelPosY = TowerData->fields.NamePosition.fields.x;
    *((_DWORD *)&this->fields.towerNameLabelPosY + 1) = LODWORD(TowerData->fields.NamePosition.fields.y);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_32430604(
    gameObject,
    this->fields.towerNameLabelPosY,
    *(&this->fields.towerNameLabelPosY + 1),
    0.0,
    0LL);
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v18 )
    sub_B5D69C(0LL, v19);
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v18,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v21 = TitleInfoEventTowerNameLabel_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerNameLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo);
    v21 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v21->static_fields->SPRITE_NAME_NAME;
  v25 = towerId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = System_String__Format(SPRITE_NAME_NAME, v23, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v24, 0LL);
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
    sub_B5D69C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}