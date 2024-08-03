void __fastcall EventInfoUserMultiEventPointControl__Awake(
        EventInfoUserMultiEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE5C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FE5C3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userEventPointMaster, (int32_t)Master_object, v5, v6);
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

  if ( (byte_49FE5C5 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49FE5C5 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


void __fastcall EventInfoUserMultiEventPointControl__Initialization(
        EventInfoUserMultiEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.eventUiEntity = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
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
          sub_1B6432C(this, method);
        v8 = eventUiValueEntityList->m_Items[v5];
        if ( !v8 )
LABEL_14:
          sub_1B64324(this);
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
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_49FE5C6 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1B640C8(&long_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&System_Math_TypeInfo, v9);
    this = (EventInfoUserMultiEventPointControl_o *)sub_1B640C8(&StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, v10);
    byte_49FE5C6 = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_17;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
      sub_1B6432C(this, *(_QWORD *)&idx);
    v13 = pointLabels->m_Items[idx];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v15->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v18 = System_Math__Min_62194376(point, UserPointEventMax, 0LL);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v14, v17, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)this, 0LL);
      return;
    }
LABEL_17:
    sub_1B64324(this);
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
  System_Func_object__bool__o *_9__10_0; // x21
  Il2CppObject *v14; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  EventInfoUserMultiEventPointControl___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__int__o *_9__10_1; // x21
  Il2CppObject *v24; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  struct EventUiValueEntity_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x1

  if ( (byte_49FE5C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___, v6);
    sub_1B640C8(&System_Func_EventUiValueEntity__int__TypeInfo, v7);
    sub_1B640C8(&System_Func_EventUiValueEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__, v9);
    sub_1B640C8(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__, v10);
    sub_1B640C8(&EventInfoUserMultiEventPointControl___c_TypeInfo, v11);
    byte_49FE5C4 = 1;
  }
  if ( entitys )
  {
    v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__bool__o *)v12->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__10_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_EventUiValueEntity__bool__TypeInfo,
                                                  entitys,
                                                  method);
      System_Func_object__bool____ctor(
        _9__10_0,
        v14,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_0__,
        0LL);
      static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__10_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__10_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v21 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v22 = v18;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v21 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__10_1 = (System_Func_object__int__o *)v21->static_fields->__9__10_1;
    if ( !_9__10_1 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v21->static_fields->__9;
      _9__10_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventUiValueEntity__int__TypeInfo, v19, v20);
      System_Func_object__int____ctor(
        _9__10_1,
        v24,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__10_1__,
        0LL);
      v25 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v25->__9__10_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->__9__10_1, (int32_t)_9__10_1, v26, v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v22,
                                                                 (System_Func_TSource__TKey__o *)_9__10_1,
                                                                 (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v29 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v28,
                                               (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_1B64324(v29);
    this->fields.eventUiValueEntityList = v29;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntityList, (int32_t)v29, v30, v31);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v32);
    ((void (__fastcall *)(EventInfoUserMultiEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SetUIDisp.methodPtr);
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

  if ( (byte_49FE5C7 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE5C7 = 1;
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
      v7 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v7, titleSpriteName, 0LL);
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
      v12 = 0;
      do
      {
        if ( v12 >= bgSprites->max_length )
          goto LABEL_28;
        v13 = this->fields.bgSpriteNames;
        if ( !v13 )
          break;
        v14 = (int)v12;
        if ( v12 >= v13->max_length )
LABEL_28:
          sub_1B6432C(IsNullOrEmpty, v6);
        v15 = bgSprites->m_Items[v12];
        v16 = v13->m_Items[v12];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v15, v16, 0LL);
        v17 = this->fields.bgSprites;
        if ( !v17 )
          break;
        if ( (unsigned int)v14 >= v17->max_length )
          goto LABEL_28;
        IsNullOrEmpty = v17->m_Items[v14];
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                               IsNullOrEmpty,
                                               IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
        v12 = v14 + 1;
        if ( max_length == (_DWORD)v14 + 1 )
          return;
        bgSprites = this->fields.bgSprites;
      }
      while ( bgSprites );
LABEL_26:
      sub_1B64324(IsNullOrEmpty);
    }
  }
}


void __fastcall EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE5C8 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoUserMultiEventPointControl___c_TypeInfo, v1);
    byte_49FE5C8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoUserMultiEventPointControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return ent->fields.priority;
}