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
  int32_t v6; // w2
  int32_t v7; // w3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v16; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A2377C & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A2377C = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Parent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Parent & 1) != 0 )
  {
    v8 = this->fields.baseSprite;
    if ( !v8 )
      goto LABEL_17;
    mAtlas = v8->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7);
    v12 = this->fields.baseSprite;
    if ( !v12 )
      goto LABEL_17;
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
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
        v16 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        this->fields.MaskObj = v16;
        p_MaskObj = &this->fields.MaskObj;
        sub_1B71570((ServantStatusBattleListViewItem_o *)p_MaskObj, (int32_t)v16, v18, v19);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1B71828(Parent, v5);
  }
}


void __fastcall EventExpeditionListViewItemDraw__DestroyAnimObj(
        EventExpeditionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *effectParent; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x19
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A23780 & 1) == 0 )
  {
    sub_1B715CC(&System_IDisposable_TypeInfo, method);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B715CC(&UnityEngine_Transform_TypeInfo, v5);
    byte_4A23780 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_37:
    sub_1B71828(effectParent, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0LL);
  if ( !Enumerator )
    sub_1B71828(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_18:
      v16 = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B71AE8(v17);
LABEL_36:
      sub_1B71828(v17, v18);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69257852(gameObject, 0LL);
  }
  v21 = sub_1B71708(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_31;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_31:
      v26 = sub_1BC35AC(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


System_String_o *__fastcall EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
        EventExpeditionListViewItemDraw_o *this,
        int64_t time,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned __int64 v6; // x22
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x20
  System_String_o *v9; // x19
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  unsigned __int64 v23; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v24; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v25; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A23781 & 1) == 0 )
  {
    sub_1B715CC(&long_TypeInfo, time);
    sub_1B715CC(&LocalizationManager_TypeInfo, v4);
    sub_1B715CC(&StringLiteral_5763/*"EXPEDITION_TIME_FORMAT"*/, v5);
    byte_4A23781 = 1;
  }
  if ( time < 1 )
  {
    v8 = 0LL;
    v7 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v6 = time % 0x3CuLL;
    v7 = time / 0x3CuLL % 0x3C;
    v8 = time / 0xE10uLL;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v25 = v8;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25, v10, v11, v12);
  v24 = v7;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24, v14, v15, v16);
  v23 = v6;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v18, v19, v20);
  return System_String__Format_61519944(v9, v13, v17, v21, 0LL);
}


void __fastcall EventExpeditionListViewItemDraw__PlayRunningAnim(
        EventExpeditionListViewItemDraw_o *this,
        UnityEngine_GameObject_o *effect,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x22
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Transform_o *v17; // x23
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Animation_o *runAnim; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A2377F & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_Animation___, effect);
    sub_1B715CC(&int_TypeInfo, v7);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_17258/*"bit_runningdog_{0}_1"*/, v10);
    byte_4A2377F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)effect,
                                             (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v13 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.runAnim, (int32_t)Component_object, v15, v16);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  v17 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A1A751 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v12);
    byte_4A1A751 = 1;
  }
  if ( !v17 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  v18 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A1A756 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v12);
    byte_4A1A756 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        runAnim = this->fields.runAnim,
        v24 = idx,
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17258/*"bit_runningdog_{0}_1"*/, v23, 0LL),
        !runAnim) )
  {
LABEL_16:
    sub_1B71828(gameObject, v12);
  }
  UnityEngine_Animation__Play_69002944(runAnim, (System_String_o *)gameObject, 0LL);
  this->fields.runAnimIdx = idx;
}


