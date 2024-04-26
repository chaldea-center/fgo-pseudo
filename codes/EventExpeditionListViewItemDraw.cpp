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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v24; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4354572 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354572 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Parent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Parent & 1) != 0 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12 )
      goto LABEL_19;
    mAtlas = v12->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.baseAtlas,
      (System_Int32_array **)mAtlas,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v20 = this->fields.baseSprite;
    if ( !v20 )
      goto LABEL_19;
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  timeLeftLabel = (UnityEngine_Object_o *)this->fields.timeLeftLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
        sub_B70630((BattleServantConfConponent_o *)p_MaskObj, (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B7076C(Parent, v5);
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
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  unsigned __int64 v11; // x10
  System_Collections_IEnumerator_c **v12; // x11
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x19
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0

  if ( (byte_4354576 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_Transform_TypeInfo);
    byte_4354576 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_38;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_38:
    sub_B7076C(effectParent, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0LL);
  if ( !Enumerator )
    sub_B7076C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        v12 += 2;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_18:
      v13 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_37;
    v16 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[v16 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B70A60(v14);
LABEL_37:
      sub_B7076C(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
  }
  v18 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_32;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_32:
      v23 = sub_B08590(v18, System_IDisposable_TypeInfo, 0LL);
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
  Il2CppObject *v9; // x20
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  unsigned __int64 v15; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v16; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v17; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4354577 & 1) == 0 )
  {
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_5878/*"EXPEDITION_TIME_FORMAT"*/);
    byte_4354577 = 1;
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
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5878/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v17 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v8);
  v16 = v5;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16, v10);
  v15 = v4;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15, v12);
  return System_String__Format_44759232(v7, v9, v11, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewItemDraw__PlayRunningAnim(
        EventExpeditionListViewItemDraw_o *this,
        UnityEngine_GameObject_o *effect,
        int32_t idx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x22
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *transform; // x23
  int v18; // s0
  UnityEngine_Transform_o *v21; // x22
  int v22; // s0
  UnityEngine_Animation_o *runAnim; // x21
  __int64 v26; // x2
  Il2CppObject *v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4354575 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17088/*"bit_runningdog_{0}_1"*/);
    byte_4354575 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)effect,
                                             (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v9 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                gameObject,
                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.runAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0LL);
  transform = UnityEngine_GameObject__get_transform(v9, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v21 = UnityEngine_GameObject__get_transform(v9, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
  if ( !v21
    || (UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL),
        runAnim = this->fields.runAnim,
        v28 = idx,
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v26),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17088/*"bit_runningdog_{0}_1"*/, v27, 0LL),
        !runAnim) )
  {
LABEL_13:
    sub_B7076C(gameObject, v8);
  }
  UnityEngine_Animation__Play_51542184(runAnim, (System_String_o *)gameObject, 0LL);
  this->fields.runAnimIdx = idx;
}


bool __fastcall EventExpeditionListViewItemDraw__SetEventPeriodTime(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        const MethodInfo *method)
{
  EventExpeditionListViewItemDraw_o *v4; // x19
  UILabel_o *eventPeriodRestText; // x20
  UILabel_o *eventPeriodRestTimeText; // x19
  UILabel_o *v8; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4354578 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_13582/*"TIME_REST_NONE"*/);
    sub_B70694(&StringLiteral_5880/*"EXPEDITION_TIME_REST"*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4354578 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_29;
  if ( item->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_29;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          item->fields.currentEventId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (EventExpeditionListViewItemDraw_o *)NetworkManager__getTime(0LL);
  if ( !entity )
    goto LABEL_29;
  eventPeriodRestText = v4->fields.eventPeriodRestText;
  if ( (__int64)this < *(_QWORD *)&entity->fields.eventId )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5880/*"EXPEDITION_TIME_REST"*/, 0LL);
    if ( eventPeriodRestText )
    {
      UILabel__set_text(eventPeriodRestText, (System_String_o *)this, 0LL);
      if ( entity )
      {
        eventPeriodRestTimeText = v4->fields.eventPeriodRestTimeText;
        this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__GetRestTime2(
                                                      *(_QWORD *)&entity->fields.eventId,
                                                      -1LL,
                                                      0LL);
        if ( eventPeriodRestTimeText )
        {
          UILabel__set_text(eventPeriodRestTimeText, (System_String_o *)this, 0LL);
          return 0;
        }
      }
    }
