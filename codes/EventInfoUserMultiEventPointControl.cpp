void __fastcall EventInfoUserMultiEventPointControl__Awake(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UserEventPointMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9ADB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventPointMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E9ADB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct UserEventPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userEventPointMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


int64_t __fastcall EventInfoUserMultiEventPointControl__GetUserEventPoint(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_42E9ADD & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, eventId, groupId, method);
    byte_42E9ADD = 1;
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
  sub_B5D560(
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
          v15 = sub_B5D6C8(this);
          sub_B5D668(v15, 0LL);
        }
        v8 = eventUiValueEntityList->m_Items[v5];
        if ( !v8 )
LABEL_14:
          sub_B5D69C(this, method);
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
  struct UILabel_array *pointLabels; // x8
  int32_t max_length; // w9
  UILabel_o *v21; // x20
  System_String_o *v22; // x21
  BalanceConfig_c *v23; // x8
  int64_t UserPointEventMax; // x22
  Il2CppObject *v25; // x0
  __int64 v26; // x0
  int64_t v27; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_42E9ADE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, idx, point, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Math_TypeInfo, v13, v14, v15);
    this = (EventInfoUserMultiEventPointControl_o *)sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v16, v17, v18);
    byte_42E9ADE = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_20;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
    {
      v26 = sub_B5D6C8(this);
      sub_B5D668(v26, 0LL);
    }
    v21 = pointLabels->m_Items[idx];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v23->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = System_Math__Min_45149944(point, UserPointEventMax, 0LL);
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v22, v25, 0LL);
    if ( v21 )
    {
      UILabel__set_text(v21, (System_String_o *)this, 0LL);
      return;
    }
LABEL_20:
    sub_B5D69C(this, *(_QWORD *)&idx);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__Setup(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  EventInfoUserMultiEventPointControl___c_c *v33; // x0
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x21
  Il2CppObject *v36; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  EventInfoUserMultiEventPointControl___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v47; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_1; // x21
  Il2CppObject *v49; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  struct EventUiValueEntity_array *v58; // x0
  __int64 v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x1

  if ( (byte_42E9ADC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___,
      (_DWORD)entitys,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_EventUiValueEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_EventUiValueEntity__int___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_EventUiValueEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Func_EventUiValueEntity__int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__, v24, v25, v26);
    sub_B5D5C4(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__, v27, v28, v29);
    sub_B5D5C4(&EventInfoUserMultiEventPointControl___c_TypeInfo, v30, v31, v32);
    byte_42E9ADC = 1;
  }
  if ( entitys )
  {
    v33 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( (BYTE3(EventInfoUserMultiEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v33 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventUiValueEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__10_0,
        v36,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_EventUiValueEntity__bool___ctor__);
      v37 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v37->__9__10_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__10_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v37->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__10_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v45 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v46 = v44;
    if ( (BYTE3(EventInfoUserMultiEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v45 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    v47 = v45->static_fields;
    _9__10_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v47->__9__10_1;
    if ( !_9__10_1 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v47 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)v47->__9;
      _9__10_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_1,
        v49,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_EventUiValueEntity__int___ctor__);
      v50 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v50->__9__10_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v50->__9__10_1,
        (System_Int32_array **)_9__10_1,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 v46,
                                                                 (System_Func_TSource__TKey__o *)_9__10_1,
                                                                 (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v58 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                               v57,
                                               (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_B5D69C(v58, v59);
    this->fields.eventUiValueEntityList = v58;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)v58,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v66);
    ((void (__fastcall *)(EventInfoUserMultiEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SwitchSpotState.methodPtr);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__SetupSprite(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *titleSprite; // x20
  struct UISprite_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  UISprite_o *v11; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_array *bgSprites; // x8
  int max_length; // w22
  struct System_String_array *bgSpriteNames; // x9
  il2cpp_array_size_t v16; // w9
  struct System_String_array *v17; // x10
  __int64 v18; // x24
  UISprite_o *v19; // x20
  System_String_o *v20; // x21
  struct UISprite_array *v21; // x8
  __int64 v22; // x0

  if ( (byte_42E9ADF & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9ADF = 1;
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
      v11 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v11, titleSpriteName, 0LL);
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
      v16 = 0;
      do
      {
        if ( v16 >= bgSprites->max_length )
          goto LABEL_31;
        v17 = this->fields.bgSpriteNames;
        if ( !v17 )
          break;
        v18 = (int)v16;
        if ( v16 >= v17->max_length )
        {
LABEL_31:
          v22 = sub_B5D6C8(IsNullOrEmpty);
          sub_B5D668(v22, 0LL);
        }
        v19 = bgSprites->m_Items[v16];
        v20 = v17->m_Items[v16];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v19, v20, 0LL);
        v21 = this->fields.bgSprites;
        if ( !v21 )
          break;
        if ( (unsigned int)v18 >= v21->max_length )
          goto LABEL_31;
        IsNullOrEmpty = v21->m_Items[v18];
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                               IsNullOrEmpty,
                                               IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
        v16 = v18 + 1;
        if ( (int)v18 + 1 >= max_length )
          return;
        bgSprites = this->fields.bgSprites;
      }
      while ( bgSprites );
LABEL_29:
      sub_B5D69C(IsNullOrEmpty, v10);
    }
  }
}


void __fastcall EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E6555 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUserMultiEventPointControl___c_TypeInfo, v1, v2, v3);
    byte_42E6555 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoUserMultiEventPointControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return ent->fields.priority;
}