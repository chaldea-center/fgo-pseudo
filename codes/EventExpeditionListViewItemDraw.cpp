void __fastcall EventExpeditionListViewItemDraw___ctor(
        EventExpeditionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.countLabelMaxWidth = 64;
  this->fields.runningRange = 290;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewItemDraw__Awake(
        EventExpeditionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  UnityEngine_Component_o *Parent; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v24; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BE048F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE048F = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Parent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Parent & 1) != 0 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12 )
      goto LABEL_17;
    mAtlas = v12->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v6, v7, v8, v9, v10, v11);
    v20 = this->fields.baseSprite;
    if ( !v20 )
      goto LABEL_17;
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  timeLeftLabel = (UnityEngine_Object_o *)this->fields.timeLeftLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(timeLeftLabel, 0LL, 0LL) )
  {
    Parent = (UnityEngine_Component_o *)this->fields.timeLeftLabel;
    if ( Parent )
    {
      gameObject = UnityEngine_Component__get_gameObject(Parent, 0LL);
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( Parent )
      {
        v24 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        this->fields.MaskObj = v24;
        p_MaskObj = &this->fields.MaskObj;
        sub_1C21DDC((PartyOrganizationUtility_o *)p_MaskObj, (int64_t)v24, v26, v27, v28, v29, v30, v31);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1C22094(Parent, v5);
  }
}


void __fastcall EventExpeditionListViewItemDraw__DestroyAnimObj(
        EventExpeditionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *effectParent; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x19
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  if ( (byte_4BE0493 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BE0493 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_37:
    sub_1C22094(effectParent, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_18:
      v13 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v14);
LABEL_36:
      sub_1C22094(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  }
  v18 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
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
      v23 = sub_1C73E18(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
}


System_String_o *__fastcall EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
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
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  unsigned __int64 v21; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v22; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v23; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BE0494 & 1) == 0 )
  {
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5939/*"EXPEDITION_TIME_FORMAT"*/);
    byte_4BE0494 = 1;
  }
  if ( time < 1 )
  {
    v6 = 0LL;
    v5 = 0LL;
    v4 = 0LL;
  }
  else
  {
    v4 = time % 0x3CuLL;
    v5 = time / 0x3CuLL % 0x3C;
    v6 = time / 0xE10uLL;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5939/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v23 = v6;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v8, v9, v10);
  v22 = v5;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v12, v13, v14);
  v21 = v4;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21, v16, v17, v18);
  return System_String__Format_63129916(v7, v11, v15, v19, 0LL);
}


void __fastcall EventExpeditionListViewItemDraw__PlayRunningAnim(
        EventExpeditionListViewItemDraw_o *this,
        UnityEngine_GameObject_o *effect,
        int32_t idx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x22
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Transform_o *v17; // x23
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Animation_o *runAnim; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BE0492 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17594/*"bit_runningdog_{0}_1"*/);
    byte_4BE0492 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)effect,
                                             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v9 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.runAnim,
    (int64_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v17 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BD6BB1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v17 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v18 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BD6BB6 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        runAnim = this->fields.runAnim,
        v24 = idx,
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17594/*"bit_runningdog_{0}_1"*/, v23, 0LL),
        !runAnim) )
  {
LABEL_16:
    sub_1C22094(gameObject, v8);
  }
  UnityEngine_Animation__Play_70614020(runAnim, (System_String_o *)gameObject, 0LL);
  this->fields.runAnimIdx = idx;
}


