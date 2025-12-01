void EventExpeditionListViewItemDraw___ctor(EventExpeditionListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.countLabelMaxWidth = 64;
  this->fields.runningRange = 290;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventExpeditionListViewItemDraw__Awake(EventExpeditionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  UnityEngine_Component_o *Parent; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v8; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v12; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19

  if ( (byte_4CC1650 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1650 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Parent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)Parent & 1) != 0 )
  {
    v6 = this->fields.baseSprite;
    if ( !v6 )
      goto LABEL_17;
    mAtlas = v6->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    Parent = (UnityEngine_Component_o *)sub_1C71354(&this->fields.baseAtlas, mAtlas);
    v8 = this->fields.baseSprite;
    if ( !v8 )
      goto LABEL_17;
    mSpriteName = v8->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C71354(&this->fields.baseSpriteName, mSpriteName);
  }
  timeLeftLabel = (UnityEngine_Object_o *)this->fields.timeLeftLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(timeLeftLabel, 0, 0) )
  {
    Parent = (UnityEngine_Component_o *)this->fields.timeLeftLabel;
    if ( Parent )
    {
      gameObject = UnityEngine_Component__get_gameObject(Parent, 0);
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0);
      if ( Parent )
      {
        v12 = UnityEngine_Component__get_gameObject(Parent, 0);
        this->fields.MaskObj = v12;
        p_MaskObj = &this->fields.MaskObj;
        sub_1C71354(p_MaskObj, v12);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C71608(Parent, v5);
  }
}


void EventExpeditionListViewItemDraw__DestroyAnimObj(EventExpeditionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *effectParent; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x19
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  if ( (byte_4CC1654 & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UnityEngine_Transform_TypeInfo);
    byte_4CC1654 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_37:
    sub_1C71608(effectParent, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0);
  if ( !Enumerator )
    sub_1C71608(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v9 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(Enumerator, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_18:
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_36;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v14 = (UnityEngine_Component_o *)sub_1C719A4(v14);
LABEL_36:
      sub_1C71608(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
  }
  v18 = sub_1C714EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_31;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_31:
      v23 = sub_1C47738(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
}


System_String_o *EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
        EventExpeditionListViewItemDraw_o *this,
        int64_t time,
        const MethodInfo *method)
{
  unsigned __int64 v4; // x22
  unsigned __int64 v5; // x21
  unsigned __int64 v6; // x20
  System_String_o *v7; // x19
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  unsigned __int64 v12; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v13; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v14; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CC1655 & 1) == 0 )
  {
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_5810/*"EXPEDITION_TIME_FORMAT"*/);
    byte_4CC1655 = 1;
  }
  if ( time < 1 )
  {
    v6 = 0;
    v5 = 0;
    v4 = 0;
  }
  else
  {
    v4 = time % 0x3CuLL;
    v5 = time / 0x3CuLL % 0x3C;
    v6 = time / 0xE10uLL;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5810/*"EXPEDITION_TIME_FORMAT"*/, 0);
  v14 = v6;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  v13 = v5;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
  v12 = v4;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v12);
  return System_String__Format_64073100(v7, v8, v9, v10, 0);
}


void EventExpeditionListViewItemDraw__PlayRunningAnim(
        EventExpeditionListViewItemDraw_o *this,
        UnityEngine_GameObject_o *effect,
        int32_t idx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x22
  Il2CppObject *Component_object; // x0
  UnityEngine_Transform_o *v11; // x23
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Animation_o *runAnim; // x21
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC1653 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_17297/*"bit_runningdog_{0}_1"*/);
    byte_4CC1653 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)effect,
                                             (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v9 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C71354(&this->fields.runAnim, Component_object);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v11 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4CC0D09 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v11 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v12 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4CC0D0E )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        runAnim = this->fields.runAnim,
        v15 = idx,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17297/*"bit_runningdog_{0}_1"*/, v14, 0),
        !runAnim) )
  {
LABEL_16:
    sub_1C71608(gameObject, v8);
  }
  UnityEngine_Animation__Play_71468084(runAnim, (System_String_o *)gameObject, 0);
  this->fields.runAnimIdx = idx;
}


