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

  if ( (byte_418A391 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A391 = 1;
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
    sub_B2C2F8(
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
    sub_B2C2F8(
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
        sub_B2C2F8((BattleServantConfConponent_o *)p_MaskObj, (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B2C434(Parent, v5);
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
  __int64 v8; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v23; // x0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x19
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0

  if ( (byte_418A395 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v5);
    byte_418A395 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_38;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_38:
    sub_B2C434(effectParent, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_18:
      v18 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v14);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_37;
    v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v19);
LABEL_37:
      sub_B2C434(v19, v20);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v23 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v25 = *(_QWORD *)v23;
    v26 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_32;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_32:
      v29 = sub_AC5258(v23, System_IDisposable_TypeInfo, 0LL, v24);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
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
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  unsigned __int64 v14; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v15; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v16; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_418A396 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, time);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5789/*"EXPEDITION_TIME_FORMAT"*/, v5);
    byte_418A396 = 1;
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
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5789/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v16 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  v15 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  v14 = v6;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  return System_String__Format_44306596(v9, v10, v11, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Transform_o *transform; // x23
  int v22; // s0
  UnityEngine_Transform_o *v25; // x22
  int v26; // s0
  UnityEngine_Animation_o *runAnim; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418A394 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, effect);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_16836/*"bit_runningdog_{0}_1"*/, v10);
    byte_418A394 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)effect,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v13 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                gameObject,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.runAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0LL);
  transform = UnityEngine_GameObject__get_transform(v13, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL);
  v25 = UnityEngine_GameObject__get_transform(v13, 0LL);
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL);
  if ( !v25
    || (UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL),
        runAnim = this->fields.runAnim,
        v31 = idx,
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_16836/*"bit_runningdog_{0}_1"*/, v30, 0LL),
        !runAnim) )
  {
LABEL_13:
    sub_B2C434(gameObject, v12);
  }
  UnityEngine_Animation__Play_50201580(runAnim, (System_String_o *)gameObject, 0LL);
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
  UILabel_o *eventPeriodRestTimeText; // x19
  UILabel_o *v15; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_418A397 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, item);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_13398/*"TIME_REST_NONE"*/, v9);
    sub_B2C35C(&StringLiteral_5791/*"EXPEDITION_TIME_REST"*/, v10);
    this = (EventExpeditionListViewItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_418A397 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_29;
  if ( item->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_29;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          item->fields.currentEventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5791/*"EXPEDITION_TIME_REST"*/, 0LL);
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
    sub_B2C434(this, item);
  }
  if ( !eventPeriodRestText )
    goto LABEL_29;
  UILabel__set_text(v4->fields.eventPeriodRestText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v15 = v4->fields.eventPeriodRestTimeText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13398/*"TIME_REST_NONE"*/, 0LL);
  if ( !v15 )
    goto LABEL_29;
  UILabel__set_text(v15, (System_String_o *)this, 0LL);
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
  UIWidget_o *v43; // x23
  int v44; // s0
  const MethodInfo *v48; // x2
  struct EventExpeditionEntity_o *v49; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v51; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v52; // x22
  EventExpeditionListViewItemDraw___c_c *v53; // x8
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x23
  Il2CppObject *v56; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x2
  int32_t *v65; // x8
  int32_t v66; // w3
  UIWidget_o *v67; // x22
  int v68; // s0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  int32_t v78; // w22
  UISprite_o *progressGaugeF; // x23
  System_String_o *v80; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  __int64 v82; // x0
  int32_t currentEventId; // [xsp+8h] [xbp-48h] BYREF
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_418A392 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_System_Comparison_GiftEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_GiftEntity__TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v9);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, v17);
    sub_B2C35C(&EventExpeditionListViewItemDraw___c_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_22113/*"shop_item_menu_{0}_2"*/, v19);
    sub_B2C35C(&StringLiteral_22112/*"shop_item_menu_mask"*/, v20);
    sub_B2C35C(&StringLiteral_18510/*"event_gauge_back"*/, v21);
    sub_B2C35C(&StringLiteral_18515/*"event_gauge_front"*/, v22);
    sub_B2C35C(&StringLiteral_5788/*"EXPEDITION_REWARD_TITLE_LABEL"*/, v23);
    sub_B2C35C(&StringLiteral_5780/*"EXPEDITION_EVENT_END"*/, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    this = (EventExpeditionListViewItemDraw_o *)sub_B2C35C(&StringLiteral_18516/*"event_gauge_front_complete"*/, v26);
    byte_418A392 = 1;
  }
  num = 0;
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (v28 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)v28 )
      {
        v82 = sub_B2C460(this);
        sub_B2C400(v82, 0LL);
      }
      v29 = commonConsumeEntity->m_Items[0];
      if ( !v29 )
        goto LABEL_76;
      objectId = v29->fields.objectId;
      num = v29->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v6->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v33 = System_String__Format((System_String_o *)StringLiteral_22113/*"shop_item_menu_{0}_2"*/, v32, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v33, 0LL);
    v34 = item->fields.currentEventId;
    maskSprite = v6->fields.maskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_28451336(
                                                  v34,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_22112/*"shop_item_menu_mask"*/,
                                                  0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_76;
    placeIconSprite = v6->fields.placeIconSprite;
    v38 = item->fields.currentEventId;
    v39 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_28451336(v38, placeIconSprite, v39, 0LL);
    AtlasManager__SetEventUI_28451336(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_18515/*"event_gauge_front"*/,
      0LL);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_28451336(
                                                  item->fields.currentEventId,
                                                  v6->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_18510/*"event_gauge_back"*/,
                                                  0LL);
    v40 = item->fields.eventExpeditionEnt;
    if ( !v40 )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.placeNameLabel;
    if ( !this )
      goto LABEL_76;
    UILabel__set_text((UILabel_o *)this, v40->fields.name, 0LL);
    rewardTitleLabel = v6->fields.rewardTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0LL);
    if ( !rewardTitleLabel )
      goto LABEL_76;
    UILabel__set_text(rewardTitleLabel, (System_String_o *)this, 0LL);
    consumeCountLabel = v6->fields.consumeCountLabel;
    this = (EventExpeditionListViewItemDraw_o *)System_Int32__ToString((int32_t)&num, 0LL);
    if ( !consumeCountLabel )
      goto LABEL_76;
    UILabel__set_text(consumeCountLabel, (System_String_o *)this, 0LL);
    v43 = (UIWidget_o *)v6->fields.consumeCountLabel;
    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
    if ( !v43 )
      goto LABEL_76;
    UIWidget__set_color(v43, *(UnityEngine_Color_o *)&v44, 0LL);
    v49 = item->fields.eventExpeditionEnt;
    if ( !v49 )
      goto LABEL_76;
    requiredTimeLabel = v6->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v49->fields.durationSec,
                                                  v48);
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
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
    v51 = item->fields.eventExpeditionEnt;
    if ( !v51 || !this )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v51->fields.giftId, 0LL);
    v52 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)this;
    v53 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v53 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    static_fields = v53->static_fields;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_GiftEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__27_0,
        v56,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_GiftEntity___ctor__);
      v57 = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      v57->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v57->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    if ( !v52 )
