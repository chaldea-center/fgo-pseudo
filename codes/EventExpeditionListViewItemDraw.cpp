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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UISprite_o *v19; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v23; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4216F72 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216F72 = 1;
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
    v11 = this->fields.baseSprite;
    if ( !v11 )
      goto LABEL_19;
    mAtlas = v11->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseAtlas,
      (System_Int32_array **)mAtlas,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v19 = this->fields.baseSprite;
    if ( !v19 )
      goto LABEL_19;
    mSpriteName = v19->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
        v23 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        this->fields.MaskObj = v23;
        p_MaskObj = &this->fields.MaskObj;
        sub_B0D840((BattleServantConfConponent_o *)p_MaskObj, (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B0D97C(Parent);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0

  if ( (byte_4216F76 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v5);
    byte_4216F76 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_38;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_38:
    sub_B0D97C(effectParent);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_18:
      v15 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_37;
    v17 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v17 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B0DC70(v16);
LABEL_37:
      sub_B0D97C(v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  v19 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_32;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_32:
      v24 = sub_AA67A0(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
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

  if ( (byte_4216F77 & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, time);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_5805/*"EXPEDITION_TIME_FORMAT"*/, v5);
    byte_4216F77 = 1;
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5805/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v16 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  v15 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  v14 = v6;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  return System_String__Format_43850968(v9, v10, v11, v12, 0LL);
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
  UnityEngine_GameObject_o *v12; // x22
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Transform_o *transform; // x23
  int v21; // s0
  UnityEngine_Transform_o *v24; // x22
  int v25; // s0
  UnityEngine_Animation_o *runAnim; // x21
  Il2CppObject *v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4216F75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, effect);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16885/*"bit_runningdog_{0}_1"*/, v10);
    byte_4216F75 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)effect,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v12 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                gameObject,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.runAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0LL);
  transform = UnityEngine_GameObject__get_transform(v12, 0LL);
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  v24 = UnityEngine_GameObject__get_transform(v12, 0LL);
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL);
  if ( !v24
    || (UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL),
        runAnim = this->fields.runAnim,
        v30 = idx,
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_16885/*"bit_runningdog_{0}_1"*/, v29, 0LL),
        !runAnim) )
  {
LABEL_13:
    sub_B0D97C(gameObject);
  }
  UnityEngine_Animation__Play_50564840(runAnim, (System_String_o *)gameObject, 0LL);
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
  if ( (byte_4216F78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, item);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_13442/*"TIME_REST_NONE"*/, v9);
    sub_B0D8A4(&StringLiteral_5807/*"EXPEDITION_TIME_REST"*/, v10);
    this = (EventExpeditionListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4216F78 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_29;
  if ( item->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_29;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          item->fields.currentEventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5807/*"EXPEDITION_TIME_REST"*/, 0LL);
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
    sub_B0D97C(this);
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
  this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13442/*"TIME_REST_NONE"*/, 0LL);
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
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v54; // x22
  EventExpeditionListViewItemDraw___c_c *v55; // x8
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x23
  Il2CppObject *v58; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x2
  int32_t *v67; // x8
  int32_t v68; // w3
  UIWidget_o *v69; // x22
  int v70; // s0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int32_t v80; // w22
  UISprite_o *progressGaugeF; // x23
  const MethodInfo *v82; // x1
  System_String_o *v83; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  __int64 v85; // x0
  int32_t currentEventId; // [xsp+8h] [xbp-48h] BYREF
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4216F73 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_System_Comparison_GiftEntity___ctor__, v7);
    sub_B0D8A4(&System_Comparison_GiftEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v9);
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, v17);
    sub_B0D8A4(&EventExpeditionListViewItemDraw___c_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_22188/*"shop_item_menu_{0}_2"*/, v19);
    sub_B0D8A4(&StringLiteral_22187/*"shop_item_menu_mask"*/, v20);
    sub_B0D8A4(&StringLiteral_18567/*"event_gauge_back"*/, v21);
    sub_B0D8A4(&StringLiteral_18574/*"event_gauge_front"*/, v22);
    sub_B0D8A4(&StringLiteral_5804/*"EXPEDITION_REWARD_TITLE_LABEL"*/, v23);
    sub_B0D8A4(&StringLiteral_5796/*"EXPEDITION_EVENT_END"*/, v24);
    sub_B0D8A4(&StringLiteral_1/*""*/, v25);
    this = (EventExpeditionListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_18575/*"event_gauge_front_complete"*/, v26);
    byte_4216F73 = 1;
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
        v85 = sub_B0D9A8(this);
        sub_B0D948(v85, 0LL);
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
    v33 = System_String__Format((System_String_o *)StringLiteral_22188/*"shop_item_menu_{0}_2"*/, v32, 0LL);
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
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_27921852(
                                                  v34,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_22187/*"shop_item_menu_mask"*/,
                                                  0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_76;
    placeIconSprite = v6->fields.placeIconSprite;
    v38 = item->fields.currentEventId;
    v39 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_27921852(v38, placeIconSprite, v39, 0LL);
    AtlasManager__SetEventUI_27921852(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_18574/*"event_gauge_front"*/,
      0LL);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_27921852(
                                                  item->fields.currentEventId,
                                                  v6->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_18567/*"event_gauge_back"*/,
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
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5804/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0LL);
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
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
    v51 = item->fields.eventExpeditionEnt;
    if ( !v51 || !this )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v51->fields.giftId, 0LL);
    v54 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)this;
    v55 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v55 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    static_fields = v55->static_fields;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                             System_Comparison_GiftEntity__TypeInfo,
                                                                             v52,
                                                                             v53);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__27_0,
        v58,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_GiftEntity___ctor__);
      v59 = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      v59->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v59->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    if ( !v54 )
