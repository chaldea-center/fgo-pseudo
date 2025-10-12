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
  struct UISprite_o *v5; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v7; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v11; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19

  if ( (byte_4C31C9B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31C9B = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Parent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)Parent & 1) != 0 )
  {
    v5 = this->fields.baseSprite;
    if ( !v5 )
      goto LABEL_17;
    mAtlas = v5->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    Parent = (UnityEngine_Component_o *)sub_1C32BC4(&this->fields.baseAtlas, mAtlas);
    v7 = this->fields.baseSprite;
    if ( !v7 )
      goto LABEL_17;
    mSpriteName = v7->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C32BC4(&this->fields.baseSpriteName, mSpriteName);
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
        v11 = UnityEngine_Component__get_gameObject(Parent, 0);
        this->fields.MaskObj = v11;
        p_MaskObj = &this->fields.MaskObj;
        sub_1C32BC4(p_MaskObj, v11);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C32E7C(Parent);
  }
}


void EventExpeditionListViewItemDraw__DestroyAnimObj(EventExpeditionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *effectParent; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_IEnumerator_c *v9; // x8
  __int64 v10; // x9
  System_Collections_IEnumerator_c **v11; // x10
  __int64 v12; // x0
  UnityEngine_Component_o *v13; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x19
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0

  if ( (byte_4C31C9F & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C31C9F = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_37:
    sub_1C32E7C(effectParent);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_11;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v8 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v8)(Enumerator, *(_QWORD *)(v8 + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 2;
        if ( !v10 )
          goto LABEL_18;
      }
      v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1];
    }
    else
    {
LABEL_18:
      v12 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v13 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                       Enumerator,
                                       *(_QWORD *)(v12 + 8));
    if ( !v13 )
      goto LABEL_36;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v13->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v13 = (UnityEngine_Component_o *)sub_1C3313C(v13);
LABEL_36:
      sub_1C32E7C(v13);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
  }
  v16 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v16 )
  {
    v17 = *(_QWORD *)v16;
    v18 = v16;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_31;
      }
      v21 = v17 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_31:
      v21 = sub_1C83438(v16, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  unsigned __int64 v30; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v31; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v32; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C31CA0 & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5816/*"EXPEDITION_TIME_FORMAT"*/);
    byte_4C31CA0 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5816/*"EXPEDITION_TIME_FORMAT"*/, 0);
  v32 = v6;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32, v8, v9, v10, v11, v12, v13);
  v31 = v5;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31, v15, v16, v17, v18, v19, v20);
  v30 = v4;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v30, v22, v23, v24, v25, v26, v27);
  return System_String__Format_63559904(v7, v14, v21, v28, 0);
}