bool __fastcall EventExpeditionListViewItemDraw__SetEventPeriodTime(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        const MethodInfo *method)
{
  EventExpeditionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *eventPeriodRestText; // x20
  UILabel_o *v13; // x19
  UILabel_o *eventPeriodRestTimeText; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A23782 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_EventMaster___, item);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1B715CC(&LocalizationManager_TypeInfo, v7);
    sub_1B715CC(&NetworkManager_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_13283/*"TIME_REST_NONE"*/, v9);
    sub_1B715CC(&StringLiteral_5765/*"EXPEDITION_TIME_REST"*/, v10);
    this = (EventExpeditionListViewItemDraw_o *)sub_1B715CC(&StringLiteral_1/*""*/, v11);
    byte_4A23782 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_26;
  if ( item->fields.currentEventId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           item->fields.currentEventId,
           (const MethodInfo_30F87B4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
                                                          (System_String_o *)StringLiteral_13283/*"TIME_REST_NONE"*/,
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
                                                        (System_String_o *)StringLiteral_5765/*"EXPEDITION_TIME_REST"*/,
                                                        0LL);
          if ( eventPeriodRestText )
          {
            UILabel__set_text(eventPeriodRestText, (System_String_o *)this, 0LL);
            if ( entity )
            {
              v13 = v4->fields.eventPeriodRestTimeText;
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__GetRestTime2(
                                                            (int64_t)entity[6].klass,
                                                            -1LL,
                                                            0LL);
              if ( v13 )
              {
                UILabel__set_text(v13, (System_String_o *)this, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_26:
      sub_1B71828(this, item);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  __int64 v28; // x9
  CommonConsumeEntity_o *v29; // x8
  int32_t objectId; // w22
  UISprite_o *baseSprite; // x23
  Il2CppObject *v32; // x0
  System_String_o *v33; // x24
  int32_t v34; // w23
  UISprite_o *maskSprite; // x24
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  UISprite_o *placeIconSprite; // x23
  int32_t v38; // w24
  System_String_o *v39; // x0
  struct EventExpeditionEntity_o *v40; // x8
  UILabel_o *rewardTitleLabel; // x23
  UILabel_o *consumeCountLabel; // x23
  const MethodInfo *v43; // x2
  struct EventExpeditionEntity_o *v44; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v46; // x8
  System_Collections_Generic_List_object__o *v47; // x22
  EventExpeditionListViewItemDraw___c_c *v48; // x8
  System_Comparison_T__o *_9__27_0; // x23
  Il2CppObject *v50; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  const MethodInfo *v54; // x2
  int32_t *v55; // x8
  int32_t v56; // w3
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w22
  UISprite_o *progressGaugeF; // x23
  EventExpeditionListViewItemDraw_o *v61; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  int32_t currentEventId; // [xsp+8h] [xbp-58h] BYREF
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = this;
  if ( (byte_4A2377D & 1) == 0 )
  {
    sub_1B715CC(&AtlasManager_TypeInfo, item);
    sub_1B715CC(&System_Comparison_GiftEntity__TypeInfo, v8);
    sub_1B715CC(&Method_DataManager_GetMasterData_GiftMaster___, v9);
    sub_1B715CC(&EventRewardRootComponent_TypeInfo, v10);
    sub_1B715CC(&int_TypeInfo, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v14);
    sub_1B715CC(&LocalizationManager_TypeInfo, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B715CC(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, v17);
    sub_1B715CC(&EventExpeditionListViewItemDraw___c_TypeInfo, v18);
    sub_1B715CC(&StringLiteral_23220/*"shop_item_menu_{0}_2"*/, v19);
    sub_1B715CC(&StringLiteral_23219/*"shop_item_menu_mask"*/, v20);
    sub_1B715CC(&StringLiteral_19124/*"event_gauge_back"*/, v21);
    sub_1B715CC(&StringLiteral_19131/*"event_gauge_front"*/, v22);
    sub_1B715CC(&StringLiteral_5762/*"EXPEDITION_REWARD_TITLE_LABEL"*/, v23);
    sub_1B715CC(&StringLiteral_5754/*"EXPEDITION_EVENT_END"*/, v24);
    sub_1B715CC(&StringLiteral_1/*""*/, v25);
    this = (EventExpeditionListViewItemDraw_o *)sub_1B715CC(&StringLiteral_19132/*"event_gauge_front_complete"*/, v26);
    byte_4A2377D = 1;
  }
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (v28 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)v28 )
        sub_1B71830(this, item);
      v29 = commonConsumeEntity->m_Items[0];
      if ( !v29 )
        goto LABEL_69;
      objectId = v29->fields.objectId;
      num = v29->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v7->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, *(_QWORD *)&mode, method, v4);
    v33 = System_String__Format((System_String_o *)StringLiteral_23220/*"shop_item_menu_{0}_2"*/, v32, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v33, 0LL);
    v34 = item->fields.currentEventId;
    maskSprite = v7->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_37654552(
                                                  v34,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_23219/*"shop_item_menu_mask"*/,
                                                  0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_69;
    placeIconSprite = v7->fields.placeIconSprite;
    v38 = item->fields.currentEventId;
    v39 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_37654552(v38, placeIconSprite, v39, 0LL);
    AtlasManager__SetEventUI_37654552(
      item->fields.currentEventId,
      v7->fields.progressGaugeF,
      (System_String_o *)StringLiteral_19131/*"event_gauge_front"*/,
      0LL);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_37654552(
                                                  item->fields.currentEventId,
                                                  v7->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_19124/*"event_gauge_back"*/,
                                                  0LL);
    v40 = item->fields.eventExpeditionEnt;
    if ( !v40 )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)v7->fields.placeNameLabel;
    if ( !this )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)this, v40->fields.name, 0LL);
    rewardTitleLabel = v7->fields.rewardTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5762/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0LL);
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
    v65.fields.r = 1.0;
    v65.fields.g = 1.0;
    v65.fields.b = 1.0;
    v65.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v65, 0LL);
    v44 = item->fields.eventExpeditionEnt;
    if ( !v44 )
      goto LABEL_69;
    requiredTimeLabel = v7->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v44->fields.durationSec,
                                                  v43);
    if ( !requiredTimeLabel )
      goto LABEL_69;
    UILabel__set_text(requiredTimeLabel, (System_String_o *)this, 0LL);
    if ( objectId )
    {
      this = (EventExpeditionListViewItemDraw_o *)v7->fields.consumeIcon;
      if ( !this )
        goto LABEL_69;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, objectId, -1, 0LL);
    }
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_GiftMaster___);
    v46 = item->fields.eventExpeditionEnt;
    if ( !v46 || !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v46->fields.giftId, 0LL);
    v47 = (System_Collections_Generic_List_object__o *)this;
    v48 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v48 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    _9__27_0 = (System_Comparison_T__o *)v48->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = EventExpeditionListViewItemDraw___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v48->static_fields->__9;
      _9__27_0 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_GiftEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__27_0,
        v50,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        0LL);
      static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v52, v53);
    }
    if ( !v47 )