bool EventExpeditionListViewItemDraw__SetEventPeriodTime(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        const MethodInfo *method)
{
  EventExpeditionListViewItemDraw_o *v4; // x19
  UILabel_o *eventPeriodRestText; // x20
  UILabel_o *v6; // x19
  UILabel_o *eventPeriodRestTimeText; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4CC1656 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_13430/*"TIME_REST_NONE"*/);
    sub_1C713B0(&StringLiteral_5812/*"EXPEDITION_TIME_REST"*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC1656 = 1;
  }
  entity = 0;
  if ( !item )
    goto LABEL_26;
  if ( item->fields.currentEventId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           item->fields.currentEventId,
           (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventExpeditionListViewItemDraw_o *)NetworkManager__getTime(0);
      if ( entity )
      {
        eventPeriodRestText = v4->fields.eventPeriodRestText;
        if ( (__int64)this >= (__int64)entity[6].klass )
        {
          if ( eventPeriodRestText )
          {
            UILabel__set_text(v4->fields.eventPeriodRestText, (System_String_o *)StringLiteral_1/*""*/, 0);
            eventPeriodRestTimeText = v4->fields.eventPeriodRestTimeText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13430/*"TIME_REST_NONE"*/,
                                                          0);
            if ( eventPeriodRestTimeText )
            {
              UILabel__set_text(eventPeriodRestTimeText, (System_String_o *)this, 0);
              return 1;
            }
          }
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5812/*"EXPEDITION_TIME_REST"*/, 0);
          if ( eventPeriodRestText )
          {
            UILabel__set_text(eventPeriodRestText, (System_String_o *)this, 0);
            if ( entity )
            {
              v6 = v4->fields.eventPeriodRestTimeText;
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__GetRestTime2(
                                                            (int64_t)entity[6].klass,
                                                            -1,
                                                            0);
              if ( v6 )
              {
                UILabel__set_text(v6, (System_String_o *)this, 0);
                return 0;
              }
            }
          }
        }
      }
LABEL_26:
      sub_1C71608(this, item);
    }
  }
  return 0;
}


