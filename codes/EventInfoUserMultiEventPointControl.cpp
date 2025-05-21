void __fastcall EventInfoUserMultiEventPointControl___ctor(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  this->fields.isDisplayTotalPoint = 1;
  this->fields.isBgSpriteMakePixelPerfect = 1;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void __fastcall EventInfoUserMultiEventPointControl__Awake(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B46A3A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    byte_4B46A3A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userEventPointMaster, (int32_t)Master_object, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoUserMultiEventPointControl__GetUserEventPoint(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4B46A3C & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B46A3C = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B3ED56 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0LL);
}


void __fastcall EventInfoUserMultiEventPointControl__Initialization(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventUiEntity = entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
}


void __fastcall EventInfoUserMultiEventPointControl__OnDestroy(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v5; // x1

  if ( this->fields.isUseLocalAtlas )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      sub_1BDBAD4(this, method);
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v5);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__Redisplay(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventUiValueEntity_array *eventUiValueEntityList; // x23
  int max_length; // w8
  EventInfoUserMultiEventPointControl_o *v5; // x19
  __int64 v6; // x24
  int32_t v7; // w21
  int64_t v8; // x20
  EventUiValueEntity_o *v9; // x8
  const MethodInfo *v10; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t UserEventPoint; // x22
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  struct UISprite_array *bgSprites; // x8

  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( eventUiValueEntityList )
  {
    max_length = eventUiValueEntityList->max_length;
    if ( max_length >= 1 )
    {
      v5 = this;
      v6 = 0LL;
      v7 = 0;
      v8 = 0LL;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1BDBADC(this, method, v2);
        v9 = eventUiValueEntityList->m_Items[v6];
        if ( !v9 )
LABEL_15:
          sub_1BDBAD4(this, method);
        if ( v9->fields.type == 2 )
        {
          this = (EventInfoUserMultiEventPointControl_o *)System_Int32__Parse(v9->fields.value, 0LL);
          eventUiEntity = v5->fields.eventUiEntity;
          if ( !eventUiEntity )
            goto LABEL_15;
          UserEventPoint = EventInfoUserMultiEventPointControl__GetUserEventPoint(
                             v5,
                             eventUiEntity->fields.eventId,
                             (int32_t)this,
                             v10);
          EventInfoUserMultiEventPointControl__SetPointLabel(v5, v7, UserEventPoint, v13);
          method = (const MethodInfo *)(unsigned int)(v7 + 1);
          v8 += UserEventPoint;
          if ( v5->fields.isDisplayTotalPoint )
          {
            bgSprites = v5->fields.bgSprites;
            if ( !bgSprites )
              goto LABEL_15;
            if ( v7 + 2 == bgSprites->max_length )
            {
              EventInfoUserMultiEventPointControl__SetPointLabel(v5, (int32_t)method, v8, v14);
              return;
            }
          }
          ++v7;
        }
        max_length = eventUiValueEntityList->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  int64_t v21; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4B46A3D & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1BDB878(&long_TypeInfo, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&System_Math_TypeInfo, v9);
    this = (EventInfoUserMultiEventPointControl_o *)sub_1BDB878(&StringLiteral_5663/*"EVENT_POINT_COMMON_FORMAT"*/, v10);
    byte_4B46A3D = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_17;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
      sub_1BDBADC(this, *(_QWORD *)&idx, point);
    v13 = pointLabels->m_Items[idx];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v15->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = System_Math__Min_64100920(point, UserPointEventMax, 0LL);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21, v17, v18, v19);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v14, v20, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)this, 0LL);
      return;
    }