LABEL_76:
      sub_B2C434(this, item);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v52,
      (System_Comparison_T__o *)_9__27_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v52->fields._size >= 1 )
    {
      v65 = (int32_t *)v52->fields._items->m_Items[0];
      if ( !v65 )
        goto LABEL_76;
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardIcon;
      if ( !this )
        goto LABEL_76;
      v66 = v65[7] <= 1 ? -1 : v65[7];
      ItemIconComponent__SetGift((ItemIconComponent_o *)this, v65[5], v65[6], v66, 0, 0LL);
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
        v67 = (UIWidget_o *)v6->fields.consumeCountLabel;
        *(UnityEngine_Color_o *)&v68 = UnityEngine_Color__get_gray(0LL);
        if ( !v67 )
          goto LABEL_76;
        UIWidget__set_color(v67, *(UnityEngine_Color_o *)&v68, 0LL);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v6->fields.runAnim = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.runAnim, 0LL, v72, v73, v74, v75, v76, v77);
        break;
      case 3:
        goto LABEL_60;
      case 4:
        v78 = item->fields.currentEventId;
        progressGaugeF = v6->fields.progressGaugeF;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI_28451336(v78, progressGaugeF, (System_String_o *)StringLiteral_18516/*"event_gauge_front_complete"*/, 0LL);
