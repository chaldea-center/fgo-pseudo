void __fastcall EventInfoUserEventPointControl___ctor(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  this->fields.isEnabledCondensedScale = 1;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void __fastcall EventInfoUserEventPointControl__Awake(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserEventPointMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4188D22 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4188D22 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct UserEventPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = Master_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userEventPointMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoUserEventPointControl__GetUserEventPoint(
        EventInfoUserEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_4188D23 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4188D23 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


void __fastcall EventInfoUserEventPointControl__Initialization(
        EventInfoUserEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventUiEntity = entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventInfoUserEventPointControl__Redisplay(
        EventInfoUserEventPointControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiValueEntity_array *eventUiValueEntityList; // x21
  __int64 v4; // x8
  EventInfoUserEventPointControl_o *v5; // x19
  __int64 v6; // x22
  int64_t v7; // x20
  EventUiValueEntity_o *v8; // x9
  const MethodInfo *v9; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v11; // x0

  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( eventUiValueEntityList )
  {
    v4 = *(_QWORD *)&eventUiValueEntityList->max_length;
    v5 = this;
    if ( (int)v4 < 1 )
    {
      v7 = 0LL;
    }
    else
    {
      v6 = 0LL;
      v7 = 0LL;
      do
      {
        if ( (unsigned int)v6 >= (unsigned int)v4 )
        {
          v11 = sub_B2C460(this);
          sub_B2C400(v11, 0LL);
        }
        v8 = eventUiValueEntityList->m_Items[v6];
        if ( !v8 )
LABEL_14:
          sub_B2C434(this, method);
        if ( v8->fields.type == 2 )
        {
          this = (EventInfoUserEventPointControl_o *)System_Int32__Parse(v8->fields.value, 0LL);
          eventUiEntity = v5->fields.eventUiEntity;
          if ( !eventUiEntity )
            goto LABEL_14;
          this = (EventInfoUserEventPointControl_o *)EventInfoUserEventPointControl__GetUserEventPoint(
                                                       v5,
                                                       eventUiEntity->fields.eventId,
                                                       (int32_t)this,
                                                       v9);
          v4 = *(_QWORD *)&eventUiValueEntityList->max_length;
          v7 += (int64_t)this;
        }
        ++v6;
      }
      while ( (int)v6 < (int)v4 );
    }
    EventInfoUserEventPointControl__SetPointLabel(v5, v7, v2);
  }
}


void __fastcall EventInfoUserEventPointControl__SetBgSprite(
        EventInfoUserEventPointControl_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v7; // x21
  __int64 v8; // x1
  struct UISprite_o *v9; // x0

  if ( (byte_4188D25 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, spriteName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4188D25 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(spriteName, 0LL) )
  {
    v7 = this->fields.bgSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v7, spriteName, 0LL);
    v9 = this->fields.bgSprite;
    if ( !v9 )
      sub_B2C434(0LL, v8);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
      v9,
      v9->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventInfoUserEventPointControl__SetPointLabel(
        EventInfoUserEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *pointLabel; // x21
  UILabel_o *v11; // x21
  System_String_o *v12; // x22
  BalanceConfig_c *v13; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188D24 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, point);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&System_Math_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    byte_4188D24 = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0LL, 0LL) )
  {
    v11 = this->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v13->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v18 = System_Math__Min_45012816(point, UserPointEventMax, 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v16 = System_String__Format(v12, v15, 0LL);
    if ( !v11 )
      goto LABEL_21;
    UILabel__set_text(v11, v16, 0LL);
    if ( !this->fields.isEnabledCondensedScale )
      return;
    v16 = (System_String_o *)this->fields.pointLabel;
    if ( !v16 )
LABEL_21:
      sub_B2C434(v16, v17);
    UILabel__SetCondensedScale((UILabel_o *)v16, this->fields.pointLabelWidth, 0LL);
  }
}


void __fastcall EventInfoUserEventPointControl__Setup(
        EventInfoUserEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x2

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)entitys,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    EventInfoUserEventPointControl__SetBgSprite(this, this->fields.bgSpriteName, v9);
    ((void (__fastcall *)(EventInfoUserEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SwitchSpotState.methodPtr);
  }
}