LABEL_17:
    sub_1BDBAD4(this, *(_QWORD *)&idx);
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
  EventInfoUserMultiEventPointControl___c_c *v12; // x0
  System_Func_object__bool__o *_9__13_0; // x21
  Il2CppObject *v14; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  EventInfoUserMultiEventPointControl___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__int__o *_9__13_1; // x21
  Il2CppObject *v22; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct EventUiValueEntity_array *v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1

  if ( (byte_4B46A3B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___, v6);
    sub_1BDB878(&System_Func_EventUiValueEntity__int__TypeInfo, v7);
    sub_1BDB878(&System_Func_EventUiValueEntity__bool__TypeInfo, v8);
    sub_1BDB878(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__, v9);
    sub_1BDB878(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__, v10);
    sub_1BDB878(&EventInfoUserMultiEventPointControl___c_TypeInfo, v11);
    byte_4B46A3B = 1;
  }
  if ( entitys )
  {
    v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__13_0 = (System_Func_object__bool__o *)v12->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__13_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_EventUiValueEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__13_0,
        v14,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__,
        0LL);
      static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__13_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__13_0,
            (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v19 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v20 = v18;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v19 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v19->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        v22,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__,
        0LL);
      v23 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v23->__9__13_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&v23->__9__13_1, (int32_t)_9__13_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v27 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v26,
                                               (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_1BDBAD4(v27, v28);
    this->fields.eventUiValueEntityList = v27;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)v27, v29, v30);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v31);
    ((void (__fastcall *)(EventInfoUserMultiEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_AfterRedisplay.methodPtr);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__SetupSprite(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *titleSprite; // x20
  struct UISprite_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  UISprite_o *v14; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_array *bgSprites; // x8
  __int64 v17; // x9
  struct System_String_array *bgSpriteNames; // x10
  __int64 v19; // x22
  __int64 v20; // x23
  unsigned __int64 v21; // x25
  struct System_String_array *v22; // x9
  UISprite_o *v23; // x20
  System_String_o *v24; // x21
  struct UISprite_array *v25; // x8

  if ( (byte_4B46A3E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&Method_EventInfoUserMultiEventPointControl__SetupSprite_b__17_0__, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B46A3E = 1;
  }
  if ( this->fields.isUseLocalAtlas )
  {
    eventUiEntity = this->fields.eventUiEntity;
    v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventInfoUserMultiEventPointControl__SetupSprite_b__17_0__,
      0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v7, v8);
  }
  titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (struct UISprite_o *)UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct UISprite_o *)System_String__IsNullOrEmpty(this->fields.titleSpriteName, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      v14 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( this->fields.isUseLocalAtlas )
      {
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.titleSprite,
          this->fields.titleSpriteName,
          v13);
      }
      else
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v14, titleSpriteName, 0LL);
      }
      IsNullOrEmpty = this->fields.titleSprite;
      if ( !IsNullOrEmpty )
        goto LABEL_36;
      IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                             IsNullOrEmpty,
                                             IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
  bgSprites = this->fields.bgSprites;
  if ( !bgSprites )
    goto LABEL_36;
  v17 = *(_QWORD *)&bgSprites->max_length;
  if ( (int)v17 >= 1 )
  {
    bgSpriteNames = this->fields.bgSpriteNames;
    if ( !bgSpriteNames )
      goto LABEL_36;
    if ( (_DWORD)v17 == bgSpriteNames->max_length )
    {
      v19 = 4LL;
      v20 = 1LL - (unsigned int)*(_QWORD *)&bgSprites->max_length;
      do
      {
        v21 = v19 - 4;
        if ( v19 - 4 >= (unsigned __int64)bgSprites->max_length )
          goto LABEL_38;
        v22 = this->fields.bgSpriteNames;
        if ( !v22 )
          break;
        if ( v21 >= v22->max_length )
LABEL_38:
          sub_1BDBADC(IsNullOrEmpty, v11, v12);
        v23 = (UISprite_o *)*((_QWORD *)&bgSprites->obj.klass + v19);
        v24 = (System_String_o *)*((_QWORD *)&v22->obj.klass + v19);
        if ( this->fields.isUseLocalAtlas )
        {
          IsNullOrEmpty = (struct UISprite_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                 (EventInfoUIBase_o *)this,
                                                 *((UISprite_o **)&bgSprites->obj.klass + v19),
                                                 *((System_String_o **)&v22->obj.klass + v19),
                                                 v13);
        }
        else
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v23, v24, 0LL);
        }
        if ( this->fields.isBgSpriteMakePixelPerfect )
        {
          v25 = this->fields.bgSprites;
          if ( !v25 )
            break;
          if ( v21 >= v25->max_length )
            goto LABEL_38;
          IsNullOrEmpty = (struct UISprite_o *)*((_QWORD *)&v25->obj.klass + v19);
          if ( !IsNullOrEmpty )
            break;
          IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                                 IsNullOrEmpty,
                                                 IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
        }
        if ( v20 + v19 == 4 )
          return;
        bgSprites = this->fields.bgSprites;
        ++v19;
      }
      while ( bgSprites );
LABEL_36:
      sub_1BDBAD4(IsNullOrEmpty, v11);
    }
  }
}


void __fastcall EventInfoUserMultiEventPointControl___SetupSprite_b__17_0(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BDBAD4(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
}


void __fastcall EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B46A3F & 1) == 0 )
  {
    sub_1BDB878(&EventInfoUserMultiEventPointControl___c_TypeInfo, v1);
    byte_4B46A3F = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventInfoUserMultiEventPointControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventInfoUserMultiEventPointControl___c___ctor(
        EventInfoUserMultiEventPointControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUserMultiEventPointControl___c___Setup_b__13_0(
        EventInfoUserMultiEventPointControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  return ent != 0LL;
}


int32_t __fastcall EventInfoUserMultiEventPointControl___c___Setup_b__13_1(
        EventInfoUserMultiEventPointControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BDBAD4(this, 0LL);
  return ent->fields.priority;
}