LABEL_29:
    sub_B7076C(this, item);
  }
  if ( !eventPeriodRestText )
    goto LABEL_29;
  UILabel__set_text(v4->fields.eventPeriodRestText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v8 = v4->fields.eventPeriodRestTimeText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13582/*"TIME_REST_NONE"*/, 0LL);
  if ( !v8 )
    goto LABEL_29;
  UILabel__set_text(v8, (System_String_o *)this, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewItemDraw__SetItem(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventExpeditionListViewItemDraw_o *v6; // x19
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  __int64 v8; // x9
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
  UIWidget_o *v23; // x23
  int v24; // s0
  const MethodInfo *v28; // x2
  struct EventExpeditionEntity_o *v29; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v31; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v32; // x22
  EventExpeditionListViewItemDraw___c_c *v33; // x8
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x23
  Il2CppObject *v36; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x2
  int32_t *v45; // x8
  int32_t v46; // w3
  UIWidget_o *v47; // x22
  int v48; // s0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t v58; // w22
  UISprite_o *progressGaugeF; // x23
  System_String_o *v60; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  __int64 v62; // x0
  int32_t currentEventId; // [xsp+8h] [xbp-48h] BYREF
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4354573 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Comparison_GiftEntity___ctor__);
    sub_B70694(&System_Comparison_GiftEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&EventRewardRootComponent_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__);
    sub_B70694(&EventExpeditionListViewItemDraw___c_TypeInfo);
    sub_B70694(&StringLiteral_22485/*"shop_item_menu_{0}_2"*/);
    sub_B70694(&StringLiteral_22484/*"shop_item_menu_mask"*/);
    sub_B70694(&StringLiteral_18789/*"event_gauge_back"*/);
    sub_B70694(&StringLiteral_18796/*"event_gauge_front"*/);
    sub_B70694(&StringLiteral_5877/*"EXPEDITION_REWARD_TITLE_LABEL"*/);
    sub_B70694(&StringLiteral_5869/*"EXPEDITION_EVENT_END"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    this = (EventExpeditionListViewItemDraw_o *)sub_B70694(&StringLiteral_18797/*"event_gauge_front_complete"*/);
    byte_4354573 = 1;
  }
  num = 0;
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (v8 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)v8 )
      {
        v62 = sub_B70798(this);
        sub_B70738(v62, 0LL);
      }
      v9 = commonConsumeEntity->m_Items[0];
      if ( !v9 )
        goto LABEL_76;
      objectId = v9->fields.objectId;
      num = v9->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v6->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, *(_QWORD *)&mode);
    v13 = System_String__Format((System_String_o *)StringLiteral_22485/*"shop_item_menu_{0}_2"*/, v12, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v13, 0LL);
    v14 = item->fields.currentEventId;
    maskSprite = v6->fields.maskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_31552376(
                                                  v14,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_22484/*"shop_item_menu_mask"*/,
                                                  0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_76;
    placeIconSprite = v6->fields.placeIconSprite;
    v18 = item->fields.currentEventId;
    v19 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_31552376(v18, placeIconSprite, v19, 0LL);
    AtlasManager__SetEventUI_31552376(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_18796/*"event_gauge_front"*/,
      0LL);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_31552376(
                                                  item->fields.currentEventId,
                                                  v6->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_18789/*"event_gauge_back"*/,
                                                  0LL);
    v20 = item->fields.eventExpeditionEnt;
    if ( !v20 )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.placeNameLabel;
    if ( !this )
      goto LABEL_76;
    UILabel__set_text((UILabel_o *)this, v20->fields.name, 0LL);
    rewardTitleLabel = v6->fields.rewardTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5877/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0LL);
    if ( !rewardTitleLabel )
      goto LABEL_76;
    UILabel__set_text(rewardTitleLabel, (System_String_o *)this, 0LL);
    consumeCountLabel = v6->fields.consumeCountLabel;
    this = (EventExpeditionListViewItemDraw_o *)System_Int32__ToString((int32_t)&num, 0LL);
    if ( !consumeCountLabel )
      goto LABEL_76;
    UILabel__set_text(consumeCountLabel, (System_String_o *)this, 0LL);
    v23 = (UIWidget_o *)v6->fields.consumeCountLabel;
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
    if ( !v23 )
      goto LABEL_76;
    UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
    v29 = item->fields.eventExpeditionEnt;
    if ( !v29 )
      goto LABEL_76;
    requiredTimeLabel = v6->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v29->fields.durationSec,
                                                  v28);
    if ( !requiredTimeLabel )
      goto LABEL_76;
    UILabel__set_text(requiredTimeLabel, (System_String_o *)this, 0LL);
    if ( objectId )
    {
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeIcon;
      if ( !this )
        goto LABEL_76;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, objectId, -1, 0LL);
    }
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
    v31 = item->fields.eventExpeditionEnt;
    if ( !v31 || !this )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v31->fields.giftId, 0LL);
    v32 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)this;
    v33 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v33 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_GiftEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__27_0,
        v36,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_GiftEntity___ctor__);
      v37 = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      v37->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v37->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    if ( !v32 )
