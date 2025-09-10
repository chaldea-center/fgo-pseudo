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

  if ( (byte_4C2918B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2918B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userEventPointMaster, (int32_t)Master_object, v4, v5);
}


int64_t EventInfoUserMultiEventPointControl__GetUserEventPoint(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4C2918D & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2918D = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
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
      sub_1C2D6EC(this, method);
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v5);
  }
}


void EventInfoUserMultiEventPointControl__Redisplay(
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
      v6 = 0;
      v7 = 0;
      v8 = 0;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1C2D6F4(this, method, v2);
        v9 = eventUiValueEntityList->m_Items[v6];
        if ( !v9 )
LABEL_15:
          sub_1C2D6EC(this, method);
        if ( v9->fields.type == 2 )
        {
          this = (EventInfoUserMultiEventPointControl_o *)System_Int32__Parse(v9->fields.value, 0);
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
            if ( v7 + 2 == LODWORD(bgSprites->max_length) )
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
  Il2CppObject *v16; // x0
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C2918E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    this = (EventInfoUserMultiEventPointControl_o *)sub_1C2D490(&StringLiteral_5630/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4C2918E = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_17;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
      sub_1C2D6F4(this, *(_QWORD *)&idx, point);
    v9 = pointLabels->m_Items[idx];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5630/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v11->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = System_Math__Min_64982380(point, UserPointEventMax, 0);
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v13, v14, v15);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v10, v16, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)this, 0);
      return;
    }
LABEL_17:
    sub_1C2D6EC(this, *(_QWORD *)&idx);
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

  if ( (byte_4C2918C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    sub_1C2D490(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C2D490(&System_Func_EventUiValueEntity__bool__TypeInfo);
    sub_1C2D490(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__);
    sub_1C2D490(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__);
    sub_1C2D490(&EventInfoUserMultiEventPointControl___c_TypeInfo);
    byte_4C2918C = 1;
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
      _9__13_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventUiValueEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__13_0, v7, Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__, 0);
      static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__13_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v9, v10);
    }
    v11 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__13_0,
            (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
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
      _9__13_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__13_1, v15, Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__, 0);
      v16 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v16->__9__13_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_1;
      sub_1C2D434((CGThumbnailListItem_o *)&v16->__9__13_1, (int32_t)_9__13_1, v17, v18);
    }
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v13,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v20 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v19,
                                               (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_1C2D6EC(v20, v21);
    this->fields.eventUiValueEntityList = v20;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)v20, v22, v23);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  UISprite_o *v11; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_array *bgSprites; // x8
  il2cpp_array_size_t max_length; // x9
  struct System_String_array *bgSpriteNames; // x10
  __int64 v16; // x22
  __int64 v17; // x23
  unsigned __int64 v18; // x25
  struct System_String_array *v19; // x9
  UISprite_o *v20; // x20
  System_String_o *v21; // x21
  struct UISprite_array *v22; // x8

  if ( (byte_4C2918F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_EventInfoUserMultiEventPointControl__SetupSprite_b__17_0__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2918F = 1;
  }
  if ( this->fields.isUseLocalAtlas )
  {
    eventUiEntity = this->fields.eventUiEntity;
    v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
      v11 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( this->fields.isUseLocalAtlas )
      {
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.titleSprite,
          this->fields.titleSpriteName,
          v10);
      }
      else
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v11, titleSpriteName, 0);
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
      v16 = 4;
      v17 = 1LL - (unsigned int)bgSprites->max_length;
      do
      {
        v18 = v16 - 4;
        if ( v16 - 4 >= (unsigned __int64)LODWORD(bgSprites->max_length) )
          goto LABEL_38;
        v19 = this->fields.bgSpriteNames;
        if ( !v19 )
          break;
        if ( v18 >= LODWORD(v19->max_length) )
LABEL_38:
          sub_1C2D6F4(IsNullOrEmpty, v8, v9);
        v20 = (UISprite_o *)*((_QWORD *)&bgSprites->obj.klass + v16);
        v21 = (System_String_o *)*((_QWORD *)&v19->obj.klass + v16);
        if ( this->fields.isUseLocalAtlas )
        {
          IsNullOrEmpty = (struct UISprite_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                 (EventInfoUIBase_o *)this,
                                                 *((UISprite_o **)&bgSprites->obj.klass + v16),
                                                 *((System_String_o **)&v19->obj.klass + v16),
                                                 v10);
        }
        else
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v20, v21, 0);
        }
        if ( this->fields.isBgSpriteMakePixelPerfect )
        {
          v22 = this->fields.bgSprites;
          if ( !v22 )
            break;
          if ( v18 >= LODWORD(v22->max_length) )
            goto LABEL_38;
          IsNullOrEmpty = (struct UISprite_o *)*((_QWORD *)&v22->obj.klass + v16);
          if ( !IsNullOrEmpty )
            break;
          IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                 IsNullOrEmpty,
                                                 IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
        }
        if ( v17 + v16 == 4 )
          return;
        bgSprites = this->fields.bgSprites;
        ++v16;
      }
      while ( bgSprites );
LABEL_36:
      sub_1C2D6EC(IsNullOrEmpty, v8);
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
    sub_1C2D6EC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
}


void EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C29190 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoUserMultiEventPointControl___c_TypeInfo);
    byte_4C29190 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventInfoUserMultiEventPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v1;
  sub_1C2D434(
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
    sub_1C2D6EC(this, 0);
  return ent->fields.priority;
}