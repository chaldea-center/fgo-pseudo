void EventExpeditionListViewItemDraw___ctor(EventExpeditionListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.countLabelMaxWidth = 64;
  this->fields.runningRange = 290;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventExpeditionListViewItemDraw__Awake(EventExpeditionListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  UnityEngine_Component_o *Parent; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v25; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_59324A6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59324A6 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  Parent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)Parent & 1) != 0 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13 )
      goto LABEL_17;
    mAtlas = v13->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v7, v8, v9, v10, v11, v12);
    v21 = this->fields.baseSprite;
    if ( !v21 )
      goto LABEL_17;
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  timeLeftLabel = (UnityEngine_Object_o *)this->fields.timeLeftLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(timeLeftLabel, 0, 0) )
  {
    Parent = (UnityEngine_Component_o *)this->fields.timeLeftLabel;
    if ( Parent )
    {
      gameObject = UnityEngine_Component__get_gameObject(Parent, 0);
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0);
      if ( Parent )
      {
        v25 = UnityEngine_Component__get_gameObject(Parent, 0);
        this->fields.MaskObj = v25;
        p_MaskObj = &this->fields.MaskObj;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_MaskObj, (int32_t)v25, v27, v28, v29, v30, v31, v32);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_21FFECC(Parent, v6);
  }
}


void EventExpeditionListViewItemDraw__DestroyAnimObj(EventExpeditionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *effectParent; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 naturalAligment; // x9
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *gameObject; // x19
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x20
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_IEnumerator_o *v28; // [xsp+28h] [xbp-38h]

  if ( (byte_59324AA & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_59324AA = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_39;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_39:
    sub_21FFECC(effectParent, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0);
  v28 = Enumerator;
  while ( 1 )
  {
    if ( !v28 )
      goto LABEL_37;
    klass = v28->klass;
    v7 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_12;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v9 = sub_2237E2C(v28, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(v28, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = v28->klass;
    v11 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_19;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_19:
      v13 = sub_2237E2C(v28, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       v28,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_21FFECC(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_220024C(v14, UnityEngine_Transform_TypeInfo, v16, v17);
LABEL_37:
      sub_21FFECC(Enumerator, v5);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  v22 = sub_21FFDA4(v28, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_32;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_32:
      v27 = sub_2237E2C(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
}


System_String_o *EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
        EventExpeditionListViewItemDraw_o *this,
        int64_t time,
        const MethodInfo *method)
{
  unsigned __int64 v4; // x20
  unsigned __int64 v5; // x22
  unsigned __int64 v6; // x21
  System_String_o *v7; // x19
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  unsigned __int64 v12; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v13; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v14; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59324AB & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6036/*"EXPEDITION_TIME_FORMAT"*/);
    byte_59324AB = 1;
  }
  if ( time < 1 )
  {
    v4 = 0;
    v6 = 0;
    v5 = 0;
  }
  else
  {
    v4 = time / 0xE10uLL;
    v5 = time % 0x3CuLL;
    v6 = time / 0x3CuLL
       - 60 * ((unsigned __int64)((time / 0x3CuLL * (unsigned __int128)0x888888888888889uLL) >> 64) >> 1);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, time, method);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_6036/*"EXPEDITION_TIME_FORMAT"*/, 0);
  v14 = v4;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v14);
  v13 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v13);
  v12 = v5;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v12);
  return System_String__Format_75484644(v7, v8, v9, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_Transform_o *v17; // x23
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Animation_o *runAnim; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59324A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_17977/*"bit_runningdog_{0}_1"*/);
    byte_59324A9 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effect, *(_QWORD *)&idx);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)effect,
                                             (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v9 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.runAnim,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v17 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5931940 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v17 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v18 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5931945 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        runAnim = this->fields.runAnim,
        v21 = idx,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v21),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17977/*"bit_runningdog_{0}_1"*/, v20, 0),
        !runAnim) )
  {
LABEL_16:
    sub_21FFECC(gameObject, v8);
  }
  UnityEngine_Animation__Play_82865240(runAnim, (System_String_o *)gameObject, 0);
  this->fields.runAnimIdx = idx;
}