void EventExpeditionListViewItemDraw__PlayRunningAnim(
        EventExpeditionListViewItemDraw_o *this,
        UnityEngine_GameObject_o *effect,
        int32_t idx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x22
  Il2CppObject *Component_object; // x0
  UnityEngine_Transform_o *v10; // x23
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Animation_o *runAnim; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C31C9E & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17274/*"bit_runningdog_{0}_1"*/);
    byte_4C31C9E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)effect,
                                             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C32BC4(&this->fields.runAnim, Component_object);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  v10 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v10 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  v11 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D6 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v11
    || (UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        runAnim = this->fields.runAnim,
        v20 = idx,
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13, v14, v15, v16, v17, v18),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17274/*"bit_runningdog_{0}_1"*/, v19, 0),
        !runAnim) )
  {
LABEL_16:
    sub_1C32E7C(gameObject);
  }
  UnityEngine_Animation__Play_70968924(runAnim, (System_String_o *)gameObject, 0);
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
  if ( (byte_4C31CA1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13420/*"TIME_REST_NONE"*/);
    sub_1C32C20(&StringLiteral_5818/*"EXPEDITION_TIME_REST"*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31CA1 = 1;
  }
  entity = 0;
  if ( !item )
    goto LABEL_26;
  if ( item->fields.currentEventId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           item->fields.currentEventId,
           (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
                                                          (System_String_o *)StringLiteral_13420/*"TIME_REST_NONE"*/,
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
          this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5818/*"EXPEDITION_TIME_REST"*/, 0);
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
      sub_1C32E7C(this);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void EventExpeditionListViewItemDraw__SetItem(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  EventExpeditionListViewItemDraw_o *v10; // x19
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  il2cpp_array_size_t max_length; // x9
  CommonConsumeEntity_o *v13; // x8
  int32_t objectId; // w22
  UISprite_o *baseSprite; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x24
  int32_t v18; // w23
  UISprite_o *maskSprite; // x24
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  UISprite_o *placeIconSprite; // x23
  int32_t v22; // w24
  System_String_o *v23; // x0
  struct EventExpeditionEntity_o *v24; // x8
  UILabel_o *rewardTitleLabel; // x23
  UILabel_o *consumeCountLabel; // x23
  const MethodInfo *v27; // x2
  struct EventExpeditionEntity_o *v28; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v30; // x8
  System_Collections_Generic_List_object__o *v31; // x22
  EventExpeditionListViewItemDraw___c_c *v32; // x8
  System_Comparison_T__o *_9__27_0; // x23
  Il2CppObject *v34; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0
  const MethodInfo *v36; // x2
  EventExpeditionListViewItemDraw_o *v37; // x8
  int32_t m_CancellationTokenSource; // w2
  int32_t m_CachedPtr_high; // w1
  int v40; // w8
  int32_t v41; // w22
  UISprite_o *progressGaugeF; // x23
  const MethodInfo *v43; // x1
  EventExpeditionListViewItemDraw_o *v44; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  int32_t currentEventId; // [xsp+8h] [xbp-58h] BYREF
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = this;
  if ( (byte_4C31C9C & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&System_Comparison_GiftEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C32C20(&EventRewardRootComponent_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__);
    sub_1C32C20(&EventExpeditionListViewItemDraw___c_TypeInfo);
    sub_1C32C20(&StringLiteral_23447/*"shop_item_menu_{0}_2"*/);
    sub_1C32C20(&StringLiteral_23446/*"shop_item_menu_mask"*/);
    sub_1C32C20(&StringLiteral_19193/*"event_gauge_back"*/);
    sub_1C32C20(&StringLiteral_19200/*"event_gauge_front"*/);
    sub_1C32C20(&StringLiteral_5815/*"EXPEDITION_REWARD_TITLE_LABEL"*/);
    sub_1C32C20(&StringLiteral_5807/*"EXPEDITION_EVENT_END"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_1C32C20(&StringLiteral_19201/*"event_gauge_front_complete"*/);
    byte_4C31C9C = 1;
  }
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (max_length = commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)max_length )
        sub_1C32E84(this);
      v13 = commonConsumeEntity->m_Items[0];
      if ( !v13 )
        goto LABEL_69;
      objectId = v13->fields.objectId;
      num = v13->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v10->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, *(_QWORD *)&mode, method, v4, v5, v6, v7);
    v17 = System_String__Format((System_String_o *)StringLiteral_23447/*"shop_item_menu_{0}_2"*/, v16, 0);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v17, 0);
    v18 = item->fields.currentEventId;
    maskSprite = v10->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_40507600(
                                                  v18,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_23446/*"shop_item_menu_mask"*/,
                                                  0);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_69;
    placeIconSprite = v10->fields.placeIconSprite;
    v22 = item->fields.currentEventId;
    v23 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0);
    AtlasManager__SetEventUI_40507600(v22, placeIconSprite, v23, 0);
    AtlasManager__SetEventUI_40507600(
      item->fields.currentEventId,
      v10->fields.progressGaugeF,
      (System_String_o *)StringLiteral_19200/*"event_gauge_front"*/,
      0);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_40507600(
                                                  item->fields.currentEventId,
                                                  v10->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_19193/*"event_gauge_back"*/,
                                                  0);
    v24 = item->fields.eventExpeditionEnt;
    if ( !v24 )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)v10->fields.placeNameLabel;
    if ( !this )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)this, v24->fields.name, 0);
    rewardTitleLabel = v10->fields.rewardTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5815/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0);
    if ( !rewardTitleLabel )
      goto LABEL_69;
    UILabel__set_text(rewardTitleLabel, (System_String_o *)this, 0);
    consumeCountLabel = v10->fields.consumeCountLabel;
    this = (EventExpeditionListViewItemDraw_o *)System_Int32__ToString((int32_t)&num, 0);
    if ( !consumeCountLabel )
      goto LABEL_69;
    UILabel__set_text(consumeCountLabel, (System_String_o *)this, 0);
    this = (EventExpeditionListViewItemDraw_o *)v10->fields.consumeCountLabel;
    if ( !this )
      goto LABEL_69;
    v48.fields.r = 1.0;
    v48.fields.g = 1.0;
    v48.fields.b = 1.0;
    v48.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v48, 0);
    v28 = item->fields.eventExpeditionEnt;
    if ( !v28 )
      goto LABEL_69;
    requiredTimeLabel = v10->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v28->fields.durationSec,
                                                  v27);
    if ( !requiredTimeLabel )
      goto LABEL_69;
    UILabel__set_text(requiredTimeLabel, (System_String_o *)this, 0);
    if ( objectId )
    {
      this = (EventExpeditionListViewItemDraw_o *)v10->fields.consumeIcon;
      if ( !this )
        goto LABEL_69;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, objectId, -1, 1, 0);
    }
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftMaster___);
    v30 = item->fields.eventExpeditionEnt;
    if ( !v30 || !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v30->fields.giftId, 0);
    v31 = (System_Collections_Generic_List_object__o *)this;
    v32 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      this = (EventExpeditionListViewItemDraw_o *)j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v32 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    _9__27_0 = (System_Comparison_T__o *)v32->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = EventExpeditionListViewItemDraw___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__27_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_GiftEntity__TypeInfo);
      System_Comparison_object____ctor(_9__27_0, v34, Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, 0);
      static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      this = (EventExpeditionListViewItemDraw_o *)sub_1C32BC4(&static_fields->__9__27_0, _9__27_0);
    }
    if ( !v31 )
