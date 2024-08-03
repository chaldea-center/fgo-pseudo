void __fastcall TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FAF3A & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventTowerNameLabel_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_23907/*"tower_img_title{0:00}"*/, v4);
    byte_49FAF3A = 1;
  }
  TitleInfoEventTowerNameLabel_TypeInfo->static_fields->SPRITE_NAME_NAME = (struct System_String_o *)StringLiteral_23907/*"tower_img_title{0:00}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields,
    StringLiteral_23907/*"tower_img_title{0:00}"*/,
    v2,
    v3);
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
  __int64 v16; // x2
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v18; // x20
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Object_array *v22; // x19
  System_Func_object__bool__o *v23; // x20

  if ( (byte_49FAF39 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___, v7);
    sub_1B640C8(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo, v8);
    sub_1B640C8(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo, v9);
    sub_1B640C8(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__, v10);
    sub_1B640C8(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__, v11);
    sub_1B640C8(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo, v12);
    byte_49FAF39 = 1;
  }
  v13 = sub_1B64314(
          TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&towerId);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64324(v14);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v18 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    0LL);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         towerEventInfoList,
                                                         (System_Func_T__bool__o *)v18,
                                                         (const MethodInfo_2E2543C *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v22 = *(System_Object_array **)&result->fields.NamePosition.fields.y;
    v23 = (System_Func_object__bool__o *)sub_1B64314(
                                           System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo,
                                           v20,
                                           v21);
    System_Func_object__bool____ctor(
      v23,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      0LL);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         v22,
                                                         (System_Func_T__bool__o *)v23,
                                                         (const MethodInfo_2E2543C *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
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
  Il2CppObject *Component_object; // x0
  TitleInfoEventTowerNameLabel_c *v14; // x8
  UISprite_o *v15; // x20
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x19
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FAF38 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&TitleInfoEventTowerNameLabel_TypeInfo, v9);
    byte_49FAF38 = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
    *(struct UnityEngine_Vector2_o *)&this->fields.towerNameLabelPosX = TowerData->fields.NamePosition;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_33375564(
    gameObject,
    this->fields.towerNameLabelPosX,
    this->fields.towerNameLabelPosY,
    0.0,
    0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    sub_1B64324(0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v12,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v14 = TitleInfoEventTowerNameLabel_TypeInfo;
  v15 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo);
    v14 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v14->static_fields->SPRITE_NAME_NAME;
  v19 = towerId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = System_String__Format(SPRITE_NAME_NAME, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v15, v18, 0LL);
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
    sub_1B64324(this);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64324(this);
  return data->fields.TowerId == this->fields.towerId;
}