bool EventExpeditionListViewItemDraw__SetEventPeriodTime(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        const MethodInfo *method)
{
  EventExpeditionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x2
  UILabel_o *eventPeriodRestText; // x20
  UILabel_o *v9; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *eventPeriodRestTimeText; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_59324AC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13947/*"TIME_REST_NONE"*/);
    sub_21FFC50(&StringLiteral_6038/*"EXPEDITION_TIME_REST"*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59324AC = 1;
  }
  entity = 0;
  if ( !item )
    goto LABEL_26;
  if ( item->fields.currentEventId >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, method);
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           item->fields.currentEventId,
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
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
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
            this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13947/*"TIME_REST_NONE"*/,
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
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v7);
          this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6038/*"EXPEDITION_TIME_REST"*/, 0);
          if ( eventPeriodRestText )
          {
            UILabel__set_text(eventPeriodRestText, (System_String_o *)this, 0);
            if ( entity )
            {
              v9 = v4->fields.eventPeriodRestTimeText;
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__GetRestTime2(
                                                            (int64_t)entity[6].klass,
                                                            -1,
                                                            0);
              if ( v9 )
              {
                UILabel__set_text(v9, (System_String_o *)this, 0);
                return 0;
              }
            }
          }
        }
      }
LABEL_26:
      sub_21FFECC(this, item);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t v18; // w23
  UISprite_o *maskSprite; // x24
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  UISprite_o *placeIconSprite; // x23
  int32_t v22; // w24
  System_String_o *v23; // x0
  struct EventExpeditionEntity_o *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *rewardTitleLabel; // x23
  UILabel_o *consumeCountLabel; // x23
  const MethodInfo *v29; // x2
  struct EventExpeditionEntity_o *v30; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v32; // x8
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x22
  EventExpeditionListViewItemDraw___c_c *v35; // x8
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__27_0; // x23
  Il2CppObject *v38; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x2
  int32_t *v47; // x8
  int v48; // w9
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w22
  UISprite_o *progressGaugeF; // x23
  EventExpeditionListViewItemDraw_o *v57; // x1
  __int64 v58; // x1
  __int64 v59; // x2
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  int32_t currentEventId; // [xsp+8h] [xbp-58h] BYREF
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_59324A7 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&System_Comparison_GiftEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&EventRewardRootComponent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__);
    sub_21FFC50(&EventExpeditionListViewItemDraw___c_TypeInfo);
    sub_21FFC50(&StringLiteral_24631/*"shop_item_menu_{0}_2"*/);
    sub_21FFC50(&StringLiteral_24630/*"shop_item_menu_mask"*/);
    sub_21FFC50(&StringLiteral_20046/*"event_gauge_back"*/);
    sub_21FFC50(&StringLiteral_20053/*"event_gauge_front"*/);
    sub_21FFC50(&StringLiteral_6035/*"EXPEDITION_REWARD_TITLE_LABEL"*/);
    sub_21FFC50(&StringLiteral_6027/*"EXPEDITION_EVENT_END"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_21FFC50(&StringLiteral_20054/*"event_gauge_front_complete"*/);
    byte_59324A7 = 1;
  }
  num = 0;
  if ( item && mode )
  {
    commonConsumeEntity = item->fields.commonConsumeEntity;
    num = 0;
    if ( commonConsumeEntity && (max_length = commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)max_length )
        sub_21FFED4(this);
      v9 = commonConsumeEntity->m_Items[0];
      if ( !v9 )
        goto LABEL_72;
      objectId = v9->fields.objectId;
      num = v9->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v6->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &currentEventId);
    v15 = System_String__Format((System_String_o *)StringLiteral_24631/*"shop_item_menu_{0}_2"*/, v12, 0);
    if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v13, v14);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v15, 0);
    v18 = item->fields.currentEventId;
    maskSprite = v6->fields.maskSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v17);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_47538316(
                                                  v18,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_24630/*"shop_item_menu_mask"*/,
                                                  0);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_72;
    placeIconSprite = v6->fields.placeIconSprite;
    v22 = item->fields.currentEventId;
    v23 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0);
    AtlasManager__SetEventUI_47538316(v22, placeIconSprite, v23, 0);
    AtlasManager__SetEventUI_47538316(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_20053/*"event_gauge_front"*/,
      0);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_47538316(
                                                  item->fields.currentEventId,
                                                  v6->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_20046/*"event_gauge_back"*/,
                                                  0);
    v24 = item->fields.eventExpeditionEnt;
    if ( !v24 )
      goto LABEL_72;
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.placeNameLabel;
    if ( !this )
      goto LABEL_72;
    UILabel__set_text((UILabel_o *)this, v24->fields.name, 0);
    rewardTitleLabel = v6->fields.rewardTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6035/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0);
    if ( !rewardTitleLabel )
      goto LABEL_72;
    UILabel__set_text(rewardTitleLabel, (System_String_o *)this, 0);
    consumeCountLabel = v6->fields.consumeCountLabel;
    this = (EventExpeditionListViewItemDraw_o *)System_Int32__ToString((int32_t)&num, 0);
    if ( !consumeCountLabel )
      goto LABEL_72;
    UILabel__set_text(consumeCountLabel, (System_String_o *)this, 0);
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeCountLabel;
    if ( !this )
      goto LABEL_72;
    v63.fields.r = 1.0;
    v63.fields.g = 1.0;
    v63.fields.b = 1.0;
    v63.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v63, 0);
    v30 = item->fields.eventExpeditionEnt;
    if ( !v30 )
      goto LABEL_72;
    requiredTimeLabel = v6->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v30->fields.durationSec,
                                                  v29);
    if ( !requiredTimeLabel )
      goto LABEL_72;
    UILabel__set_text(requiredTimeLabel, (System_String_o *)this, 0);
    if ( objectId )
    {
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeIcon;
      if ( !this )
        goto LABEL_72;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, objectId, -1, 1, 0);
    }
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
    v32 = item->fields.eventExpeditionEnt;
    if ( !v32 || !this )
      goto LABEL_72;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v32->fields.giftId, 0);
    v34 = (System_Collections_Generic_List_object__o *)this;
    v35 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( !*(&EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo, item, v33);
      v35 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__27_0 = (System_Comparison_T__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !*(&v35->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v35, item, v33);
        static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_GiftEntity__TypeInfo);
      System_Comparison_object____ctor(_9__27_0, v38, Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, 0);
      v39 = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      v39->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v39->__9__27_0, (int32_t)_9__27_0, v40, v41, v42, v43, v44, v45);
    }
    if ( !v34 )