void EventExpeditionListViewItemDraw__SetItem(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventExpeditionListViewItemDraw_o *v6; // x19
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  il2cpp_array_size_t max_length; // x9
  CommonConsumeEntity_o *v9; // x8
  int32_t objectId; // w22
  UISprite_o *baseSprite; // x23
  Il2CppObject *v12; // x0
  System_String_o *v13; // x24
  int32_t v14; // w23
  UISprite_o *maskSprite; // x24
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  UISprite_o *placeIconSprite; // x23
  int32_t v18; // w24
  System_String_o *v19; // x0
  struct EventExpeditionEntity_o *v20; // x8
  UILabel_o *rewardTitleLabel; // x23
  UILabel_o *consumeCountLabel; // x23
  const MethodInfo *v23; // x2
  struct EventExpeditionEntity_o *v24; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x22
  EventExpeditionListViewItemDraw___c_c *v28; // x8
  System_Comparison_T__o *_9__27_0; // x23
  Il2CppObject *v30; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0
  const MethodInfo *v32; // x2
  EventExpeditionListViewItemDraw_o *v33; // x8
  int32_t m_CancellationTokenSource; // w2
  int32_t m_CachedPtr_high; // w1
  int v36; // w8
  int32_t v37; // w22
  UISprite_o *progressGaugeF; // x23
  EventExpeditionListViewItemDraw_o *v39; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  int32_t currentEventId; // [xsp+8h] [xbp-58h] BYREF
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4CC1651 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&System_Comparison_GiftEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C713B0(&EventRewardRootComponent_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__);
    sub_1C713B0(&EventExpeditionListViewItemDraw___c_TypeInfo);
    sub_1C713B0(&StringLiteral_23560/*"shop_item_menu_{0}_2"*/);
    sub_1C713B0(&StringLiteral_23559/*"shop_item_menu_mask"*/);
    sub_1C713B0(&StringLiteral_19256/*"event_gauge_back"*/);
    sub_1C713B0(&StringLiteral_19263/*"event_gauge_front"*/);
    sub_1C713B0(&StringLiteral_5809/*"EXPEDITION_REWARD_TITLE_LABEL"*/);
    sub_1C713B0(&StringLiteral_5801/*"EXPEDITION_EVENT_END"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_1C713B0(&StringLiteral_19264/*"event_gauge_front_complete"*/);
    byte_4CC1651 = 1;
  }
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (max_length = commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)max_length )
        sub_1C71610(this);
      v9 = commonConsumeEntity->m_Items[0];
      if ( !v9 )
        goto LABEL_69;
      objectId = v9->fields.objectId;
      num = v9->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v6->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v13 = System_String__Format((System_String_o *)StringLiteral_23560/*"shop_item_menu_{0}_2"*/, v12, 0);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v13, 0);
    v14 = item->fields.currentEventId;
    maskSprite = v6->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_40880344(
                                                  v14,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_23559/*"shop_item_menu_mask"*/,
                                                  0);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_69;
    placeIconSprite = v6->fields.placeIconSprite;
    v18 = item->fields.currentEventId;
    v19 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0);
    AtlasManager__SetEventUI_40880344(v18, placeIconSprite, v19, 0);
    AtlasManager__SetEventUI_40880344(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_19263/*"event_gauge_front"*/,
      0);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_40880344(
                                                  item->fields.currentEventId,
                                                  v6->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_19256/*"event_gauge_back"*/,
                                                  0);
    v20 = item->fields.eventExpeditionEnt;
    if ( !v20 )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.placeNameLabel;
    if ( !this )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)this, v20->fields.name, 0);
    rewardTitleLabel = v6->fields.rewardTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5809/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0);
    if ( !rewardTitleLabel )
      goto LABEL_69;
    UILabel__set_text(rewardTitleLabel, (System_String_o *)this, 0);
    consumeCountLabel = v6->fields.consumeCountLabel;
    this = (EventExpeditionListViewItemDraw_o *)System_Int32__ToString((int32_t)&num, 0);
    if ( !consumeCountLabel )
      goto LABEL_69;
    UILabel__set_text(consumeCountLabel, (System_String_o *)this, 0);
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeCountLabel;
    if ( !this )
      goto LABEL_69;
    v43.fields.r = 1.0;
    v43.fields.g = 1.0;
    v43.fields.b = 1.0;
    v43.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v43, 0);
    v24 = item->fields.eventExpeditionEnt;
    if ( !v24 )
      goto LABEL_69;
    requiredTimeLabel = v6->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v24->fields.durationSec,
                                                  v23);
    if ( !requiredTimeLabel )
      goto LABEL_69;
    UILabel__set_text(requiredTimeLabel, (System_String_o *)this, 0);
    if ( objectId )
    {
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeIcon;
      if ( !this )
        goto LABEL_69;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, objectId, -1, 1, 0);
    }
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_GiftMaster___);
    v26 = item->fields.eventExpeditionEnt;
    if ( !v26 || !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v26->fields.giftId, 0);
    v27 = (System_Collections_Generic_List_object__o *)this;
    v28 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      this = (EventExpeditionListViewItemDraw_o *)j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v28 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    _9__27_0 = (System_Comparison_T__o *)v28->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = EventExpeditionListViewItemDraw___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__27_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_GiftEntity__TypeInfo);
      System_Comparison_object____ctor(_9__27_0, v30, Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, 0);
      static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      this = (EventExpeditionListViewItemDraw_o *)sub_1C71354(&static_fields->__9__27_0, _9__27_0);
    }
    if ( !v27 )