LABEL_60:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v64) )
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
                                                            (System_String_o *)StringLiteral_5780/*"EXPEDITION_EVENT_END"*/,
                                                            0LL);
              if ( eventEndText )
              {
                v80 = (System_String_o *)this;
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
            v80 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_74:
            UILabel__set_text((UILabel_o *)this, v80, 0LL);
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
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x23
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x3
  unsigned int v34; // w28
  UnityEngine_Object_o *v35; // x23
  UnityEngine_Animation_o *v36; // x23
  Il2CppObject *v37; // x0
  int64_t v38; // x23
  System_String_o *RestTime; // x23
  bool v40; // w0
  UnityEngine_GameObject_o *v41; // x0
  const MethodInfo *v42; // x3
  UnityEngine_Object_o *v43; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v45; // x23
  Il2CppObject *v46; // x0
  int64_t Time; // x23
  const MethodInfo *v48; // x1
  __int64 v49; // x25
  int v50; // w27
  int64_t v51; // x23
  __int64 v52; // x8
  float v53; // s0
  float v54; // s8
  UnityEngine_Object_o *v55; // x22
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x4
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v59; // x2
  Il2CppObject *name; // x25
  System_String_o *v61; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v65; // x23
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x4
  struct UILabel_o *v68; // x21
  System_String_o *mText; // x22
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  int64_t v72; // x21
  System_String_o *v73; // x21
  int32_t v74; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v76; // x20
  int32_t v77; // [xsp+Ch] [xbp-64h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418A393 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_5765/*"EXPEDITION_BEST_MATCH_LABEL"*/, v14);
    sub_B2C35C(&StringLiteral_16836/*"bit_runningdog_{0}_1"*/, v15);
    sub_B2C35C(&StringLiteral_5767/*"EXPEDITION_COMPLETE_LABEL"*/, v16);
    sub_B2C35C(&StringLiteral_16837/*"bit_runningdog_{0}_2"*/, v17);
    sub_B2C35C(&StringLiteral_13411/*"TIME_REST_TIMEOVER"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    sub_B2C35C(&StringLiteral_18516/*"event_gauge_front_complete"*/, v20);
    sub_B2C35C(&StringLiteral_5790/*"EXPEDITION_TIME_LABEL"*/, v21);
    byte_418A393 = 1;
  }
  entity = 0LL;
  if ( !item || !item->fields.eventExpeditionEnt )
    return;
  if ( !EventExpeditionListViewItem__GetExpeditionInfo(item, (const MethodInfo *)item) )
    goto LABEL_105;
  if ( !mode )
    return;
  EventExpeditionListViewItemDraw__SetEventPeriodTime(this, item, v23);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v24);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v27 = *((_DWORD *)ExpeditionInfo + 5);
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
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v27, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v27, v30);
    }
  }
  v31 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) && this->fields.runAnimIdx != v27 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v26);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    v32 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v27, 0LL);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v32, v27, v33);
  }
  v34 = mode - 3;
  if ( mode == 3 )
  {
    v35 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)ExpeditionInfo, 0LL) )
      {
        v36 = this->fields.runAnim;
        v77 = v27;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_16836/*"bit_runningdog_{0}_1"*/, v37, 0LL);
        if ( !v36 )
          goto LABEL_107;
        UnityEngine_Animation__Play_50201580(v36, (System_String_o *)ExpeditionInfo, 0LL);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL)) == 0LL )
  {
LABEL_107:
    sub_B2C434(ExpeditionInfo, v26);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL) )
  {
LABEL_105:
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v22);
    return;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v22);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v38 = *((unsigned int *)ExpeditionInfo + 7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime = LocalizationManager__GetRestTime(v38, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !RestTime )
    goto LABEL_107;
  v40 = System_String__Equals_44292872(RestTime, (System_String_o *)ExpeditionInfo, 0LL);
  if ( v27 >= 1 && v40 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0LL) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      v41 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v27, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v41, v27, v42);
    }
    v43 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0LL);
      v45 = this->fields.runAnim;
      v77 = v27;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_16837/*"bit_runningdog_{0}_2"*/, v46, 0LL);
      if ( !v45 )
        goto LABEL_107;
      UnityEngine_Animation__Play_50201580(v45, (System_String_o *)ExpeditionInfo, 0LL);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v48);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v49 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v26);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v50 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v26);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v51 = v49 - Time;
  v52 = (unsigned int)(v50 - *((_DWORD *)ExpeditionInfo + 6));
  v53 = (float)(unsigned int)v52;
  v54 = (float)(v52 - v51) / v53;
  if ( v34 <= 1 )
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
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v54, 0LL);
  }
  if ( mode == 3 )
  {
    v55 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v56, -(float)(v54 * (float)this->fields.runningRange), 0LL);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ExpeditionInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  ExpeditionInfo = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v27,
         v57) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5790/*"EXPEDITION_TIME_LABEL"*/, 0LL);
    if ( !entity )
      goto LABEL_107;
    name = (Il2CppObject *)entity->fields.name;
    v61 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v51,
                                            v59);
    ExpeditionInfo = System_String__Format_44301068(v61, name, ExpeditionTimeLabel, 0LL);
    if ( !timeLeftLabel )
      goto LABEL_107;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0LL);
    ExpeditionInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_107;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ExpeditionInfo,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v65 = (EventExpeditionMaster_o *)MasterData_WarQuestSelectionMaster;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v66);
    if ( !ExpeditionInfo || !v65 )
      goto LABEL_107;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v65,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v27,
                               v67);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v68 = this->fields.timeLeftLabel;
      if ( !v68 )
        goto LABEL_107;
      mText = v68->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0LL);
      v71 = System_String__Concat_44305532(mText, v70, 0LL);
      UILabel__set_text(v68, v71, 0LL);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v26);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v72 = *((unsigned int *)ExpeditionInfo + 7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v73 = LocalizationManager__GetRestTime(v72, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !v73 )
    goto LABEL_107;
  if ( System_String__Equals_44292872(v73, (System_String_o *)ExpeditionInfo, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v74 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28451336(v74, progressGaugeF, (System_String_o *)StringLiteral_18516/*"event_gauge_front_complete"*/, 0LL);
    v76 = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5767/*"EXPEDITION_COMPLETE_LABEL"*/, 0LL);
    if ( !v76 )
      goto LABEL_107;
    UILabel__set_text(v76, (System_String_o *)ExpeditionInfo, 0LL);
  }
  if ( v34 >= 2 )
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_4184AC5 & 1) == 0 )
  {
    sub_B2C35C(&EventExpeditionListViewItemDraw___c_TypeInfo, v1);
    byte_4184AC5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventExpeditionListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}