void __fastcall EventInfoUserMultiEventPointControl__Awake(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserEventPointMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4188D26 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4188D26 = 1;
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
int64_t __fastcall EventInfoUserMultiEventPointControl__GetUserEventPoint(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_4188D28 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4188D28 = 1;
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


void __fastcall EventInfoUserMultiEventPointControl__Initialization(
        EventInfoUserMultiEventPointControl_o *this,
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


void __fastcall EventInfoUserMultiEventPointControl__Redisplay(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  struct EventUiValueEntity_array *eventUiValueEntityList; // x23
  __int64 v3; // x8
  EventInfoUserMultiEventPointControl_o *v4; // x19
  __int64 v5; // x24
  int32_t v6; // w21
  int64_t v7; // x20
  EventUiValueEntity_o *v8; // x9
  const MethodInfo *v9; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t UserEventPoint; // x22
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  struct UISprite_array *bgSprites; // x8
  __int64 v15; // x0

  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( eventUiValueEntityList )
  {
    v3 = *(_QWORD *)&eventUiValueEntityList->max_length;
    if ( (int)v3 >= 1 )
    {
      v4 = this;
      v5 = 0LL;
      v6 = 0;
      v7 = 0LL;
      do
      {
        if ( (unsigned int)v5 >= (unsigned int)v3 )
        {
          v15 = sub_B2C460(this);
          sub_B2C400(v15, 0LL);
        }
        v8 = eventUiValueEntityList->m_Items[v5];
        if ( !v8 )
LABEL_14:
          sub_B2C434(this, method);
        if ( v8->fields.type == 2 )
        {
          this = (EventInfoUserMultiEventPointControl_o *)System_Int32__Parse(v8->fields.value, 0LL);
          eventUiEntity = v4->fields.eventUiEntity;
          if ( !eventUiEntity )
            goto LABEL_14;
          UserEventPoint = EventInfoUserMultiEventPointControl__GetUserEventPoint(
                             v4,
                             eventUiEntity->fields.eventId,
                             (int32_t)this,
                             v9);
          EventInfoUserMultiEventPointControl__SetPointLabel(v4, v6, UserEventPoint, v12);
          bgSprites = v4->fields.bgSprites;
          if ( !bgSprites )
            goto LABEL_14;
          method = (const MethodInfo *)(unsigned int)(v6 + 1);
          v7 += UserEventPoint;
          if ( v6 + 2 == bgSprites->max_length )
          {
            EventInfoUserMultiEventPointControl__SetPointLabel(v4, (int32_t)method, v7, v13);
            return;
          }
          v3 = *(_QWORD *)&eventUiValueEntityList->max_length;
          ++v6;
        }
        ++v5;
      }
      while ( (int)v5 < (int)v3 );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUserMultiEventPointControl__SetPointLabel(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t idx,
        int64_t point,
        const MethodInfo *method)
{
  EventInfoUserMultiEventPointControl_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UILabel_array *pointLabels; // x8
  int32_t max_length; // w9
  UILabel_o *v13; // x20
  System_String_o *v14; // x21
  BalanceConfig_c *v15; // x8
  int64_t UserPointEventMax; // x22
  Il2CppObject *v17; // x0
  __int64 v18; // x0
  int64_t v19; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4188D29 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&long_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&System_Math_TypeInfo, v9);
    this = (EventInfoUserMultiEventPointControl_o *)sub_B2C35C(&StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, v10);
    byte_4188D29 = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_20;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
    {
      v18 = sub_B2C460(this);
      sub_B2C400(v18, 0LL);
    }
    v13 = pointLabels->m_Items[idx];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v15 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v15->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v19 = System_Math__Min_45012816(point, UserPointEventMax, 0LL);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v14, v17, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)this, 0LL);
      return;
    }
LABEL_20:
    sub_B2C434(this, *(_QWORD *)&idx);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__Setup(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  EventInfoUserMultiEventPointControl___c_c *v14; // x0
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x21
  Il2CppObject *v17; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  EventInfoUserMultiEventPointControl___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v28; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_1; // x21
  Il2CppObject *v30; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  struct EventUiValueEntity_array *v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x1

  if ( (byte_4188D27 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___, v6);
    sub_B2C35C(&Method_System_Func_EventUiValueEntity__bool___ctor__, v7);
    sub_B2C35C(&Method_System_Func_EventUiValueEntity__int___ctor__, v8);
    sub_B2C35C(&System_Func_EventUiValueEntity__bool__TypeInfo, v9);
    sub_B2C35C(&System_Func_EventUiValueEntity__int__TypeInfo, v10);
    sub_B2C35C(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__, v11);
    sub_B2C35C(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__, v12);
    sub_B2C35C(&EventInfoUserMultiEventPointControl___c_TypeInfo, v13);
    byte_4188D27 = 1;
  }
  if ( entitys )
  {
    v14 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( (BYTE3(EventInfoUserMultiEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v14 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventUiValueEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__10_0,
        v17,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_EventUiValueEntity__bool___ctor__);
      v18 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v18->__9__10_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__10_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v18->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__10_0,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v26 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v27 = v25;
    if ( (BYTE3(EventInfoUserMultiEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v26 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    v28 = v26->static_fields;
    _9__10_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v28->__9__10_1;
    if ( !_9__10_1 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v28 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)v28->__9;
      _9__10_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_1,
        v30,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__,
        (const MethodInfo_27127B0 *)Method_System_Func_EventUiValueEntity__int___ctor__);
      v31 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v31->__9__10_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v31->__9__10_1,
        (System_Int32_array **)_9__10_1,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 v27,
                                                                 (System_Func_TSource__TKey__o *)_9__10_1,
                                                                 (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v39 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                               v38,
                                               (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_B2C434(v39, v40);
    this->fields.eventUiValueEntityList = v39;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)v39,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v47);
    ((void (__fastcall *)(EventInfoUserMultiEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SwitchSpotState.methodPtr);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__SetupSprite(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleSprite; // x20
  struct UISprite_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  UISprite_o *v7; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_array *bgSprites; // x8
  int max_length; // w22
  struct System_String_array *bgSpriteNames; // x9
  il2cpp_array_size_t v12; // w9
  struct System_String_array *v13; // x10
  __int64 v14; // x24
  UISprite_o *v15; // x20
  System_String_o *v16; // x21
  struct UISprite_array *v17; // x8
  __int64 v18; // x0

  if ( (byte_4188D2A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4188D2A = 1;
  }
  titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsNullOrEmpty = (struct UISprite_o *)UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct UISprite_o *)System_String__IsNullOrEmpty(this->fields.titleSpriteName, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      v7 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v7, titleSpriteName, 0LL);
      IsNullOrEmpty = this->fields.titleSprite;
      if ( !IsNullOrEmpty )
        goto LABEL_29;
      IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                             IsNullOrEmpty,
                                             IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
  bgSprites = this->fields.bgSprites;
  if ( !bgSprites )
    goto LABEL_29;
  max_length = bgSprites->max_length;
  if ( max_length >= 1 )
  {
    bgSpriteNames = this->fields.bgSpriteNames;
    if ( !bgSpriteNames )
      goto LABEL_29;
    if ( max_length == bgSpriteNames->max_length )
    {
      v12 = 0;
      do
      {
        if ( v12 >= bgSprites->max_length )
          goto LABEL_31;
        v13 = this->fields.bgSpriteNames;
        if ( !v13 )
          break;
        v14 = (int)v12;
        if ( v12 >= v13->max_length )
        {
LABEL_31:
          v18 = sub_B2C460(IsNullOrEmpty);
          sub_B2C400(v18, 0LL);
        }
        v15 = bgSprites->m_Items[v12];
        v16 = v13->m_Items[v12];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v15, v16, 0LL);
        v17 = this->fields.bgSprites;
        if ( !v17 )
          break;
        if ( (unsigned int)v14 >= v17->max_length )
          goto LABEL_31;
        IsNullOrEmpty = v17->m_Items[v14];
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                               IsNullOrEmpty,
                                               IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
        v12 = v14 + 1;
        if ( (int)v14 + 1 >= max_length )
          return;
        bgSprites = this->fields.bgSprites;
      }
      while ( bgSprites );
LABEL_29:
      sub_B2C434(IsNullOrEmpty, v6);
    }
  }
}


void __fastcall EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_4184B1A & 1) == 0 )
  {
    sub_B2C35C(&EventInfoUserMultiEventPointControl___c_TypeInfo, v1);
    byte_4184B1A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoUserMultiEventPointControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventInfoUserMultiEventPointControl___c___ctor(
        EventInfoUserMultiEventPointControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUserMultiEventPointControl___c___Setup_b__10_0(
        EventInfoUserMultiEventPointControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  return ent != 0LL;
}


int32_t __fastcall EventInfoUserMultiEventPointControl___c___Setup_b__10_1(
        EventInfoUserMultiEventPointControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B2C434(this, 0LL);
  return ent->fields.priority;
}