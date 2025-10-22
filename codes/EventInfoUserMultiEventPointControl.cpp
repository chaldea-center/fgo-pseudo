void EventInfoUserMultiEventPointControl___ctor(EventInfoUserMultiEventPointControl_o *this, const MethodInfo *method)
{
  this->fields.isDisplayTotalPoint = 1;
  this->fields.isBgSpriteMakePixelPerfect = 1;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void EventInfoUserMultiEventPointControl__Awake(EventInfoUserMultiEventPointControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C58C5A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C58C5A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.userEventPointMaster, (int32_t)Master_object, v4, v5);
}


int64_t EventInfoUserMultiEventPointControl__GetUserEventPoint(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4C58C5C & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C58C5C = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0);
}


void EventInfoUserMultiEventPointControl__Initialization(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventUiEntity = entity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
}


void EventInfoUserMultiEventPointControl__OnDestroy(
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
      sub_1C3E7C0(this, method);
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v5);
  }
}


void EventInfoUserMultiEventPointControl__Redisplay(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  struct EventUiValueEntity_array *eventUiValueEntityList; // x23
  int max_length; // w8
  EventInfoUserMultiEventPointControl_o *v4; // x19
  __int64 v5; // x24
  int32_t v6; // w21
  int64_t v7; // x20
  EventUiValueEntity_o *v8; // x8
  const MethodInfo *v9; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t UserEventPoint; // x22
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  struct UISprite_array *bgSprites; // x8

  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( eventUiValueEntityList )
  {
    max_length = eventUiValueEntityList->max_length;
    if ( max_length >= 1 )
    {
      v4 = this;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1C3E7C8(this, method);
        v8 = eventUiValueEntityList->m_Items[v5];
        if ( !v8 )
LABEL_15:
          sub_1C3E7C0(this, method);
        if ( v8->fields.type == 2 )
        {
          this = (EventInfoUserMultiEventPointControl_o *)System_Int32__Parse(v8->fields.value, 0);
          eventUiEntity = v4->fields.eventUiEntity;
          if ( !eventUiEntity )
            goto LABEL_15;
          UserEventPoint = EventInfoUserMultiEventPointControl__GetUserEventPoint(
                             v4,
                             eventUiEntity->fields.eventId,
                             (int32_t)this,
                             v9);
          EventInfoUserMultiEventPointControl__SetPointLabel(v4, v6, UserEventPoint, v12);
          method = (const MethodInfo *)(unsigned int)(v6 + 1);
          v7 += UserEventPoint;
          if ( v4->fields.isDisplayTotalPoint )
          {
            bgSprites = v4->fields.bgSprites;
            if ( !bgSprites )
              goto LABEL_15;
            if ( v6 + 2 == LODWORD(bgSprites->max_length) )
            {
              EventInfoUserMultiEventPointControl__SetPointLabel(v4, (int32_t)method, v7, v13);
              return;
            }
          }
          ++v6;
        }
        max_length = eventUiValueEntityList->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUserMultiEventPointControl__SetPointLabel(
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
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  int64_t v20; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C58C5D & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    this = (EventInfoUserMultiEventPointControl_o *)sub_1C3E564(&StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4C58C5D = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_17;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
      sub_1C3E7C8(this, *(_QWORD *)&idx);
    v9 = pointLabels->m_Items[idx];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v11->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v20 = System_Math__Min_65160240(point, UserPointEventMax, 0);
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20, v13, v14, v15, v16, v17, v18);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v10, v19, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)this, 0);
      return;
    }
LABEL_17:
    sub_1C3E7C0(this, *(_QWORD *)&idx);
  }
}


void EventInfoUserMultiEventPointControl__Setup(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  EventInfoUserMultiEventPointControl___c_c *v5; // x0
  System_Func_object__bool__o *_9__13_0; // x21
  Il2CppObject *v7; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  EventInfoUserMultiEventPointControl___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__int__o *_9__13_1; // x21
  Il2CppObject *v15; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  struct EventUiValueEntity_array *v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1

  if ( (byte_4C58C5B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    sub_1C3E564(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_EventUiValueEntity__bool__TypeInfo);
    sub_1C3E564(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__);
    sub_1C3E564(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__);
    sub_1C3E564(&EventInfoUserMultiEventPointControl___c_TypeInfo);
    byte_4C58C5B = 1;
  }
  if ( entitys )
  {
    v5 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v5 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__13_0 = (System_Func_object__bool__o *)v5->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__13_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventUiValueEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__13_0, v7, Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__, 0);
      static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__13_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v9, v10);
    }
    v11 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__13_0,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v13 = v11;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v12->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__13_1, v15, Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__, 0);
      v16 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v16->__9__13_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v16->__9__13_1, (int32_t)_9__13_1, v17, v18);
    }
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v13,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v20 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v19,
                                               (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_1C3E7C0(v20, v21);
    this->fields.eventUiValueEntityList = v20;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)v20, v22, v23);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v24);
    ((void (__fastcall *)(EventInfoUserMultiEventPointControl_o *, const MethodInfo *))this->klass->vtable._10_Redisplay.methodPtr)(
      this,
      this->klass->vtable._10_Redisplay.method);
  }
}


