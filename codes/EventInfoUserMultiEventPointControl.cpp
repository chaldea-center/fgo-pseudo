void EventInfoUserMultiEventPointControl___ctor(EventInfoUserMultiEventPointControl_o *this, const MethodInfo *method)
{
  this->fields.isDisplayTotalPoint = 1;
  this->fields.isBgSpriteMakePixelPerfect = 1;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void EventInfoUserMultiEventPointControl__Awake(EventInfoUserMultiEventPointControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597305C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597305C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userEventPointMaster,
    (int32_t)Master_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
int64_t EventInfoUserMultiEventPointControl__GetUserEventPoint(
        EventInfoUserMultiEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_597305E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597305E = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0);
}


void EventInfoUserMultiEventPointControl__Initialization(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventUiEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
      sub_2213CDC(this, method);
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
          sub_2213CE4(this);
        v8 = eventUiValueEntityList->m_Items[v5];
        if ( !v8 )
LABEL_15:
          sub_2213CDC(this, method);
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
  __int64 v10; // x1
  System_String_o *v11; // x21
  BalanceConfig_c *v12; // x8
  int64_t UserPointEventMax; // x22
  Il2CppObject *v14; // x0
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_597305F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    this = (EventInfoUserMultiEventPointControl_o *)sub_2213A60(&StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_597305F = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_17;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
      sub_2213CE4(this);
    v9 = pointLabels->m_Items[idx];
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&idx);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v12 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v12 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v12->static_fields->UserPointEventMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
    v15 = System_Math__Min_77153608(point, UserPointEventMax, 0);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v15);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v11, v14, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)this, 0);
      return;
    }
LABEL_17:
    sub_2213CDC(this, *(_QWORD *)&idx);
  }
}


void EventInfoUserMultiEventPointControl__Setup(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  EventInfoUserMultiEventPointControl___c_c *v5; // x0
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__13_0; // x21
  Il2CppObject *v8; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  EventInfoUserMultiEventPointControl___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v20; // x9
  System_Func_object__int__o *_9__13_1; // x21
  Il2CppObject *v22; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  struct EventUiValueEntity_array *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x1

  if ( (byte_597305D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    sub_2213A60(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_2213A60(&System_Func_EventUiValueEntity__bool__TypeInfo);
    sub_2213A60(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__);
    sub_2213A60(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__);
    sub_2213A60(&EventInfoUserMultiEventPointControl___c_TypeInfo);
    byte_597305D = 1;
  }
  if ( entitys )
  {
    v5 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( !*(&EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo, entitys);
      v5 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__13_0 = (System_Func_object__bool__o *)static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, entitys);
        static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventUiValueEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__13_0, v8, Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__, 0);
      v9 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v9->__9__13_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__13_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__13_0, (int32_t)_9__13_0, v10, v11, v12, v13, v14, v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__13_0,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v18 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v19 = v16;
    if ( !*(&EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo, v17);
      v18 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    v20 = v18->static_fields;
    _9__13_1 = (System_Func_object__int__o *)v20->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v17);
        v20 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v20->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__13_1, v22, Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__, 0);
      v23 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v23->__9__13_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__13_1, (int32_t)_9__13_1, v24, v25, v26, v27, v28, v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v19,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v31 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v30,
                                               (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_2213CDC(v31, v32);
    this->fields.eventUiValueEntityList = v31;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)v31,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v39);
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
  il2cpp_array_size_t max_length; // x8
  struct System_String_array *bgSpriteNames; // x9
  __int64 v15; // x24
  __int64 v16; // x23
  struct UISprite_array *v17; // x8
  unsigned __int64 v18; // x25
  struct System_String_array *v19; // x9
  struct System_String_array *v20; // x9
  UISprite_o *v21; // x20
  System_String_o *v22; // x21
  struct UISprite_array *v23; // x8

  if ( (byte_5973060 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_EventInfoUserMultiEventPointControl__SetupSprite_b__17_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973060 = 1;
  }
  if ( this->fields.isUseLocalAtlas )
  {
    eventUiEntity = this->fields.eventUiEntity;
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_EventInfoUserMultiEventPointControl__SetupSprite_b__17_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v4, v5);
  }
  titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
        AtlasManager__SetEventUI(v10, titleSpriteName, 0);
      }
      IsNullOrEmpty = this->fields.titleSprite;
      if ( !IsNullOrEmpty )
        goto LABEL_41;
      IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                             IsNullOrEmpty,
                                             IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
    }
  }
  bgSprites = this->fields.bgSprites;
  if ( !bgSprites )
    goto LABEL_41;
  max_length = bgSprites->max_length;
  if ( (int)max_length < 1 )
    return;
  bgSpriteNames = this->fields.bgSpriteNames;
  if ( !bgSpriteNames )
LABEL_41:
    sub_2213CDC(IsNullOrEmpty, v8);
  if ( (_DWORD)max_length == LODWORD(bgSpriteNames->max_length) )
  {
    v15 = 4;
    v16 = -(__int64)(unsigned int)max_length;
    do
    {
      v17 = this->fields.bgSprites;
      v18 = v15 - 4;
      if ( this->fields.isUseLocalAtlas )
      {
        if ( !v17 )
          goto LABEL_41;
        if ( v18 >= LODWORD(v17->max_length) )
          goto LABEL_42;
        v19 = this->fields.bgSpriteNames;
        if ( !v19 )
          goto LABEL_41;
        if ( v18 >= LODWORD(v19->max_length) )
          goto LABEL_42;
        IsNullOrEmpty = (struct UISprite_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                               (EventInfoUIBase_o *)this,
                                               *((UISprite_o **)&v17->obj.klass + v15),
                                               *((System_String_o **)&v19->obj.klass + v15),
                                               v9);
      }
      else
      {
        if ( !v17 )
          goto LABEL_41;
        if ( v18 >= LODWORD(v17->max_length) )
          goto LABEL_42;
        v20 = this->fields.bgSpriteNames;
        if ( !v20 )
          goto LABEL_41;
        if ( v18 >= LODWORD(v20->max_length) )
          goto LABEL_42;
        v21 = (UISprite_o *)*((_QWORD *)&v17->obj.klass + v15);
        v22 = (System_String_o *)*((_QWORD *)&v20->obj.klass + v15);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
        IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v21, v22, 0);
      }
      if ( this->fields.isBgSpriteMakePixelPerfect )
      {
        v23 = this->fields.bgSprites;
        if ( !v23 )
          goto LABEL_41;
        if ( v18 >= LODWORD(v23->max_length) )
LABEL_42:
          sub_2213CE4(IsNullOrEmpty);
        IsNullOrEmpty = (struct UISprite_o *)*((_QWORD *)&v23->obj.klass + v15);
        if ( !IsNullOrEmpty )
          goto LABEL_41;
        IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                               IsNullOrEmpty,
                                               IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
      }
      ++v15;
    }
    while ( v16 + v15 != 4 );
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
    sub_2213CDC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
}


void EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973061 & 1) == 0 )
  {
    sub_2213A60(&EventInfoUserMultiEventPointControl___c_TypeInfo);
    byte_5973061 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoUserMultiEventPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return ent->fields.priority;
}