LABEL_72:
      sub_21FFECC(this, item);
    System_Collections_Generic_List_object___Sort_71636404(
      v34,
      _9__27_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v34->fields._size >= 1 )
    {
      this = (EventExpeditionListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                    v34,
                                                    0,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_72;
      v47 = (int32_t *)this;
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardIcon;
      if ( !this )
        goto LABEL_72;
      v48 = v47[7];
      if ( v48 <= 1 )
        v48 = -1;
      ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, v47[5], v47[6], v48, 0, 0);
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardCountLabel;
      if ( !this )
        goto LABEL_72;
      UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.countLabelMaxWidth, 0, 0);
    }
    if ( mode <= 2 )
    {
      if ( mode == 1 )
      {
LABEL_50:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_72;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v6->fields.runAnim = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.runAnim, 0, v49, v50, v51, v52, v53, v54);
        goto LABEL_59;
      }
      if ( mode == 2 )
      {
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeCountLabel;
        if ( !this )
          goto LABEL_72;
        v64.fields.r = 0.5;
        v64.fields.g = 0.5;
        v64.fields.b = 0.5;
        v64.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v64, 0);
        goto LABEL_50;
      }
LABEL_59:
      if ( !EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v46) )
        return;
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
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58, v59);
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_6027/*"EXPEDITION_EVENT_END"*/,
                                                            0);
              if ( eventEndText )
              {
                v57 = this;
                this = eventEndText;
                goto LABEL_70;
              }
            }
          }
        }
        else
        {
          this = (EventExpeditionListViewItemDraw_o *)v6->fields.eventEndText;
          if ( this )
          {
            v57 = (EventExpeditionListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_70:
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v57, 0);
            return;
          }
        }
      }
      goto LABEL_72;
    }
    if ( mode != 3 )
    {
      if ( mode != 4 )
        goto LABEL_59;
      v55 = item->fields.currentEventId;
      progressGaugeF = v6->fields.progressGaugeF;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v46);
      AtlasManager__SetEventUI_47538316(v55, progressGaugeF, (System_String_o *)StringLiteral_20054/*"event_gauge_front_complete"*/, 0);
    }
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
    if ( !this )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    goto LABEL_59;
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
  const MethodInfo *v12; // x2
  int32_t v13; // w21
  UnityEngine_Object_o *runAnim; // x23
  UnityEngine_GameObject_o *RunningAnim; // x0
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *v17; // x23
  __int64 v18; // x2
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x0
  const MethodInfo *v21; // x3
  unsigned int v22; // w26
  UnityEngine_Object_o *v23; // x23
  UnityEngine_Animation_o *v24; // x23
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  int64_t v28; // x23
  System_String_o *RestTime; // x23
  __int64 v30; // x2
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *v35; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v37; // x23
  Il2CppObject *v38; // x0
  int64_t Time; // x23
  const MethodInfo *v40; // x1
  __int64 v41; // x28
  int v42; // w25
  int64_t v43; // x23
  int v44; // w28
  __int64 v45; // x2
  UnityEngine_Object_o *v46; // x22
  UnityEngine_GameObject_o *v47; // x0
  __int64 v48; // x2
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v50; // x2
  Il2CppObject *name; // x25
  System_String_o *v52; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v56; // x23
  const MethodInfo *v57; // x1
  __int64 v58; // x2
  struct UILabel_o *v59; // x21
  System_String_o *mText; // x22
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  __int64 v63; // x2
  int64_t v64; // x21
  System_String_o *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t v68; // w20
  UISprite_o *progressGaugeF; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  UILabel_o *v72; // x20
  int32_t v73; // [xsp+Ch] [xbp-74h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59324A8 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6012/*"EXPEDITION_BEST_MATCH_LABEL"*/);
    sub_21FFC50(&StringLiteral_17977/*"bit_runningdog_{0}_1"*/);
    sub_21FFC50(&StringLiteral_6014/*"EXPEDITION_COMPLETE_LABEL"*/);
    sub_21FFC50(&StringLiteral_17978/*"bit_runningdog_{0}_2"*/);
    sub_21FFC50(&StringLiteral_13965/*"TIME_REST_TIMEOVER"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_20054/*"event_gauge_front_complete"*/);
    sub_21FFC50(&StringLiteral_6037/*"EXPEDITION_TIME_LABEL"*/);
    byte_59324A8 = 1;
  }
  entity = 0;
  if ( item && item->fields.eventExpeditionEnt )
  {
    if ( !EventExpeditionListViewItem__GetExpeditionInfo(item, (const MethodInfo *)item) )
    {
      EventExpeditionListViewItemDraw__DestroyAnimObj(this, v7);
      return;
    }
    if ( mode )
    {
      EventExpeditionListViewItemDraw__SetEventPeriodTime(this, item, v8);
      ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v9);
      if ( !ExpeditionInfo )
        goto LABEL_92;
      v13 = *((_DWORD *)ExpeditionInfo + 5);
      if ( mode == 3 )
      {
        runAnim = (UnityEngine_Object_o *)this->fields.runAnim;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        if ( UnityEngine_Object__op_Equality(runAnim, 0, 0) )
        {
          RunningAnim = EventExpeditionListViewItem__GetRunningAnim(item, v13, v12);
          EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunningAnim, v13, v16);
        }
      }
      v17 = (UnityEngine_Object_o *)this->fields.runAnim;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      if ( UnityEngine_Object__op_Inequality(v17, 0, 0) && this->fields.runAnimIdx != v13 )
      {
        EventExpeditionListViewItemDraw__DestroyAnimObj(this, v11);
        v20 = EventExpeditionListViewItem__GetRunningAnim(item, v13, v19);
        EventExpeditionListViewItemDraw__PlayRunningAnim(this, v20, v13, v21);
      }
      v22 = mode - 3;
      if ( mode == 3 )
      {
        v23 = (UnityEngine_Object_o *)this->fields.runAnim;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v18);
        if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
        {
          ExpeditionInfo = this->fields.runAnim;
          if ( !ExpeditionInfo )
            goto LABEL_92;
          if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)ExpeditionInfo, 0) )
          {
            v24 = this->fields.runAnim;
            v73 = v13;
            v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v73);
            ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17977/*"bit_runningdog_{0}_1"*/, v25, 0);
            if ( !v24 )
              goto LABEL_92;
            UnityEngine_Animation__Play_82865240(v24, (System_String_o *)ExpeditionInfo, 0);
          }
        }
      }
      ExpeditionInfo = this->fields.MaskObj;
      if ( !ExpeditionInfo )
        goto LABEL_92;
      ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0);
      if ( !ExpeditionInfo )
        goto LABEL_92;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ExpeditionInfo, 0) )
      {
        EventExpeditionListViewItemDraw__DestroyAnimObj(this, v26);
        return;
      }
      ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v26);
      if ( !ExpeditionInfo )
        goto LABEL_92;
      v28 = *((unsigned int *)ExpeditionInfo + 7);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v27);
      RestTime = LocalizationManager__GetRestTime(v28, 0);
      ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13965/*"TIME_REST_TIMEOVER"*/, 0);
      if ( !RestTime )
        goto LABEL_92;
      if ( System_String__Equals_75473208(RestTime, (System_String_o *)ExpeditionInfo, 0) && v13 >= 1 )
      {
        ExpeditionInfo = this->fields.effectParent;
        if ( !ExpeditionInfo )
          goto LABEL_92;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0) <= 0 )
        {
          v33 = EventExpeditionListViewItem__GetRunningAnim(item, v13, v32);
          EventExpeditionListViewItemDraw__PlayRunningAnim(this, v33, v13, v34);
        }
        v35 = (UnityEngine_Object_o *)this->fields.runAnim;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
        if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
        {
          ExpeditionInfo = this->fields.runAnim;
          if ( !ExpeditionInfo )
            goto LABEL_92;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0);
          GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0);
          v37 = this->fields.runAnim;
          v73 = v13;
          v38 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v73);
          ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17978/*"bit_runningdog_{0}_2"*/, v38, 0);
          if ( !v37 )
            goto LABEL_92;
          UnityEngine_Animation__Play_82865240(v37, (System_String_o *)ExpeditionInfo, 0);
        }
      }
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v30);
      Time = NetworkManager__getTime(0);
      ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v40);
      if ( !ExpeditionInfo
        || (v41 = *((unsigned int *)ExpeditionInfo + 7),
            (ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11)) == 0)
        || (v42 = *((_DWORD *)ExpeditionInfo + 7),
            (ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11)) == 0) )
      {
LABEL_92:
        sub_21FFECC(ExpeditionInfo, v11);
      }
      v43 = v41 - Time;
      if ( v22 <= 1 )
      {
        if ( !this->fields.progressBar )
          goto LABEL_92;
        v44 = *((_DWORD *)ExpeditionInfo + 6);
        ExpeditionInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBar, 0);
        if ( !ExpeditionInfo )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ExpeditionInfo, 1, 0);
        ExpeditionInfo = this->fields.progressBar;
        if ( !ExpeditionInfo )
          goto LABEL_92;
        UIProgressBar__set_value(
          (UIProgressBar_o *)ExpeditionInfo,
          (float)(v42 - v44 - v43) / (float)(unsigned int)(v42 - v44),
          0);
        if ( mode == 3 )
        {
          v46 = (UnityEngine_Object_o *)this->fields.runAnim;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v45);
          if ( UnityEngine_Object__op_Inequality(v46, 0, 0) )
          {
            ExpeditionInfo = this->fields.runAnim;
            if ( !ExpeditionInfo )
              goto LABEL_92;
            v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0);
            GameObjectExtensions__SetLocalPositionX(
              v47,
              -(float)((float)this->fields.runningRange
                     * (float)((float)(v42 - v44 - v43) / (float)(unsigned int)(v42 - v44))),
              0);
          }
        }
      }
      ExpeditionInfo = this->fields.timeLeftLabel;
      if ( !ExpeditionInfo )
        goto LABEL_92;
      UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
      ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ExpeditionInfo )
        goto LABEL_92;
      ExpeditionInfo = DataManager__GetMasterData_object_(
                         (DataManager_o *)ExpeditionInfo,
                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
      if ( !ExpeditionInfo )
        goto LABEL_92;
      if ( EventExpeditionPieceMaster__TryGetEntity(
             (EventExpeditionPieceMaster_o *)ExpeditionInfo,
             &entity,
             item->fields.currentEventId,
             v13,
             0) )
      {
        timeLeftLabel = this->fields.timeLeftLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v48);
        ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_6037/*"EXPEDITION_TIME_LABEL"*/, 0);
        if ( !entity )
          goto LABEL_92;
        name = (Il2CppObject *)entity->fields.name;
        v52 = (System_String_o *)ExpeditionInfo;
        ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                                v43,
                                                v50);
        ExpeditionInfo = System_String__Format_75484576(v52, name, ExpeditionTimeLabel, 0);
        if ( !timeLeftLabel )
          goto LABEL_92;
        UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0);
        ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ExpeditionInfo )
          goto LABEL_92;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)ExpeditionInfo,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
        currentEventId = item->fields.currentEventId;
        v56 = (EventExpeditionMaster_o *)MasterData_object;
        ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v57);
        if ( !ExpeditionInfo || !v56 )
          goto LABEL_92;
        ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                                   v56,
                                   currentEventId,
                                   *((_DWORD *)ExpeditionInfo + 4),
                                   v13,
                                   0);
        if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
        {
          v59 = this->fields.timeLeftLabel;
          if ( !v59 )
            goto LABEL_92;
          mText = v59->fields.mText;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v58);
          v61 = LocalizationManager__Get((System_String_o *)StringLiteral_6012/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0);
          v62 = System_String__Concat_75438412(mText, v61, 0);
          UILabel__set_text(v59, v62, 0);
        }
      }
      ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
      if ( !ExpeditionInfo )
        goto LABEL_92;
      v64 = *((unsigned int *)ExpeditionInfo + 7);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v63);
      v65 = LocalizationManager__GetRestTime(v64, 0);
      ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13965/*"TIME_REST_TIMEOVER"*/, 0);
      if ( !v65 )
        goto LABEL_92;
      if ( System_String__Equals_75473208(v65, (System_String_o *)ExpeditionInfo, 0) )
      {
        ActionExtensions__Call(item->fields.updateNoticeNum, 0);
        v68 = item->fields.currentEventId;
        progressGaugeF = this->fields.progressGaugeF;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v66, v67);
        AtlasManager__SetEventUI_47538316(v68, progressGaugeF, (System_String_o *)StringLiteral_20054/*"event_gauge_front_complete"*/, 0);
        v72 = this->fields.timeLeftLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70, v71);
        ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_6014/*"EXPEDITION_COMPLETE_LABEL"*/, 0);
        if ( !v72 )
          goto LABEL_92;
        UILabel__set_text(v72, (System_String_o *)ExpeditionInfo, 0);
      }
      if ( v22 >= 2 )
      {
        ExpeditionInfo = this->fields.timeLeftLabel;
        if ( ExpeditionInfo )
        {
          UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
        goto LABEL_92;
      }
    }
  }
}


void EventExpeditionListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59324AD & 1) == 0 )
  {
    sub_21FFC50(&EventExpeditionListViewItemDraw___c_TypeInfo);
    byte_59324AD = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventExpeditionListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventExpeditionListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventExpeditionListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}