bool __fastcall EventExpeditionListViewItemDraw__SetEventPeriodTime(
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
  if ( (byte_4BE0495 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13587/*"TIME_REST_NONE"*/);
    sub_1C21E38(&StringLiteral_5941/*"EXPEDITION_TIME_REST"*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0495 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_26;
  if ( item->fields.currentEventId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           item->fields.currentEventId,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventExpeditionListViewItemDraw_o *)NetworkManager__getTime(0LL);
      if ( entity )
      {
        eventPeriodRestText = v4->fields.eventPeriodRestText;
        if ( (__int64)this >= (__int64)entity[6].klass )
        {
          if ( eventPeriodRestText )
          {
            UILabel__set_text(v4->fields.eventPeriodRestText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            eventPeriodRestTimeText = v4->fields.eventPeriodRestTimeText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13587/*"TIME_REST_NONE"*/,
                                                          0LL);
            if ( eventPeriodRestTimeText )
            {
              UILabel__set_text(eventPeriodRestTimeText, (System_String_o *)this, 0LL);
              return 1;
            }
          }
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_5941/*"EXPEDITION_TIME_REST"*/,
                                                        0LL);
          if ( eventPeriodRestText )
          {
            UILabel__set_text(eventPeriodRestText, (System_String_o *)this, 0LL);
            if ( entity )
            {
              v6 = v4->fields.eventPeriodRestTimeText;
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__GetRestTime2(
                                                            (int64_t)entity[6].klass,
                                                            -1LL,
                                                            0LL);
              if ( v6 )
              {
                UILabel__set_text(v6, (System_String_o *)this, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_26:
      sub_1C22094(this, item);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewItemDraw__SetItem(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v4; // x4
  EventExpeditionListViewItemDraw_o *v7; // x19
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  __int64 v9; // x9
  CommonConsumeEntity_o *v10; // x8
  int32_t objectId; // w22
  UISprite_o *baseSprite; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x24
  int32_t v15; // w23
  UISprite_o *maskSprite; // x24
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  UISprite_o *placeIconSprite; // x23
  int32_t v19; // w24
  System_String_o *v20; // x0
  struct EventExpeditionEntity_o *v21; // x8
  UILabel_o *rewardTitleLabel; // x23
  UILabel_o *consumeCountLabel; // x23
  const MethodInfo *v24; // x2
  struct EventExpeditionEntity_o *v25; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v27; // x8
  System_Collections_Generic_List_object__o *v28; // x22
  EventExpeditionListViewItemDraw___c_c *v29; // x8
  System_Comparison_T__o *_9__27_0; // x23
  Il2CppObject *v31; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x2
  int32_t *v40; // x8
  int32_t v41; // w3
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int32_t v48; // w22
  UISprite_o *progressGaugeF; // x23
  EventExpeditionListViewItemDraw_o *v50; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  int32_t currentEventId; // [xsp+8h] [xbp-58h] BYREF
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = this;
  if ( (byte_4BE0490 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&System_Comparison_GiftEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__);
    sub_1C21E38(&EventExpeditionListViewItemDraw___c_TypeInfo);
    sub_1C21E38(&StringLiteral_23704/*"shop_item_menu_{0}_2"*/);
    sub_1C21E38(&StringLiteral_23703/*"shop_item_menu_mask"*/);
    sub_1C21E38(&StringLiteral_19507/*"event_gauge_back"*/);
    sub_1C21E38(&StringLiteral_19514/*"event_gauge_front"*/);
    sub_1C21E38(&StringLiteral_5938/*"EXPEDITION_REWARD_TITLE_LABEL"*/);
    sub_1C21E38(&StringLiteral_5930/*"EXPEDITION_EVENT_END"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_1C21E38(&StringLiteral_19515/*"event_gauge_front_complete"*/);
    byte_4BE0490 = 1;
  }
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (v9 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)v9 )
        sub_1C2209C(this, item);
      v10 = commonConsumeEntity->m_Items[0];
      if ( !v10 )
        goto LABEL_69;
      objectId = v10->fields.objectId;
      num = v10->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v7->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, *(_QWORD *)&mode, method, v4);
    v14 = System_String__Format((System_String_o *)StringLiteral_23704/*"shop_item_menu_{0}_2"*/, v13, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v14, 0LL);
    v15 = item->fields.currentEventId;
    maskSprite = v7->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_39104396(
                                                  v15,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_23703/*"shop_item_menu_mask"*/,
                                                  0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_69;
    placeIconSprite = v7->fields.placeIconSprite;
    v19 = item->fields.currentEventId;
    v20 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_39104396(v19, placeIconSprite, v20, 0LL);
    AtlasManager__SetEventUI_39104396(
      item->fields.currentEventId,
      v7->fields.progressGaugeF,
      (System_String_o *)StringLiteral_19514/*"event_gauge_front"*/,
      0LL);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_39104396(
                                                  item->fields.currentEventId,
                                                  v7->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_19507/*"event_gauge_back"*/,
                                                  0LL);
    v21 = item->fields.eventExpeditionEnt;
    if ( !v21 )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)v7->fields.placeNameLabel;
    if ( !this )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)this, v21->fields.name, 0LL);
    rewardTitleLabel = v7->fields.rewardTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5938/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0LL);
    if ( !rewardTitleLabel )
      goto LABEL_69;
    UILabel__set_text(rewardTitleLabel, (System_String_o *)this, 0LL);
    consumeCountLabel = v7->fields.consumeCountLabel;
    this = (EventExpeditionListViewItemDraw_o *)System_Int32__ToString((int32_t)&num, 0LL);
    if ( !consumeCountLabel )
      goto LABEL_69;
    UILabel__set_text(consumeCountLabel, (System_String_o *)this, 0LL);
    this = (EventExpeditionListViewItemDraw_o *)v7->fields.consumeCountLabel;
    if ( !this )
      goto LABEL_69;
    v54.fields.r = 1.0;
    v54.fields.g = 1.0;
    v54.fields.b = 1.0;
    v54.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v54, 0LL);
    v25 = item->fields.eventExpeditionEnt;
    if ( !v25 )
      goto LABEL_69;
    requiredTimeLabel = v7->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v25->fields.durationSec,
                                                  v24);
    if ( !requiredTimeLabel )
      goto LABEL_69;
    UILabel__set_text(requiredTimeLabel, (System_String_o *)this, 0LL);
    if ( objectId )
    {
      this = (EventExpeditionListViewItemDraw_o *)v7->fields.consumeIcon;
      if ( !this )
        goto LABEL_69;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, objectId, -1, 1, 0LL);
    }
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
    v27 = item->fields.eventExpeditionEnt;
    if ( !v27 || !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v27->fields.giftId, 0LL);
    v28 = (System_Collections_Generic_List_object__o *)this;
    v29 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v29 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    _9__27_0 = (System_Comparison_T__o *)v29->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = EventExpeditionListViewItemDraw___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__27_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_GiftEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__27_0,
        v31,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        0LL);
      static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
        (int64_t)_9__27_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( !v28 )