LABEL_69:
      sub_1C71608(this, item);
    System_Collections_Generic_List_object___Sort_58794460(
      v27,
      _9__27_0,
      (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v27->fields._size >= 1 )
    {
      this = (EventExpeditionListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                    v27,
                                                    0,
                                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_69;
      v33 = this;
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardIcon;
      if ( !this )
        goto LABEL_69;
      m_CancellationTokenSource = (int32_t)v33->fields.m_CancellationTokenSource;
      m_CachedPtr_high = HIDWORD(v33->fields.m_CachedPtr);
      v36 = SHIDWORD(v33->fields.m_CancellationTokenSource) <= 1 ? -1 : HIDWORD(v33->fields.m_CancellationTokenSource);
      ItemIconComponent__SetGift_41196280(
        (ItemIconComponent_o *)this,
        m_CachedPtr_high,
        m_CancellationTokenSource,
        v36,
        0,
        0);
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardCountLabel;
      if ( !this )
        goto LABEL_69;
      UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.countLabelMaxWidth, 0, 0);
    }
    switch ( mode )
    {
      case 1:
        goto LABEL_49;
      case 2:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeCountLabel;
        if ( !this )
          goto LABEL_69;
        v44.fields.r = 0.5;
        v44.fields.g = 0.5;
        v44.fields.b = 0.5;
        v44.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v44, 0);
LABEL_49:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v6->fields.runAnim = 0;
        sub_1C71354(&v6->fields.runAnim, 0);
        break;
      case 3:
        goto LABEL_54;
      case 4:
        v37 = item->fields.currentEventId;
        progressGaugeF = v6->fields.progressGaugeF;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI_40880344(v37, progressGaugeF, (System_String_o *)StringLiteral_19264/*"event_gauge_front_complete"*/, 0);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v32) )
    {
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( (unsigned int)(mode - 3) > 1 )
        {
          EventExpeditionListViewItemDraw__DestroyAnimObj(v6, (const MethodInfo *)item);
          this = (EventExpeditionListViewItemDraw_o *)v6->fields.progressBar;
          if ( this )
          {
            this = (EventExpeditionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              eventEndText = (EventExpeditionListViewItemDraw_o *)v6->fields.eventEndText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_5801/*"EXPEDITION_EVENT_END"*/,
                                                            0);
              if ( eventEndText )
              {
                v39 = this;
                this = eventEndText;
                goto LABEL_67;
              }
            }
          }
        }
        else
        {
          this = (EventExpeditionListViewItemDraw_o *)v6->fields.eventEndText;
          if ( this )
          {
            v39 = (EventExpeditionListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_67:
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v39, 0);
            return;
          }
        }
      }
      goto LABEL_69;
    }
  }
}