LABEL_69:
      sub_1B71828(this, item);
    System_Collections_Generic_List_object___Sort_55385380(
      v47,
      _9__27_0,
      (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v47->fields._size >= 1 )
    {
      this = (EventExpeditionListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                    v47,
                                                    0,
                                                    (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_69;
      v55 = (int32_t *)this;
      this = (EventExpeditionListViewItemDraw_o *)v7->fields.rewardIcon;
      if ( !this )
        goto LABEL_69;
      v56 = v55[7] <= 1 ? -1 : v55[7];
      ItemIconComponent__SetGift_37939160((ItemIconComponent_o *)this, v55[5], v55[6], v56, 0, 0LL);
      this = (EventExpeditionListViewItemDraw_o *)v7->fields.rewardCountLabel;
      if ( !this )
        goto LABEL_69;
      UILabel__SetCondensedScale((UILabel_o *)this, v7->fields.countLabelMaxWidth, 0LL);
    }
    switch ( mode )
    {
      case 1:
        goto LABEL_49;
      case 2:
        this = (EventExpeditionListViewItemDraw_o *)v7->fields.consumeCountLabel;
        if ( !this )
          goto LABEL_69;
        v66.fields.r = 0.5;
        v66.fields.g = 0.5;
        v66.fields.b = 0.5;
        v66.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v66, 0LL);
LABEL_49:
        this = (EventExpeditionListViewItemDraw_o *)v7->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v7->fields.runAnim = 0LL;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v7->fields.runAnim, 0, v57, v58);
        break;
      case 3:
        goto LABEL_54;
      case 4:
        v59 = item->fields.currentEventId;
        progressGaugeF = v7->fields.progressGaugeF;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI_37654552(v59, progressGaugeF, (System_String_o *)StringLiteral_19132/*"event_gauge_front_complete"*/, 0LL);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v7->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v7, item, v54) )
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
                                                            (System_String_o *)StringLiteral_5754/*"EXPEDITION_EVENT_END"*/,
                                                            0LL);
              if ( eventEndText )
              {
                v61 = this;
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
            v61 = (EventExpeditionListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_67:
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v61, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  void *ExpeditionInfo; // x0
  const MethodInfo *v26; // x1
  int32_t v27; // w21
  UnityEngine_Object_o *runAnim; // x23
  const MethodInfo *v29; // x2
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v31; // x3
  UnityEngine_Object_o *v32; // x23
  const MethodInfo *v33; // x2
  UnityEngine_GameObject_o *v34; // x0
  const MethodInfo *v35; // x3
  unsigned int v36; // w26
  UnityEngine_Object_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  UnityEngine_Animation_o *v41; // x23
  Il2CppObject *v42; // x0
  int64_t v43; // x23
  System_String_o *RestTime; // x23
  bool v45; // w0
  const MethodInfo *v46; // x2
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x3
  UnityEngine_Object_o *v49; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v51; // x23
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  int64_t Time; // x23
  const MethodInfo *v57; // x1
  __int64 v58; // x25
  int v59; // w28
  int64_t v60; // x23
  float v61; // s8
  UnityEngine_Object_o *v62; // x22
  UnityEngine_GameObject_o *v63; // x0
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v65; // x2
  Il2CppObject *name; // x25
  System_String_o *v67; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v71; // x23
  const MethodInfo *v72; // x1
  struct UILabel_o *v73; // x21
  System_String_o *mText; // x22
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  int64_t v77; // x21
  System_String_o *v78; // x21
  int32_t v79; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v81; // x20
  int32_t v82; // [xsp+Ch] [xbp-74h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A2377E & 1) == 0 )
  {
    sub_1B715CC(&AtlasManager_TypeInfo, item);
    sub_1B715CC(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v8);
    sub_1B715CC(&int_TypeInfo, v9);
    sub_1B715CC(&LocalizationManager_TypeInfo, v10);
    sub_1B715CC(&NetworkManager_TypeInfo, v11);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v12);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B715CC(&StringLiteral_5739/*"EXPEDITION_BEST_MATCH_LABEL"*/, v14);
    sub_1B715CC(&StringLiteral_17258/*"bit_runningdog_{0}_1"*/, v15);
    sub_1B715CC(&StringLiteral_5741/*"EXPEDITION_COMPLETE_LABEL"*/, v16);
    sub_1B715CC(&StringLiteral_17259/*"bit_runningdog_{0}_2"*/, v17);
    sub_1B715CC(&StringLiteral_13301/*"TIME_REST_TIMEOVER"*/, v18);
    sub_1B715CC(&StringLiteral_1/*""*/, v19);
    sub_1B715CC(&StringLiteral_19132/*"event_gauge_front_complete"*/, v20);
    sub_1B715CC(&StringLiteral_5764/*"EXPEDITION_TIME_LABEL"*/, v21);
    byte_4A2377E = 1;
  }
  entity = 0LL;
  if ( !item || !item->fields.eventExpeditionEnt )
    return;
  if ( !EventExpeditionListViewItem__GetExpeditionInfo(item, (const MethodInfo *)item) )
    goto LABEL_93;
  if ( !mode )
    return;
  EventExpeditionListViewItemDraw__SetEventPeriodTime(this, item, v23);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v24);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v27 = *((_DWORD *)ExpeditionInfo + 5);
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
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v27, v29);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v27, v31);
    }
  }
  v32 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) && this->fields.runAnimIdx != v27 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v26);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    v34 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v27, v33);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v34, v27, v35);
  }
  v36 = mode - 3;
  if ( mode == 3 )
  {
    v37 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)ExpeditionInfo, 0LL) )
      {
        v41 = this->fields.runAnim;
        v82 = v27;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v38, v39, v40);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17258/*"bit_runningdog_{0}_1"*/, v42, 0LL);
        if ( !v41 )
          goto LABEL_95;
        UnityEngine_Animation__Play_69002944(v41, (System_String_o *)ExpeditionInfo, 0LL);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL)) == 0LL )
  {
LABEL_95:
    sub_1B71828(ExpeditionInfo, v26);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL) )
  {
LABEL_93:
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v22);
    return;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v22);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v43 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime = LocalizationManager__GetRestTime(v43, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13301/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !RestTime )
    goto LABEL_95;
  v45 = System_String__Equals_61513820(RestTime, (System_String_o *)ExpeditionInfo, 0LL);
  if ( v27 >= 1 && v45 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0LL) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v47 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v27, v46);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v47, v27, v48);
    }
    v49 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0LL);
      v51 = this->fields.runAnim;
      v82 = v27;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v52, v53, v54);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17259/*"bit_runningdog_{0}_2"*/, v55, 0LL);
      if ( !v51 )
        goto LABEL_95;
      UnityEngine_Animation__Play_69002944(v51, (System_String_o *)ExpeditionInfo, 0LL);
    }
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v57);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v58 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v26);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v59 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v26);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v60 = v58 - Time;
  v61 = (float)(v59 - *((_DWORD *)ExpeditionInfo + 6) - v60)
      / (float)(unsigned int)(v59 - *((_DWORD *)ExpeditionInfo + 6));
  if ( v36 <= 1 )
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
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v61, 0LL);
  }
  if ( mode == 3 )
  {
    v62 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v63, v61 * (float)-(float)this->fields.runningRange, 0LL);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  ExpeditionInfo = DataManager__GetMasterData_object_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v27,
         0LL) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EXPEDITION_TIME_LABEL"*/, 0LL);
    if ( !entity )
      goto LABEL_95;
    name = (Il2CppObject *)entity->fields.name;
    v67 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v60,
                                            v65);
    ExpeditionInfo = System_String__Format_61519876(v67, name, ExpeditionTimeLabel, 0LL);
    if ( !timeLeftLabel )
      goto LABEL_95;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0LL);
    ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_95;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)ExpeditionInfo,
                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v71 = (EventExpeditionMaster_o *)MasterData_object;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v72);
    if ( !ExpeditionInfo || !v71 )
      goto LABEL_95;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v71,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v27,
                               0LL);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v73 = this->fields.timeLeftLabel;
      if ( !v73 )
        goto LABEL_95;
      mText = v73->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_5739/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0LL);
      v76 = System_String__Concat_61505504(mText, v75, 0LL);
      UILabel__set_text(v73, v76, 0LL);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v26);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v77 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v78 = LocalizationManager__GetRestTime(v77, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13301/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !v78 )
    goto LABEL_95;
  if ( System_String__Equals_61513820(v78, (System_String_o *)ExpeditionInfo, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v79 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37654552(v79, progressGaugeF, (System_String_o *)StringLiteral_19132/*"event_gauge_front_complete"*/, 0LL);
    v81 = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5741/*"EXPEDITION_COMPLETE_LABEL"*/, 0LL);
    if ( !v81 )
      goto LABEL_95;
    UILabel__set_text(v81, (System_String_o *)ExpeditionInfo, 0LL);
  }
  if ( v36 >= 2 )
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A23783 & 1) == 0 )
  {
    sub_1B715CC(&EventExpeditionListViewItemDraw___c_TypeInfo, v1);
    byte_4A23783 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(EventExpeditionListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventExpeditionListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)EventExpeditionListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B71828(this, a);
  return b->fields.priority - a->fields.priority;
}