LABEL_69:
      sub_1C22094(this, item);
    System_Collections_Generic_List_object___Sort_56953720(
      v28,
      _9__27_0,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v28->fields._size >= 1 )
    {
      this = (EventExpeditionListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                    v28,
                                                    0,
                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_69;
      v40 = (int32_t *)this;
      this = (EventExpeditionListViewItemDraw_o *)v7->fields.rewardIcon;
      if ( !this )
        goto LABEL_69;
      v41 = v40[7] <= 1 ? -1 : v40[7];
      ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)this, v40[5], v40[6], v41, 0, 0LL);
      this = (EventExpeditionListViewItemDraw_o *)v7->fields.rewardCountLabel;
      if ( !this )
        goto LABEL_69;
      UILabel__SetCondensedScale((UILabel_o *)this, v7->fields.countLabelMaxWidth, 0, 0LL);
    }
    switch ( mode )
    {
      case 1:
        goto LABEL_49;
      case 2:
        this = (EventExpeditionListViewItemDraw_o *)v7->fields.consumeCountLabel;
        if ( !this )
          goto LABEL_69;
        v55.fields.r = 0.5;
        v55.fields.g = 0.5;
        v55.fields.b = 0.5;
        v55.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v55, 0LL);
LABEL_49:
        this = (EventExpeditionListViewItemDraw_o *)v7->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v7->fields.runAnim = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v7->fields.runAnim, 0LL, v42, v43, v44, v45, v46, v47);
        break;
      case 3:
        goto LABEL_54;
      case 4:
        v48 = item->fields.currentEventId;
        progressGaugeF = v7->fields.progressGaugeF;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI_39104396(v48, progressGaugeF, (System_String_o *)StringLiteral_19515/*"event_gauge_front_complete"*/, 0LL);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v7->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v7, item, v39) )
    {
      this = (EventExpeditionListViewItemDraw_o *)v7->fields.MaskObj;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( (unsigned int)(mode - 3) > 1 )
        {
          EventExpeditionListViewItemDraw__DestroyAnimObj(v7, (const MethodInfo *)item);
          this = (EventExpeditionListViewItemDraw_o *)v7->fields.progressBar;
          if ( this )
          {
            this = (EventExpeditionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              eventEndText = (EventExpeditionListViewItemDraw_o *)v7->fields.eventEndText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_5930/*"EXPEDITION_EVENT_END"*/,
                                                            0LL);
              if ( eventEndText )
              {
                v50 = this;
                this = eventEndText;
                goto LABEL_67;
              }
            }
          }
        }
        else
        {
          this = (EventExpeditionListViewItemDraw_o *)v7->fields.eventEndText;
          if ( this )
          {
            v50 = (EventExpeditionListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_67:
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v50, 0LL);
            return;
          }
        }
      }
      goto LABEL_69;
    }
  }
}