void EventInfoUserMultiEventPointControl__SetupSprite(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v4; // x21
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *titleSprite; // x20
  struct UISprite_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  UISprite_o *v10; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_array *bgSprites; // x8
  il2cpp_array_size_t max_length; // x9
  struct System_String_array *bgSpriteNames; // x10
  __int64 v15; // x22
  __int64 v16; // x23
  unsigned __int64 v17; // x25
  struct System_String_array *v18; // x9
  UISprite_o *v19; // x20
  System_String_o *v20; // x21
  struct UISprite_array *v21; // x8

  if ( (byte_4C58C5E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_EventInfoUserMultiEventPointControl__SetupSprite_b__17_0__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58C5E = 1;
  }
  if ( this->fields.isUseLocalAtlas )
  {
    eventUiEntity = this->fields.eventUiEntity;
    v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_EventInfoUserMultiEventPointControl__SetupSprite_b__17_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v4, v5);
  }
  titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (struct UISprite_o *)UnityEngine_Object__op_Inequality(titleSprite, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct UISprite_o *)System_String__IsNullOrEmpty(this->fields.titleSpriteName, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      v10 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( this->fields.isUseLocalAtlas )
      {
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.titleSprite,
          this->fields.titleSpriteName,
          v9);
      }
      else
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v10, titleSpriteName, 0);
      }
      IsNullOrEmpty = this->fields.titleSprite;
      if ( !IsNullOrEmpty )
        goto LABEL_36;
      IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                             IsNullOrEmpty,
                                             IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
    }
  }
  bgSprites = this->fields.bgSprites;
  if ( !bgSprites )
    goto LABEL_36;
  max_length = bgSprites->max_length;
  if ( (int)max_length >= 1 )
  {
    bgSpriteNames = this->fields.bgSpriteNames;
    if ( !bgSpriteNames )
      goto LABEL_36;
    if ( (_DWORD)max_length == LODWORD(bgSpriteNames->max_length) )
    {
      v15 = 4;
      v16 = 1LL - (unsigned int)bgSprites->max_length;
      do
      {
        v17 = v15 - 4;
        if ( v15 - 4 >= (unsigned __int64)LODWORD(bgSprites->max_length) )
          goto LABEL_38;
        v18 = this->fields.bgSpriteNames;
        if ( !v18 )
          break;
        if ( v17 >= LODWORD(v18->max_length) )
LABEL_38:
          sub_1C3E7C8(IsNullOrEmpty, v8);
        v19 = (UISprite_o *)*((_QWORD *)&bgSprites->obj.klass + v15);
        v20 = (System_String_o *)*((_QWORD *)&v18->obj.klass + v15);
        if ( this->fields.isUseLocalAtlas )
        {
          IsNullOrEmpty = (struct UISprite_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                 (EventInfoUIBase_o *)this,
                                                 *((UISprite_o **)&bgSprites->obj.klass + v15),
                                                 *((System_String_o **)&v18->obj.klass + v15),
                                                 v9);
        }
        else
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v19, v20, 0);
        }
        if ( this->fields.isBgSpriteMakePixelPerfect )
        {
          v21 = this->fields.bgSprites;
          if ( !v21 )
            break;
          if ( v17 >= LODWORD(v21->max_length) )
            goto LABEL_38;
          IsNullOrEmpty = (struct UISprite_o *)*((_QWORD *)&v21->obj.klass + v15);
          if ( !IsNullOrEmpty )
            break;
          IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                 IsNullOrEmpty,
                                                 IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
        }
        if ( v16 + v15 == 4 )
          return;
        bgSprites = this->fields.bgSprites;
        ++v15;
      }
      while ( bgSprites );
LABEL_36:
      sub_1C3E7C0(IsNullOrEmpty, v8);
    }
  }
}


void EventInfoUserMultiEventPointControl___SetupSprite_b__17_0(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C3E7C0(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
}


void EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C58C5F & 1) == 0 )
  {
    sub_1C3E564(&EventInfoUserMultiEventPointControl___c_TypeInfo);
    byte_4C58C5F = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EventInfoUserMultiEventPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void EventInfoUserMultiEventPointControl___c___ctor(
        EventInfoUserMultiEventPointControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoUserMultiEventPointControl___c___Setup_b__13_0(
        EventInfoUserMultiEventPointControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  return ent != 0;
}


int32_t EventInfoUserMultiEventPointControl___c___Setup_b__13_1(
        EventInfoUserMultiEventPointControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C3E7C0(this, 0);
  return ent->fields.priority;
}