LABEL_76:
      sub_B0D97C(this);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v54,
      (System_Comparison_T__o *)_9__27_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v54->fields._size >= 1 )
    {
      v67 = (int32_t *)v54->fields._items->m_Items[0];
      if ( !v67 )
        goto LABEL_76;
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardIcon;
      if ( !this )
        goto LABEL_76;
      v68 = v67[7] <= 1 ? -1 : v67[7];
      ItemIconComponent__SetGift((ItemIconComponent_o *)this, v67[5], v67[6], v68, 0, 0LL);
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
        v69 = (UIWidget_o *)v6->fields.consumeCountLabel;
        *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_gray(0LL);
        if ( !v69 )
          goto LABEL_76;
        UIWidget__set_color(v69, *(UnityEngine_Color_o *)&v70, 0LL);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v6->fields.runAnim = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&v6->fields.runAnim, 0LL, v74, v75, v76, v77, v78, v79);
        break;
      case 3:
        goto LABEL_60;
      case 4:
        v80 = item->fields.currentEventId;
        progressGaugeF = v6->fields.progressGaugeF;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI_27921852(v80, progressGaugeF, (System_String_o *)StringLiteral_18575/*"event_gauge_front_complete"*/, 0LL);
LABEL_60:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v66) )
    {
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( (unsigned int)(mode - 3) > 1 )
        {
          EventExpeditionListViewItemDraw__DestroyAnimObj(v6, v82);
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
                                                            (System_String_o *)StringLiteral_5796/*"EXPEDITION_EVENT_END"*/,
                                                            0LL);
              if ( eventEndText )
              {
                v83 = (System_String_o *)this;
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
            v83 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_74:
            UILabel__set_text((UILabel_o *)this, v83, 0LL);
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
  int32_t v26; // w21
  UnityEngine_Object_o *runAnim; // x23
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *v30; // x23
  const MethodInfo *v31; // x1
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
  const MethodInfo *v49; // x1
  __int64 v50; // x25
  const MethodInfo *v51; // x1
  int v52; // w27
  int64_t v53; // x23
  __int64 v54; // x8
  float v55; // s0
  float v56; // s8
  UnityEngine_Object_o *v57; // x22
  UnityEngine_GameObject_o *v58; // x0
  const MethodInfo *v59; // x4
  const MethodInfo *v60; // x1
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v62; // x2
  Il2CppObject *name; // x25
  System_String_o *v64; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v68; // x23
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x4
  struct UILabel_o *v71; // x21
  System_String_o *mText; // x22
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  int64_t v75; // x21
  System_String_o *v76; // x21
  int32_t v77; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v79; // x20
  int32_t v80; // [xsp+Ch] [xbp-64h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4216F74 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v8);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&StringLiteral_5781/*"EXPEDITION_BEST_MATCH_LABEL"*/, v14);
    sub_B0D8A4(&StringLiteral_16885/*"bit_runningdog_{0}_1"*/, v15);
    sub_B0D8A4(&StringLiteral_5783/*"EXPEDITION_COMPLETE_LABEL"*/, v16);
    sub_B0D8A4(&StringLiteral_16886/*"bit_runningdog_{0}_2"*/, v17);
    sub_B0D8A4(&StringLiteral_13455/*"TIME_REST_TIMEOVER"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    sub_B0D8A4(&StringLiteral_18575/*"event_gauge_front_complete"*/, v20);
    sub_B0D8A4(&StringLiteral_5806/*"EXPEDITION_TIME_LABEL"*/, v21);
    byte_4216F74 = 1;
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
  v26 = *((_DWORD *)ExpeditionInfo + 5);
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
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v26, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v26, v29);
    }
  }
  v30 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) && this->fields.runAnimIdx != v26 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v31);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    v32 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v26, 0LL);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v32, v26, v33);
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
        v80 = v26;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_16885/*"bit_runningdog_{0}_1"*/, v37, 0LL);
        if ( !v36 )
          goto LABEL_107;
        UnityEngine_Animation__Play_50564840(v36, (System_String_o *)ExpeditionInfo, 0LL);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL)) == 0LL )
  {
LABEL_107:
    sub_B0D97C(ExpeditionInfo);
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
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13455/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !RestTime )
    goto LABEL_107;
  v40 = System_String__Equals_43837244(RestTime, (System_String_o *)ExpeditionInfo, 0LL);
  if ( v26 >= 1 && v40 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0LL) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      v41 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v26, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v41, v26, v42);
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
      v80 = v26;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_16886/*"bit_runningdog_{0}_2"*/, v46, 0LL);
      if ( !v45 )
        goto LABEL_107;
      UnityEngine_Animation__Play_50564840(v45, (System_String_o *)ExpeditionInfo, 0LL);
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
  v50 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v49);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v52 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v51);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v53 = v50 - Time;
  v54 = (unsigned int)(v52 - *((_DWORD *)ExpeditionInfo + 6));
  v55 = (float)(unsigned int)v54;
  v56 = (float)(v54 - v53) / v55;
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
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v56, 0LL);
  }
  if ( mode == 3 )
  {
    v57 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v58, -(float)(v56 * (float)this->fields.runningRange), 0LL);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ExpeditionInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  ExpeditionInfo = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v26,
         v59) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5806/*"EXPEDITION_TIME_LABEL"*/, 0LL);
    if ( !entity )
      goto LABEL_107;
    name = (Il2CppObject *)entity->fields.name;
    v64 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v53,
                                            v62);
    ExpeditionInfo = System_String__Format_43845440(v64, name, ExpeditionTimeLabel, 0LL);
    if ( !timeLeftLabel )
      goto LABEL_107;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0LL);
    ExpeditionInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_107;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ExpeditionInfo,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v68 = (EventExpeditionMaster_o *)MasterData_WarQuestSelectionMaster;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v69);
    if ( !ExpeditionInfo || !v68 )
      goto LABEL_107;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v68,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v26,
                               v70);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v71 = this->fields.timeLeftLabel;
      if ( !v71 )
        goto LABEL_107;
      mText = v71->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_5781/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0LL);
      v74 = System_String__Concat_43849904(mText, v73, 0LL);
      UILabel__set_text(v71, v74, 0LL);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v60);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v75 = *((unsigned int *)ExpeditionInfo + 7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v76 = LocalizationManager__GetRestTime(v75, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13455/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !v76 )
    goto LABEL_107;
  if ( System_String__Equals_43837244(v76, (System_String_o *)ExpeditionInfo, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v77 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_27921852(v77, progressGaugeF, (System_String_o *)StringLiteral_18575/*"event_gauge_front_complete"*/, 0LL);
    v79 = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5783/*"EXPEDITION_COMPLETE_LABEL"*/, 0LL);
    if ( !v79 )
      goto LABEL_107;
    UILabel__set_text(v79, (System_String_o *)ExpeditionInfo, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_4211B24 & 1) == 0 )
  {
    sub_B0D8A4(&EventExpeditionListViewItemDraw___c_TypeInfo, v1);
    byte_4211B24 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventExpeditionListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}