LABEL_76:
      sub_B7076C(this, item);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v32,
      (System_Comparison_T__o *)_9__27_0,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v32->fields._size >= 1 )
    {
      v45 = (int32_t *)v32->fields._items->m_Items[0];
      if ( !v45 )
        goto LABEL_76;
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardIcon;
      if ( !this )
        goto LABEL_76;
      v46 = v45[7] <= 1 ? -1 : v45[7];
      ItemIconComponent__SetGift((ItemIconComponent_o *)this, v45[5], v45[6], v46, 0, 0LL);
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardCountLabel;
      if ( !this )
        goto LABEL_76;
      UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.countLabelMaxWidth, 0LL);
    }
    switch ( mode )
    {
      case 1:
        goto LABEL_54;
      case 2:
        v47 = (UIWidget_o *)v6->fields.consumeCountLabel;
        *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_gray(0LL);
        if ( !v47 )
          goto LABEL_76;
        UIWidget__set_color(v47, *(UnityEngine_Color_o *)&v48, 0LL);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v6->fields.runAnim = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&v6->fields.runAnim, 0LL, v52, v53, v54, v55, v56, v57);
        break;
      case 3:
        goto LABEL_60;
      case 4:
        v58 = item->fields.currentEventId;
        progressGaugeF = v6->fields.progressGaugeF;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI_31552376(v58, progressGaugeF, (System_String_o *)StringLiteral_18797/*"event_gauge_front_complete"*/, 0LL);