void __fastcall EventExpeditionListViewItemDraw__UpdateItem(
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
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UnityEngine_Animation_o *v26; // x23
  Il2CppObject *v27; // x0
  int64_t v28; // x23
  System_String_o *RestTime; // x23
  bool v30; // w0
  const MethodInfo *v31; // x2
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *v34; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v36; // x23
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  int64_t Time; // x23
  const MethodInfo *v42; // x1
  __int64 v43; // x25
  int v44; // w28
  int64_t v45; // x23
  float v46; // s8
  UnityEngine_Object_o *v47; // x22
  UnityEngine_GameObject_o *v48; // x0
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v50; // x2
  Il2CppObject *name; // x25
  System_String_o *v52; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v56; // x23
  const MethodInfo *v57; // x1
  struct UILabel_o *v58; // x21
  System_String_o *mText; // x22
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  int64_t v62; // x21
  System_String_o *v63; // x21
  int32_t v64; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v66; // x20
  int32_t v67; // [xsp+Ch] [xbp-74h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BE0491 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_5915/*"EXPEDITION_BEST_MATCH_LABEL"*/);
    sub_1C21E38(&StringLiteral_17594/*"bit_runningdog_{0}_1"*/);
    sub_1C21E38(&StringLiteral_5917/*"EXPEDITION_COMPLETE_LABEL"*/);
    sub_1C21E38(&StringLiteral_17595/*"bit_runningdog_{0}_2"*/);
    sub_1C21E38(&StringLiteral_13605/*"TIME_REST_TIMEOVER"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_19515/*"event_gauge_front_complete"*/);
    sub_1C21E38(&StringLiteral_5940/*"EXPEDITION_TIME_LABEL"*/);
    byte_4BE0491 = 1;
  }
  entity = 0LL;
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
    if ( UnityEngine_Object__op_Equality(runAnim, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) && this->fields.runAnimIdx != v12 )
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
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)ExpeditionInfo, 0LL) )
      {
        v26 = this->fields.runAnim;
        v67 = v12;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v23, v24, v25);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17594/*"bit_runningdog_{0}_1"*/, v27, 0LL);
        if ( !v26 )
          goto LABEL_95;
        UnityEngine_Animation__Play_70614020(v26, (System_String_o *)ExpeditionInfo, 0LL);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL)) == 0LL )
  {
LABEL_95:
    sub_1C22094(ExpeditionInfo, v11);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL) )
  {
LABEL_93:
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v7);
    return;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v7);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v28 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime = LocalizationManager__GetRestTime(v28, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13605/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !RestTime )
    goto LABEL_95;
  v30 = System_String__Equals_63123792(RestTime, (System_String_o *)ExpeditionInfo, 0LL);
  if ( v12 >= 1 && v30 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0LL) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v32 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v12, v31);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v32, v12, v33);
    }
    v34 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0LL);
      v36 = this->fields.runAnim;
      v67 = v12;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v37, v38, v39);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17595/*"bit_runningdog_{0}_2"*/, v40, 0LL);
      if ( !v36 )
        goto LABEL_95;
      UnityEngine_Animation__Play_70614020(v36, (System_String_o *)ExpeditionInfo, 0LL);
    }
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v42);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v43 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v44 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v45 = v43 - Time;
  v46 = (float)(v44 - *((_DWORD *)ExpeditionInfo + 6) - v45)
      / (float)(unsigned int)(v44 - *((_DWORD *)ExpeditionInfo + 6));
  if ( v21 <= 1 )
  {
    ExpeditionInfo = this->fields.progressBar;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    ExpeditionInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
    if ( !ExpeditionInfo )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ExpeditionInfo, 1, 0LL);
    ExpeditionInfo = this->fields.progressBar;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v46, 0LL);
  }
  if ( mode == 3 )
  {
    v47 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v48, v46 * (float)-(float)this->fields.runningRange, 0LL);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  ExpeditionInfo = DataManager__GetMasterData_object_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v12,
         0LL) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5940/*"EXPEDITION_TIME_LABEL"*/, 0LL);
    if ( !entity )
      goto LABEL_95;
    name = (Il2CppObject *)entity->fields.name;
    v52 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v45,
                                            v50);
    ExpeditionInfo = System_String__Format_63129848(v52, name, ExpeditionTimeLabel, 0LL);
    if ( !timeLeftLabel )
      goto LABEL_95;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0LL);
    ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_95;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)ExpeditionInfo,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v56 = (EventExpeditionMaster_o *)MasterData_object;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v57);
    if ( !ExpeditionInfo || !v56 )
      goto LABEL_95;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v56,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v12,
                               0LL);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v58 = this->fields.timeLeftLabel;
      if ( !v58 )
        goto LABEL_95;
      mText = v58->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_5915/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0LL);
      v61 = System_String__Concat_63115476(mText, v60, 0LL);
      UILabel__set_text(v58, v61, 0LL);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v62 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v63 = LocalizationManager__GetRestTime(v62, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13605/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !v63 )
    goto LABEL_95;
  if ( System_String__Equals_63123792(v63, (System_String_o *)ExpeditionInfo, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v64 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39104396(v64, progressGaugeF, (System_String_o *)StringLiteral_19515/*"event_gauge_front_complete"*/, 0LL);
    v66 = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5917/*"EXPEDITION_COMPLETE_LABEL"*/, 0LL);
    if ( !v66 )
      goto LABEL_95;
    UILabel__set_text(v66, (System_String_o *)ExpeditionInfo, 0LL);
  }
  if ( v21 >= 2 )
  {
    ExpeditionInfo = this->fields.timeLeftLabel;
    if ( ExpeditionInfo )
    {
      UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
    goto LABEL_95;
  }
}


void __fastcall EventExpeditionListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0496 & 1) == 0 )
  {
    sub_1C21E38(&EventExpeditionListViewItemDraw___c_TypeInfo);
    byte_4BE0496 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventExpeditionListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventExpeditionListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventExpeditionListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventExpeditionListViewItemDraw___c___ctor(
        EventExpeditionListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventExpeditionListViewItemDraw___c___SetItem_b__27_0(
        EventExpeditionListViewItemDraw___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}