LABEL_69:
      sub_1C32E7C(this);
    System_Collections_Generic_List_object___Sort_58303104(
      v31,
      _9__27_0,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v31->fields._size >= 1 )
    {
      this = (EventExpeditionListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                    v31,
                                                    0,
                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_69;
      v37 = this;
      this = (EventExpeditionListViewItemDraw_o *)v10->fields.rewardIcon;
      if ( !this )
        goto LABEL_69;
      m_CancellationTokenSource = (int32_t)v37->fields.m_CancellationTokenSource;
      m_CachedPtr_high = HIDWORD(v37->fields.m_CachedPtr);
      v40 = SHIDWORD(v37->fields.m_CancellationTokenSource) <= 1 ? -1 : HIDWORD(v37->fields.m_CancellationTokenSource);
      ItemIconComponent__SetGift_40822420(
        (ItemIconComponent_o *)this,
        m_CachedPtr_high,
        m_CancellationTokenSource,
        v40,
        0,
        0);
      this = (EventExpeditionListViewItemDraw_o *)v10->fields.rewardCountLabel;
      if ( !this )
        goto LABEL_69;
      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.countLabelMaxWidth, 0, 0);
    }
    switch ( mode )
    {
      case 1:
        goto LABEL_49;
      case 2:
        this = (EventExpeditionListViewItemDraw_o *)v10->fields.consumeCountLabel;
        if ( !this )
          goto LABEL_69;
        v49.fields.r = 0.5;
        v49.fields.g = 0.5;
        v49.fields.b = 0.5;
        v49.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v49, 0);