void EventExpeditionListViewItemDraw__UpdateItem(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  void *ExpeditionInfo; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w21
  UnityEngine_Object_o *runAnim; // x23
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *v17; // x23
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x3
  unsigned int v21; // w26
  UnityEngine_Object_o *v22; // x23
  UnityEngine_Animation_o *v23; // x23
  Il2CppObject *v24; // x0
  int64_t v25; // x23
  System_String_o *RestTime; // x23
  bool v27; // w0
  const MethodInfo *v28; // x2
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v33; // x23
  Il2CppObject *v34; // x0
  int64_t Time; // x23
  const MethodInfo *v36; // x1
  __int64 v37; // x25
  int v38; // w28
  int64_t v39; // x23
  float v40; // s8
  UnityEngine_Object_o *v41; // x22
  UnityEngine_GameObject_o *v42; // x0
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v44; // x2
  Il2CppObject *name; // x25
  System_String_o *v46; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v50; // x23
  const MethodInfo *v51; // x1
  struct UILabel_o *v52; // x21
  System_String_o *mText; // x22
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  int64_t v56; // x21
  System_String_o *v57; // x21
  int32_t v58; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v60; // x20
  int32_t v61; // [xsp+Ch] [xbp-74h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CC1652 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_5786/*"EXPEDITION_BEST_MATCH_LABEL"*/);
    sub_1C713B0(&StringLiteral_17297/*"bit_runningdog_{0}_1"*/);
    sub_1C713B0(&StringLiteral_5788/*"EXPEDITION_COMPLETE_LABEL"*/);
    sub_1C713B0(&StringLiteral_17298/*"bit_runningdog_{0}_2"*/);
    sub_1C713B0(&StringLiteral_13448/*"TIME_REST_TIMEOVER"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_19264/*"event_gauge_front_complete"*/);
    sub_1C713B0(&StringLiteral_5811/*"EXPEDITION_TIME_LABEL"*/);
    byte_4CC1652 = 1;
  }
  entity = 0;
  if ( !item || !item->fields.eventExpeditionEnt )
    return;
  if ( !EventExpeditionListViewItem__GetExpeditionInfo(item, (const MethodInfo *)item) )
    goto LABEL_93;
  if ( !mode )
    return;
  EventExpeditionListViewItemDraw__SetEventPeriodTime(this, item, v8);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v9);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v12 = *((_DWORD *)ExpeditionInfo + 5);
  if ( mode == 3 )
  {
    runAnim = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(runAnim, 0, 0) )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v12, v14);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v12, v16);
    }
  }
  v17 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0, 0) && this->fields.runAnimIdx != v12 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v11);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    v19 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v12, v18);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v19, v12, v20);
  }
  v21 = mode - 3;
  if ( mode == 3 )
  {
    v22 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)ExpeditionInfo, 0) )
      {
        v23 = this->fields.runAnim;
        v61 = v12;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17297/*"bit_runningdog_{0}_1"*/, v24, 0);
        if ( !v23 )
          goto LABEL_95;
        UnityEngine_Animation__Play_71468084(v23, (System_String_o *)ExpeditionInfo, 0);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0)) == 0 )
  {
LABEL_95:
    sub_1C71608(ExpeditionInfo, v11);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ExpeditionInfo, 0) )
  {
LABEL_93:
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v7);
    return;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v7);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v25 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime = LocalizationManager__GetRestTime(v25, 0);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13448/*"TIME_REST_TIMEOVER"*/, 0);
  if ( !RestTime )
    goto LABEL_95;
  v27 = System_String__Equals_64067044(RestTime, (System_String_o *)ExpeditionInfo, 0);
  if ( v12 >= 1 && v27 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v29 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v12, v28);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v29, v12, v30);
    }
    v31 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0);
      v33 = this->fields.runAnim;
      v61 = v12;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17298/*"bit_runningdog_{0}_2"*/, v34, 0);
      if ( !v33 )
        goto LABEL_95;
      UnityEngine_Animation__Play_71468084(v33, (System_String_o *)ExpeditionInfo, 0);
    }
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v36);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v37 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v38 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v39 = v37 - Time;
  v40 = (float)(v38 - *((_DWORD *)ExpeditionInfo + 6) - v39)
      / (float)(unsigned int)(v38 - *((_DWORD *)ExpeditionInfo + 6));
  if ( v21 <= 1 )
  {
    ExpeditionInfo = this->fields.progressBar;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    ExpeditionInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0);
    if ( !ExpeditionInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ExpeditionInfo, 1, 0);
    ExpeditionInfo = this->fields.progressBar;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v40, 0);
  }
  if ( mode == 3 )
  {
    v41 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v41, 0, 0) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v42, v40 * (float)-(float)this->fields.runningRange, 0);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  ExpeditionInfo = DataManager__GetMasterData_object_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v12,
         0) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5811/*"EXPEDITION_TIME_LABEL"*/, 0);
    if ( !entity )
      goto LABEL_95;
    name = (Il2CppObject *)entity->fields.name;
    v46 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v39,
                                            v44);
    ExpeditionInfo = System_String__Format_64073032(v46, name, ExpeditionTimeLabel, 0);
    if ( !timeLeftLabel )
      goto LABEL_95;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0);
    ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_95;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)ExpeditionInfo,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v50 = (EventExpeditionMaster_o *)MasterData_object;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v51);
    if ( !ExpeditionInfo || !v50 )
      goto LABEL_95;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v50,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v12,
                               0);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v52 = this->fields.timeLeftLabel;
      if ( !v52 )
        goto LABEL_95;
      mText = v52->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_5786/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0);
      v55 = System_String__Concat_64031724(mText, v54, 0);
      UILabel__set_text(v52, v55, 0);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v56 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = LocalizationManager__GetRestTime(v56, 0);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13448/*"TIME_REST_TIMEOVER"*/, 0);
  if ( !v57 )
    goto LABEL_95;
  if ( System_String__Equals_64067044(v57, (System_String_o *)ExpeditionInfo, 0) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0);
    v58 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40880344(v58, progressGaugeF, (System_String_o *)StringLiteral_19264/*"event_gauge_front_complete"*/, 0);
    v60 = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EXPEDITION_COMPLETE_LABEL"*/, 0);
    if ( !v60 )
      goto LABEL_95;
    UILabel__set_text(v60, (System_String_o *)ExpeditionInfo, 0);
  }
  if ( v21 >= 2 )
  {
    ExpeditionInfo = this->fields.timeLeftLabel;
    if ( ExpeditionInfo )
    {
      UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
    goto LABEL_95;
  }
}


void EventExpeditionListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CC1657 & 1) == 0 )
  {
    sub_1C713B0(&EventExpeditionListViewItemDraw___c_TypeInfo);
    byte_4CC1657 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventExpeditionListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventExpeditionListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v1;
  sub_1C71354(EventExpeditionListViewItemDraw___c_TypeInfo->static_fields, v1);
}


void EventExpeditionListViewItemDraw___c___ctor(EventExpeditionListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventExpeditionListViewItemDraw___c___SetItem_b__27_0(
        EventExpeditionListViewItemDraw___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}