LABEL_60:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v44) )
    {
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( (unsigned int)(mode - 3) > 1 )
        {
          EventExpeditionListViewItemDraw__DestroyAnimObj(v6, (const MethodInfo *)item);
          this = (EventExpeditionListViewItemDraw_o *)v6->fields.progressBar;
          if ( this )
          {
            this = (EventExpeditionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              eventEndText = (EventExpeditionListViewItemDraw_o *)v6->fields.eventEndText;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_5869/*"EXPEDITION_EVENT_END"*/,
                                                            0LL);
              if ( eventEndText )
              {
                v60 = (System_String_o *)this;
                this = eventEndText;
                goto LABEL_74;
              }
            }
          }
        }
        else
        {
          this = (EventExpeditionListViewItemDraw_o *)v6->fields.eventEndText;
          if ( this )
          {
            v60 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_74:
            UILabel__set_text((UILabel_o *)this, v60, 0LL);
            return;
          }
        }
      }
      goto LABEL_76;
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
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x23
  UnityEngine_GameObject_o *v17; // x0
  const MethodInfo *v18; // x3
  unsigned int v19; // w28
  UnityEngine_Object_o *v20; // x23
  __int64 v21; // x2
  UnityEngine_Animation_o *v22; // x23
  Il2CppObject *v23; // x0
  int64_t v24; // x23
  System_String_o *RestTime; // x23
  bool v26; // w0
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *v29; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v31; // x23
  __int64 v32; // x2
  Il2CppObject *v33; // x0
  int64_t Time; // x23
  const MethodInfo *v35; // x1
  __int64 v36; // x25
  int v37; // w27
  int64_t v38; // x23
  __int64 v39; // x8
  float v40; // s0
  float v41; // s8
  UnityEngine_Object_o *v42; // x22
  UnityEngine_GameObject_o *v43; // x0
  const MethodInfo *v44; // x4
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v46; // x2
  Il2CppObject *name; // x25
  System_String_o *v48; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v52; // x23
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x4
  struct UILabel_o *v55; // x21
  System_String_o *mText; // x22
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  int64_t v59; // x21
  System_String_o *v60; // x21
  int32_t v61; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v63; // x20
  int32_t v64; // [xsp+Ch] [xbp-64h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4354574 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_5854/*"EXPEDITION_BEST_MATCH_LABEL"*/);
    sub_B70694(&StringLiteral_17088/*"bit_runningdog_{0}_1"*/);
    sub_B70694(&StringLiteral_5856/*"EXPEDITION_COMPLETE_LABEL"*/);
    sub_B70694(&StringLiteral_17089/*"bit_runningdog_{0}_2"*/);
    sub_B70694(&StringLiteral_13595/*"TIME_REST_TIMEOVER"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_18797/*"event_gauge_front_complete"*/);
    sub_B70694(&StringLiteral_5879/*"EXPEDITION_TIME_LABEL"*/);
    byte_4354574 = 1;
  }
  entity = 0LL;
  if ( !item || !item->fields.eventExpeditionEnt )
    return;
  if ( !EventExpeditionListViewItem__GetExpeditionInfo(item, (const MethodInfo *)item) )
    goto LABEL_105;
  if ( !mode )
    return;
  EventExpeditionListViewItemDraw__SetEventPeriodTime(this, item, v8);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v9);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v12 = *((_DWORD *)ExpeditionInfo + 5);
  if ( mode == 3 )
  {
    runAnim = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(runAnim, 0LL, 0LL) )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v12, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v12, v15);
    }
  }
  v16 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) && this->fields.runAnimIdx != v12 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v11);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    v17 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v12, 0LL);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v17, v12, v18);
  }
  v19 = mode - 3;
  if ( mode == 3 )
  {
    v20 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)ExpeditionInfo, 0LL) )
      {
        v22 = this->fields.runAnim;
        v64 = v12;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v21);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17088/*"bit_runningdog_{0}_1"*/, v23, 0LL);
        if ( !v22 )
          goto LABEL_107;
        UnityEngine_Animation__Play_51542184(v22, (System_String_o *)ExpeditionInfo, 0LL);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL)) == 0LL )
  {
LABEL_107:
    sub_B7076C(ExpeditionInfo, v11);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL) )
  {
LABEL_105:
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v7);
    return;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v7);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v24 = *((unsigned int *)ExpeditionInfo + 7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime = LocalizationManager__GetRestTime(v24, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13595/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !RestTime )
    goto LABEL_107;
  v26 = System_String__Equals_44745508(RestTime, (System_String_o *)ExpeditionInfo, 0LL);
  if ( v12 >= 1 && v26 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0LL) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      v27 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v12, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v27, v12, v28);
    }
    v29 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0LL);
      v31 = this->fields.runAnim;
      v64 = v12;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v32);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17089/*"bit_runningdog_{0}_2"*/, v33, 0LL);
      if ( !v31 )
        goto LABEL_107;
      UnityEngine_Animation__Play_51542184(v31, (System_String_o *)ExpeditionInfo, 0LL);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v35);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v36 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v37 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v38 = v36 - Time;
  v39 = (unsigned int)(v37 - *((_DWORD *)ExpeditionInfo + 6));
  v40 = (float)(unsigned int)v39;
  v41 = (float)(v39 - v38) / v40;
  if ( v19 <= 1 )
  {
    ExpeditionInfo = this->fields.progressBar;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    ExpeditionInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
    if ( !ExpeditionInfo )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ExpeditionInfo, 1, 0LL);
    ExpeditionInfo = this->fields.progressBar;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v41, 0LL);
  }
  if ( mode == 3 )
  {
    v42 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v43, -(float)(v41 * (float)this->fields.runningRange), 0LL);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ExpeditionInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  ExpeditionInfo = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v12,
         v44) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5879/*"EXPEDITION_TIME_LABEL"*/, 0LL);
    if ( !entity )
      goto LABEL_107;
    name = (Il2CppObject *)entity->fields.name;
    v48 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v38,
                                            v46);
    ExpeditionInfo = System_String__Format_44753704(v48, name, ExpeditionTimeLabel, 0LL);
    if ( !timeLeftLabel )
      goto LABEL_107;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0LL);
    ExpeditionInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_107;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ExpeditionInfo,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v52 = (EventExpeditionMaster_o *)MasterData_WarQuestSelectionMaster;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v53);
    if ( !ExpeditionInfo || !v52 )
      goto LABEL_107;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v52,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v12,
                               v54);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v55 = this->fields.timeLeftLabel;
      if ( !v55 )
        goto LABEL_107;
      mText = v55->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_5854/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0LL);
      v58 = System_String__Concat_44758168(mText, v57, 0LL);
      UILabel__set_text(v55, v58, 0LL);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v11);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v59 = *((unsigned int *)ExpeditionInfo + 7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v60 = LocalizationManager__GetRestTime(v59, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13595/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !v60 )
    goto LABEL_107;
  if ( System_String__Equals_44745508(v60, (System_String_o *)ExpeditionInfo, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v61 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31552376(v61, progressGaugeF, (System_String_o *)StringLiteral_18797/*"event_gauge_front_complete"*/, 0LL);
    v63 = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5856/*"EXPEDITION_COMPLETE_LABEL"*/, 0LL);
    if ( !v63 )
      goto LABEL_107;
    UILabel__set_text(v63, (System_String_o *)ExpeditionInfo, 0LL);
  }
  if ( v19 >= 2 )
  {
    ExpeditionInfo = this->fields.timeLeftLabel;
    if ( ExpeditionInfo )
    {
      UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
    goto LABEL_107;
  }
}


void __fastcall EventExpeditionListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_434F044 & 1) == 0 )
  {
    sub_B70694(&EventExpeditionListViewItemDraw___c_TypeInfo);
    byte_434F044 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventExpeditionListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}