LABEL_49:
        this = (EventExpeditionListViewItemDraw_o *)v10->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v10->fields.runAnim = 0;
        sub_1C32BC4(&v10->fields.runAnim, 0);
        break;
      case 3:
        goto LABEL_54;
      case 4:
        v41 = item->fields.currentEventId;
        progressGaugeF = v10->fields.progressGaugeF;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI_40507600(v41, progressGaugeF, (System_String_o *)StringLiteral_19201/*"event_gauge_front_complete"*/, 0);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v10->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v10, item, v36) )
    {
      this = (EventExpeditionListViewItemDraw_o *)v10->fields.MaskObj;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( (unsigned int)(mode - 3) > 1 )
        {
          EventExpeditionListViewItemDraw__DestroyAnimObj(v10, v43);
          this = (EventExpeditionListViewItemDraw_o *)v10->fields.progressBar;
          if ( this )
          {
            this = (EventExpeditionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              eventEndText = (EventExpeditionListViewItemDraw_o *)v10->fields.eventEndText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_5807/*"EXPEDITION_EVENT_END"*/,
                                                            0);
              if ( eventEndText )
              {
                v44 = this;
                this = eventEndText;
                goto LABEL_67;
              }
            }
          }
        }
        else
        {
          this = (EventExpeditionListViewItemDraw_o *)v10->fields.eventEndText;
          if ( this )
          {
            v44 = (EventExpeditionListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_67:
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v44, 0);
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
  int32_t v11; // w21
  UnityEngine_Object_o *runAnim; // x23
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x3
  unsigned int v21; // w26
  UnityEngine_Object_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  UnityEngine_Animation_o *v29; // x23
  Il2CppObject *v30; // x0
  int64_t v31; // x23
  System_String_o *RestTime; // x23
  bool v33; // w0
  const MethodInfo *v34; // x2
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *v37; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x0
  int64_t Time; // x23
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  __int64 v50; // x25
  const MethodInfo *v51; // x1
  int v52; // w28
  int64_t v53; // x23
  float v54; // s8
  UnityEngine_Object_o *v55; // x22
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x1
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v59; // x2
  Il2CppObject *name; // x25
  System_String_o *v61; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v65; // x23
  const MethodInfo *v66; // x1
  struct UILabel_o *v67; // x21
  System_String_o *mText; // x22
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  int64_t v71; // x21
  System_String_o *v72; // x21
  int32_t v73; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v75; // x20
  int32_t v76; // [xsp+Ch] [xbp-74h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C31C9D & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_5792/*"EXPEDITION_BEST_MATCH_LABEL"*/);
    sub_1C32C20(&StringLiteral_17274/*"bit_runningdog_{0}_1"*/);
    sub_1C32C20(&StringLiteral_5794/*"EXPEDITION_COMPLETE_LABEL"*/);
    sub_1C32C20(&StringLiteral_17275/*"bit_runningdog_{0}_2"*/);
    sub_1C32C20(&StringLiteral_13438/*"TIME_REST_TIMEOVER"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_19201/*"event_gauge_front_complete"*/);
    sub_1C32C20(&StringLiteral_5817/*"EXPEDITION_TIME_LABEL"*/);
    byte_4C31C9D = 1;
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
  v11 = *((_DWORD *)ExpeditionInfo + 5);
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
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v11, v13);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v11, v15);
    }
  }
  v16 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) && this->fields.runAnimIdx != v11 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v17);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    v19 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v11, v18);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v19, v11, v20);
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
        v29 = this->fields.runAnim;
        v76 = v11;
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v23, v24, v25, v26, v27, v28);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17274/*"bit_runningdog_{0}_1"*/, v30, 0);
        if ( !v29 )
          goto LABEL_95;
        UnityEngine_Animation__Play_70968924(v29, (System_String_o *)ExpeditionInfo, 0);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0)) == 0 )
  {
LABEL_95:
    sub_1C32E7C(ExpeditionInfo);
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
  v31 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime = LocalizationManager__GetRestTime(v31, 0);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13438/*"TIME_REST_TIMEOVER"*/, 0);
  if ( !RestTime )
    goto LABEL_95;
  v33 = System_String__Equals_63553848(RestTime, (System_String_o *)ExpeditionInfo, 0);
  if ( v11 >= 1 && v33 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v35 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v11, v34);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v35, v11, v36);
    }
    v37 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v37, 0, 0) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0);
      v39 = this->fields.runAnim;
      v76 = v11;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v40, v41, v42, v43, v44, v45);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17275/*"bit_runningdog_{0}_2"*/, v46, 0);
      if ( !v39 )
        goto LABEL_95;
      UnityEngine_Animation__Play_70968924(v39, (System_String_o *)ExpeditionInfo, 0);
    }
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v48);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v50 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v49);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v52 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v51);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v53 = v50 - Time;
  v54 = (float)(v52 - *((_DWORD *)ExpeditionInfo + 6) - v53)
      / (float)(unsigned int)(v52 - *((_DWORD *)ExpeditionInfo + 6));
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
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v54, 0);
  }
  if ( mode == 3 )
  {
    v55 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v55, 0, 0) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0);
      GameObjectExtensions__SetLocalPositionX(v56, v54 * (float)-(float)this->fields.runningRange, 0);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  ExpeditionInfo = DataManager__GetMasterData_object_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v11,
         0) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5817/*"EXPEDITION_TIME_LABEL"*/, 0);
    if ( !entity )
      goto LABEL_95;
    name = (Il2CppObject *)entity->fields.name;
    v61 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v53,
                                            v59);
    ExpeditionInfo = System_String__Format_63559836(v61, name, ExpeditionTimeLabel, 0);
    if ( !timeLeftLabel )
      goto LABEL_95;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0);
    ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_95;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)ExpeditionInfo,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v65 = (EventExpeditionMaster_o *)MasterData_object;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v66);
    if ( !ExpeditionInfo || !v65 )
      goto LABEL_95;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v65,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v11,
                               0);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v67 = this->fields.timeLeftLabel;
      if ( !v67 )
        goto LABEL_95;
      mText = v67->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_5792/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0);
      v70 = System_String__Concat_63518544(mText, v69, 0);
      UILabel__set_text(v67, v70, 0);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v57);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v71 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v72 = LocalizationManager__GetRestTime(v71, 0);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13438/*"TIME_REST_TIMEOVER"*/, 0);
  if ( !v72 )
    goto LABEL_95;
  if ( System_String__Equals_63553848(v72, (System_String_o *)ExpeditionInfo, 0) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0);
    v73 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40507600(v73, progressGaugeF, (System_String_o *)StringLiteral_19201/*"event_gauge_front_complete"*/, 0);
    v75 = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5794/*"EXPEDITION_COMPLETE_LABEL"*/, 0);
    if ( !v75 )
      goto LABEL_95;
    UILabel__set_text(v75, (System_String_o *)ExpeditionInfo, 0);
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

  if ( (byte_4C31CA2 & 1) == 0 )
  {
    sub_1C32C20(&EventExpeditionListViewItemDraw___c_TypeInfo);
    byte_4C31CA2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventExpeditionListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventExpeditionListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v1;
  sub_1C32BC4(EventExpeditionListViewItemDraw___c_TypeInfo->static_fields, v1);
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
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}