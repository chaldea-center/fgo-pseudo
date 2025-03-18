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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C24025 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    byte_4C24025 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.userEventPointMaster,
    (int64_t)Master_object,
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
  NetworkManager_c *v8; // x0

  if ( (byte_4C24027 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4C24027 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4C1C955 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventUiEntity = entity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
      sub_1C3B9C0(this, method);
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v5);
  }
}


void __fastcall EventInfoUserMultiEventPointControl__Redisplay(
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
      v5 = 0LL;
      v6 = 0;
      v7 = 0LL;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1C3B9C8(this, method);
        v8 = eventUiValueEntityList->m_Items[v5];
        if ( !v8 )
LABEL_15:
          sub_1C3B9C0(this, method);
        if ( v8->fields.type == 2 )
        {
          this = (EventInfoUserMultiEventPointControl_o *)System_Int32__Parse(v8->fields.value, 0LL);
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
            if ( v6 + 2 == bgSprites->max_length )
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
  if ( (byte_4C24028 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1C3B764(&long_TypeInfo, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&System_Math_TypeInfo, v9);
    this = (EventInfoUserMultiEventPointControl_o *)sub_1C3B764(&StringLiteral_5763/*"Effect/Dedicate"*/, v10);
    byte_4C24028 = 1;
  }
  pointLabels = v6->fields.pointLabels;
  if ( !pointLabels )
    goto LABEL_17;
  max_length = pointLabels->max_length;
  if ( max_length >= 1 && max_length > idx )
  {
    if ( max_length <= (unsigned int)idx )
      sub_1C3B9C8(this, *(_QWORD *)&idx);
    v13 = pointLabels->m_Items[idx];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"Effect/Dedicate"*/, 0LL);
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v15->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = System_Math__Min_64188096(point, UserPointEventMax, 0LL);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21, v17, v18, v19);
    this = (EventInfoUserMultiEventPointControl_o *)System_String__Format(v14, v20, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)this, 0LL);
      return;
    }
LABEL_17:
    sub_1C3B9C0(this, *(_QWORD *)&idx);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  EventInfoUserMultiEventPointControl___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__int__o *_9__13_1; // x21
  Il2CppObject *v26; // x22
  struct EventInfoUserMultiEventPointControl___c_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  struct EventUiValueEntity_array *v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x1

  if ( (byte_4C24026 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_EventUiValueEntity___, v6);
    sub_1C3B764(&System_Func_EventUiValueEntity__int__TypeInfo, v7);
    sub_1C3B764(&System_Func_EventUiValueEntity__bool__TypeInfo, v8);
    sub_1C3B764(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__, v9);
    sub_1C3B764(&Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__, v10);
    sub_1C3B764(&EventInfoUserMultiEventPointControl___c_TypeInfo, v11);
    byte_4C24026 = 1;
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
      _9__13_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventUiValueEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__13_0,
        v14,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_0__,
        0LL);
      static_fields = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__bool__o *)_9__13_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
        (int64_t)_9__13_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
            (System_Func_TSource__bool__o *)_9__13_0,
            (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_EventUiValueEntity___);
    v23 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    v24 = v22;
    if ( !EventInfoUserMultiEventPointControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoUserMultiEventPointControl___c_TypeInfo);
      v23 = EventInfoUserMultiEventPointControl___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v23->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = EventInfoUserMultiEventPointControl___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        v26,
        Method_EventInfoUserMultiEventPointControl___c__Setup_b__13_1__,
        0LL);
      v27 = EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields;
      v27->__9__13_1 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_1;
      sub_1C3B708((PartyOrganizationUtility_o *)&v27->__9__13_1, (int64_t)_9__13_1, v28, v29, v30, v31, v32, v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v24,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v35 = (struct EventUiValueEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v34,
                                               (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    if ( !this )
      sub_1C3B9C0(v35, v36);
    this->fields.eventUiValueEntityList = v35;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntityList,
      (int64_t)v35,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    EventInfoUserMultiEventPointControl__SetupSprite(this, v43);
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
  const MethodInfo *v12; // x3
  UISprite_o *v13; // x20
  System_String_o *titleSpriteName; // x21
  struct UISprite_array *bgSprites; // x8
  __int64 v16; // x9
  struct System_String_array *bgSpriteNames; // x10
  __int64 v18; // x22
  __int64 v19; // x23
  unsigned __int64 v20; // x25
  struct System_String_array *v21; // x9
  UISprite_o *v22; // x20
  System_String_o *v23; // x21
  struct UISprite_array *v24; // x8

  if ( (byte_4C24029 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&Method_EventInfoUserMultiEventPointControl__SetupSprite_b__17_0__, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C24029 = 1;
  }
  if ( this->fields.isUseLocalAtlas )
  {
    eventUiEntity = this->fields.eventUiEntity;
    v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
      v13 = this->fields.titleSprite;
      titleSpriteName = this->fields.titleSpriteName;
      if ( this->fields.isUseLocalAtlas )
      {
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.titleSprite,
          this->fields.titleSpriteName,
          v12);
      }
      else
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v13, titleSpriteName, 0LL);
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
  v16 = *(_QWORD *)&bgSprites->max_length;
  if ( (int)v16 >= 1 )
  {
    bgSpriteNames = this->fields.bgSpriteNames;
    if ( !bgSpriteNames )
      goto LABEL_36;
    if ( (_DWORD)v16 == bgSpriteNames->max_length )
    {
      v18 = 4LL;
      v19 = 1LL - (unsigned int)*(_QWORD *)&bgSprites->max_length;
      do
      {
        v20 = v18 - 4;
        if ( v18 - 4 >= (unsigned __int64)bgSprites->max_length )
          goto LABEL_38;
        v21 = this->fields.bgSpriteNames;
        if ( !v21 )
          break;
        if ( v20 >= v21->max_length )
LABEL_38:
          sub_1C3B9C8(IsNullOrEmpty, v11);
        v22 = (UISprite_o *)*((_QWORD *)&bgSprites->obj.klass + v18);
        v23 = (System_String_o *)*((_QWORD *)&v21->obj.klass + v18);
        if ( this->fields.isUseLocalAtlas )
        {
          IsNullOrEmpty = (struct UISprite_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                 (EventInfoUIBase_o *)this,
                                                 *((UISprite_o **)&bgSprites->obj.klass + v18),
                                                 *((System_String_o **)&v21->obj.klass + v18),
                                                 v12);
        }
        else
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = (struct UISprite_o *)AtlasManager__SetEventUI(v22, v23, 0LL);
        }
        if ( this->fields.isBgSpriteMakePixelPerfect )
        {
          v24 = this->fields.bgSprites;
          if ( !v24 )
            break;
          if ( v20 >= v24->max_length )
            goto LABEL_38;
          IsNullOrEmpty = (struct UISprite_o *)*((_QWORD *)&v24->obj.klass + v18);
          if ( !IsNullOrEmpty )
            break;
          IsNullOrEmpty = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
                                                 IsNullOrEmpty,
                                                 IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
        }
        if ( v19 + v18 == 4 )
          return;
        bgSprites = this->fields.bgSprites;
        ++v18;
      }
      while ( bgSprites );
LABEL_36:
      sub_1C3B9C0(IsNullOrEmpty, v11);
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
    sub_1C3B9C0(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
}


void __fastcall EventInfoUserMultiEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2402A & 1) == 0 )
  {
    sub_1C3B764(&EventInfoUserMultiEventPointControl___c_TypeInfo, v1);
    byte_4C2402A = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventInfoUserMultiEventPointControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUserMultiEventPointControl___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoUserMultiEventPointControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return ent->fields.priority;
}