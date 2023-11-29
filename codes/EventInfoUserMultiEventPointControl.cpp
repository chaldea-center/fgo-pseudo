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

  if ( (byte_40F8820 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F8820 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct UserEventPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = Master_WarQuestSelectionMaster;
  sub_B16F98(
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

  if ( (byte_40F8822 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F8822 = 1;
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
  sub_B16F98(
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
  __int64 v2; // x2
  struct EventUiValueEntity_array *eventUiValueEntityList; // x23
  __int64 v4; // x8
  __int64 v6; // x24
  int32_t v7; // w21
  int64_t v8; // x20
  EventUiValueEntity_o *v9; // x9
  int32_t v10; // w0
  const MethodInfo *v11; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t UserEventPoint; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  struct UISprite_array *bgSprites; // x8

  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( eventUiValueEntityList )
  {
    v4 = *(_QWORD *)&eventUiValueEntityList->max_length;
    if ( (int)v4 >= 1 )
    {
      v6 = 0LL;
      v7 = 0;
      v8 = 0LL;
      do
      {
        if ( (unsigned int)v6 >= (unsigned int)v4 )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v9 = eventUiValueEntityList->m_Items[v6];
        if ( !v9 )
LABEL_14:
          sub_B170D4();
        if ( v9->fields.type == 2 )
        {
          v10 = System_Int32__Parse(v9->fields.value, 0LL);
          eventUiEntity = this->fields.eventUiEntity;
          if ( !eventUiEntity )
            goto LABEL_14;
          UserEventPoint = EventInfoUserMultiEventPointControl__GetUserEventPoint(
                             this,
                             eventUiEntity->fields.eventId,
                             v10,
                             v11);
          EventInfoUserMultiEventPointControl__SetPointLabel(this, v7, UserEventPoint, v14);
          bgSprites = this->fields.bgSprites;
          if ( !bgSprites )
            goto LABEL_14;
          method = (const MethodInfo *)(unsigned int)(v7 + 1);
          v8 += UserEventPoint;
          if ( v7 + 2 == bgSprites->max_length )
          {
            EventInfoUserMultiEventPointControl__SetPointLabel(this, (int32_t)method, v8, v15);
            return;
          }
          v4 = *(_QWORD *)&eventUiValueEntityList->max_length;
          ++v7;
        }
        ++v6;
      }
      while ( (int)v6 < (int)v4 );
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
  System_String_o *v18; // x0
  int64_t v19; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_40F8823 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&long_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&System_Math_TypeInfo, v9);
    this = (EventInfoUserMultiEventPointControl_o *)sub_B16FFC(&StringLiteral_5635, v10);
    byte_40F8823 = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_20;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
    {
      sub_B17100(this, *(_QWORD *)&idx, point);
      sub_B170A0();
    }
    v13 = pointLabels->m_Items[idx];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5635, 0LL);
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
    v19 = System_Math__Min_44464240(point, UserPointEventMax, 0LL);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
    v18 = System_String__Format(v14, v17, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, v18, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall EventInfoUserMultiEventPointControl__Setup(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  EventInfoUserMultiEventPointControl___c_c *v16; // x0
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x21
  Il2CppObject *v19; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  EventInfoUserMultiEventPointControl___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v34; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_1; // x21
  Il2CppObject *v36; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct EventUiValueEntity_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x1

  if ( (byte_40F8821 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___, v8);
    sub_B16FFC(&Method_System_Func_EventUiValueEntity__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_EventUiValueEntity__int___ctor__, v10);
    sub_B16FFC(&System_Func_EventUiValueEntity__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_EventUiValueEntity__int__TypeInfo, v12);
    sub_B16FFC(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__, v13);
    sub_B16FFC(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__, v14);
    sub_B16FFC(&EventInfoUserMultiEventPointControl___c_TypeInfo, v15);
    byte_40F8821 = 1;
  }
  if ( entitys )
  {
    v16 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( (BYTE3(EventInfoUserMultiEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v16 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_EventUiValueEntity__bool__TypeInfo,
                                                                                      entitys,
                                                                                      method,
                                                                                      v3,
                                                                                      v4);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__10_0,
        v19,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_EventUiValueEntity__bool___ctor__);
      v20 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v20->__9__10_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__10_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v20->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__10_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v32 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v33 = v27;
    if ( (BYTE3(EventInfoUserMultiEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v32 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    v34 = v32->static_fields;
    _9__10_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v34->__9__10_1;
    if ( !_9__10_1 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v34 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)v34->__9;
      _9__10_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                   v28,
                                                                                   v29,
                                                                                   v30,
                                                                                   v31);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_1,
        v36,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_EventUiValueEntity__int___ctor__);
      v37 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v37->__9__10_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v37->__9__10_1,
        (System_Int32_array **)_9__10_1,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 v33,
                                                                 (System_Func_TSource__TKey__o *)_9__10_1,
                                                                 (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v45 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                               v44,
                                               (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_B170D4();
    this->fields.eventUiValueEntityList = v45;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v52);
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
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *v8; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_o *v10; // x0
  struct UISprite_array *bgSprites; // x8
  int max_length; // w22
  struct System_String_array *bgSpriteNames; // x9
  il2cpp_array_size_t v14; // w9
  struct System_String_array *v15; // x10
  __int64 v16; // x24
  UISprite_o *v17; // x20
  System_String_o *v18; // x21
  struct UISprite_array *v19; // x8
  UISprite_o *v20; // x0

  if ( (byte_40F8824 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F8824 = 1;
  }
  titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsNullOrEmpty = UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.titleSpriteName, 0LL);
    if ( (IsNullOrEmpty & 1) == 0 )
    {
      v8 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v8, titleSpriteName, 0LL);
      v10 = this->fields.titleSprite;
      if ( !v10 )
        goto LABEL_29;
      IsNullOrEmpty = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
                        v10,
                        v10->klass->vtable._34_get_minWidth.methodPtr);
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
      v14 = 0;
      do
      {
        if ( v14 >= bgSprites->max_length )
          goto LABEL_31;
        v15 = this->fields.bgSpriteNames;
        if ( !v15 )
          break;
        v16 = (int)v14;
        if ( v14 >= v15->max_length )
        {
LABEL_31:
          sub_B17100(IsNullOrEmpty, v6, v7);
          sub_B170A0();
        }
        v17 = bgSprites->m_Items[v14];
        v18 = v15->m_Items[v14];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsNullOrEmpty = AtlasManager__SetEventUI(v17, v18, 0LL);
        v19 = this->fields.bgSprites;
        if ( !v19 )
          break;
        if ( (unsigned int)v16 >= v19->max_length )
          goto LABEL_31;
        v20 = v19->m_Items[v16];
        if ( !v20 )
          break;
        IsNullOrEmpty = ((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
                          v20,
                          v20->klass->vtable._34_get_minWidth.methodPtr);
        v14 = v16 + 1;
        if ( (int)v16 + 1 >= max_length )
          return;
        bgSprites = this->fields.bgSprites;
      }
      while ( bgSprites );
LABEL_29:
      sub_B170D4();
    }
  }
}


void __fastcall EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FE7 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoUserMultiEventPointControl___c_TypeInfo, v1);
    byte_40F6FE7 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoUserMultiEventPointControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return ent->fields.priority;
}