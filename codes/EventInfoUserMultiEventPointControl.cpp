void __fastcall EventInfoUserMultiEventPointControl__Awake(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B181A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventPointMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B181A0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userEventPointMaster,
    (int64_t)Master_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoUserMultiEventPointControl__GetUserEventPoint(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x1

  if ( (byte_4B181A2 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    byte_4B181A2 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


void __fastcall EventInfoUserMultiEventPointControl__Initialization(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventUiEntity = entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
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
          sub_1BCAA44(this, method);
        v8 = eventUiValueEntityList->m_Items[v5];
        if ( !v8 )
LABEL_14:
          sub_1BCAA3C(this, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct UILabel_array *pointLabels; // x8
  int32_t max_length; // w9
  UILabel_o *v17; // x20
  __int64 v18; // x1
  System_String_o *v19; // x21
  BalanceConfig_c *v20; // x8
  int64_t UserPointEventMax; // x22
  Il2CppObject *v22; // x0
  int64_t v23; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4B181A3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&idx, point);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Math_TypeInfo, v11, v12);
    this = (EventInfoUserMultiEventPointControl_o *)sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v13, v14);
    byte_4B181A3 = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_17;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
      sub_1BCAA44(this, *(_QWORD *)&idx);
    v17 = pointLabels->m_Items[idx];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&idx);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
      v20 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v20->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
    v23 = System_Math__Min_63220536(point, UserPointEventMax, 0LL);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v19, v22, 0LL);
    if ( v17 )
    {
      UILabel__set_text(v17, (System_String_o *)this, 0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__Setup(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  EventInfoUserMultiEventPointControl___c_c *v20; // x0
  System_Func_object__bool__o *_9__10_0; // x21
  Il2CppObject *v22; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  EventInfoUserMultiEventPointControl___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  System_Func_object__int__o *_9__10_1; // x21
  Il2CppObject *v37; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  struct EventUiValueEntity_array *v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x1

  if ( (byte_4B181A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_EventUiValueEntity__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_EventUiValueEntity__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__, v14, v15);
    sub_1BCA7E0(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__, v16, v17);
    sub_1BCA7E0(&EventInfoUserMultiEventPointControl___c_TypeInfo, v18, v19);
    byte_4B181A1 = 1;
  }
  if ( entitys )
  {
    v20 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo, entitys);
      v20 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__bool__o *)v20->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20, entitys);
        v20 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__10_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_EventUiValueEntity__bool__TypeInfo,
                                                  entitys,
                                                  method,
                                                  v3);
      System_Func_object__bool____ctor(
        _9__10_0,
        v22,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__,
        0LL);
      static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__10_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
        (int64_t)_9__10_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__10_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v34 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v35 = v30;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo, v31);
      v34 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__10_1 = (System_Func_object__int__o *)v34->static_fields->__9__10_1;
    if ( !_9__10_1 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34, v31);
        v34 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v34->static_fields->__9;
      _9__10_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventUiValueEntity__int__TypeInfo, v31, v32, v33);
      System_Func_object__int____ctor(
        _9__10_1,
        v37,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__,
        0LL);
      v38 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v38->__9__10_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v38->__9__10_1, (int64_t)_9__10_1, v39, v40, v41, v42, v43, v44);
    }
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v35,
                                                                 (System_Func_TSource__TKey__o *)_9__10_1,
                                                                 (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v46 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v45,
                                               (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_1BCAA3C(v46, v47);
    this->fields.eventUiValueEntityList = v46;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntityList,
      (int64_t)v46,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v54);
    ((void (__fastcall *)(EventInfoUserMultiEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_AfterRedisplay.methodPtr);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__SetupSprite(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *titleSprite; // x20
  struct UISprite_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UISprite_o *v9; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_array *bgSprites; // x8
  int max_length; // w22
  struct System_String_array *bgSpriteNames; // x9
  il2cpp_array_size_t v14; // w9
  struct System_String_array *v15; // x10
  __int64 v16; // x24
  UISprite_o *v17; // x20
  System_String_o *v18; // x21
  struct UISprite_array *v19; // x8

  if ( (byte_4B181A4 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B181A4 = 1;
  }
  titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  IsNullOrEmpty = (struct UISprite_o *)UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct UISprite_o *)System_String__IsNullOrEmpty(this->fields.titleSpriteName, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      v9 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
      AtlasManager__SetEventUI(v9, titleSpriteName, 0LL);
      IsNullOrEmpty = this->fields.titleSprite;
      if ( !IsNullOrEmpty )
        goto LABEL_26;
      IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                             IsNullOrEmpty,
                                             IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
  bgSprites = this->fields.bgSprites;
  if ( !bgSprites )
    goto LABEL_26;
  max_length = bgSprites->max_length;
  if ( max_length >= 1 )
  {
    bgSpriteNames = this->fields.bgSpriteNames;
    if ( !bgSpriteNames )
      goto LABEL_26;
    if ( max_length == bgSpriteNames->max_length )
    {
      v14 = 0;
      do
      {
        if ( v14 >= bgSprites->max_length )
          goto LABEL_28;
        v15 = this->fields.bgSpriteNames;
        if ( !v15 )
          break;
        v16 = (int)v14;
        if ( v14 >= v15->max_length )
LABEL_28:
          sub_1BCAA44(IsNullOrEmpty, v8);
        v17 = bgSprites->m_Items[v14];
        v18 = v15->m_Items[v14];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
        IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v17, v18, 0LL);
        v19 = this->fields.bgSprites;
        if ( !v19 )
          break;
        if ( (unsigned int)v16 >= v19->max_length )
          goto LABEL_28;
        IsNullOrEmpty = v19->m_Items[v16];
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                               IsNullOrEmpty,
                                               IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
        v14 = v16 + 1;
        if ( max_length == (_DWORD)v16 + 1 )
          return;
        bgSprites = this->fields.bgSprites;
      }
      while ( bgSprites );
LABEL_26:
      sub_1BCAA3C(IsNullOrEmpty, v8);
    }
  }
}


void __fastcall EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B181A5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUserMultiEventPointControl___c_TypeInfo, v1, v2);
    byte_4B181A5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoUserMultiEventPointControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return ent->fields.priority;
}