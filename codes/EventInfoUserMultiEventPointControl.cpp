void __fastcall EventInfoUserMultiEventPointControl__Awake(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  struct UserEventPointMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438C637 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438C637 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct UserEventPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = Master_WarQuestSelectionMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userEventPointMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


int64_t __fastcall EventInfoUserMultiEventPointControl__GetUserEventPoint(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_438C639 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438C639 = 1;
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
  sub_B77560(
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
          v15 = sub_B776C8(this);
          sub_B77668(v15, 0LL);
        }
        v8 = eventUiValueEntityList->m_Items[v5];
        if ( !v8 )
LABEL_14:
          sub_B7769C(this, method);
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
  struct UILabel_array *pointLabels; // x8
  int32_t max_length; // w9
  UILabel_o *v9; // x20
  System_String_o *v10; // x21
  BalanceConfig_c *v11; // x8
  int64_t UserPointEventMax; // x22
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  __int64 v15; // x0
  int64_t v16; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_438C63A & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    this = (EventInfoUserMultiEventPointControl_o *)sub_B775C4(&StringLiteral_5795/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_438C63A = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_20;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
    {
      v15 = sub_B776C8(this);
      sub_B77668(v15, 0LL);
    }
    v9 = pointLabels->m_Items[idx];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5795/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v11->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Min_45851612(point, UserPointEventMax, 0LL);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16, v13);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v10, v14, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)this, 0LL);
      return;
    }
LABEL_20:
    sub_B7769C(this, *(_QWORD *)&idx);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__Setup(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  EventInfoUserMultiEventPointControl___c_c *v5; // x0
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x21
  Il2CppObject *v8; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  EventInfoUserMultiEventPointControl___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v19; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_1; // x21
  Il2CppObject *v21; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct EventUiValueEntity_array *v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1

  if ( (byte_438C638 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    sub_B775C4(&Method_System_Func_EventUiValueEntity__bool___ctor__);
    sub_B775C4(&Method_System_Func_EventUiValueEntity__int___ctor__);
    sub_B775C4(&System_Func_EventUiValueEntity__bool__TypeInfo);
    sub_B775C4(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_B775C4(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__);
    sub_B775C4(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__);
    sub_B775C4(&EventInfoUserMultiEventPointControl___c_TypeInfo);
    byte_438C638 = 1;
  }
  if ( entitys )
  {
    v5 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( (BYTE3(EventInfoUserMultiEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v5 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_EventUiValueEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__10_0,
        v8,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_EventUiValueEntity__bool___ctor__);
      v9 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v9->__9__10_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__10_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__10_0,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v17 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v18 = v16;
    if ( (BYTE3(EventInfoUserMultiEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v17 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    v19 = v17->static_fields;
    _9__10_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v19->__9__10_1;
    if ( !_9__10_1 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v19 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)v19->__9;
      _9__10_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_1,
        v21,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__,
        (const MethodInfo_29E9E70 *)Method_System_Func_EventUiValueEntity__int___ctor__);
      v22 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v22->__9__10_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v22->__9__10_1,
        (System_Int32_array **)_9__10_1,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 v18,
                                                                 (System_Func_TSource__TKey__o *)_9__10_1,
                                                                 (const MethodInfo_1D34DBC *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v30 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                               v29,
                                               (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_B7769C(v30, v31);
    this->fields.eventUiValueEntityList = v30;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)v30,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v38);
    ((void (__fastcall *)(EventInfoUserMultiEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SwitchSpotState.methodPtr);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__SetupSprite(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleSprite; // x20
  struct UISprite_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  UISprite_o *v6; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_array *bgSprites; // x8
  int max_length; // w22
  struct System_String_array *bgSpriteNames; // x9
  il2cpp_array_size_t v11; // w9
  struct System_String_array *v12; // x10
  __int64 v13; // x24
  UISprite_o *v14; // x20
  System_String_o *v15; // x21
  struct UISprite_array *v16; // x8
  __int64 v17; // x0

  if ( (byte_438C63B & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C63B = 1;
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
      v6 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v6, titleSpriteName, 0LL);
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
      v11 = 0;
      do
      {
        if ( v11 >= bgSprites->max_length )
          goto LABEL_31;
        v12 = this->fields.bgSpriteNames;
        if ( !v12 )
          break;
        v13 = (int)v11;
        if ( v11 >= v12->max_length )
        {
LABEL_31:
          v17 = sub_B776C8(IsNullOrEmpty);
          sub_B77668(v17, 0LL);
        }
        v14 = bgSprites->m_Items[v11];
        v15 = v12->m_Items[v11];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v14, v15, 0LL);
        v16 = this->fields.bgSprites;
        if ( !v16 )
          break;
        if ( (unsigned int)v13 >= v16->max_length )
          goto LABEL_31;
        IsNullOrEmpty = v16->m_Items[v13];
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                               IsNullOrEmpty,
                                               IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
        v11 = v13 + 1;
        if ( (int)v13 + 1 >= max_length )
          return;
        bgSprites = this->fields.bgSprites;
      }
      while ( bgSprites );
LABEL_29:
      sub_B7769C(IsNullOrEmpty, v5);
    }
  }
}


void __fastcall EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_4388681 & 1) == 0 )
  {
    sub_B775C4(&EventInfoUserMultiEventPointControl___c_TypeInfo);
    byte_4388681 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventInfoUserMultiEventPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return ent->fields.priority;
}