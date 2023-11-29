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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UISprite_o *v18; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0
  struct UnityEngine_GameObject_o *v24; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40FC65A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC65A = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v10 = this->fields.baseSprite;
    if ( !v10 )
      goto LABEL_19;
    mAtlas = v10->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseAtlas,
      (System_Int32_array **)mAtlas,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    v18 = this->fields.baseSprite;
    if ( !v18 )
      goto LABEL_19;
    mSpriteName = v18->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  timeLeftLabel = (UnityEngine_Object_o *)this->fields.timeLeftLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(timeLeftLabel, 0LL, 0LL) )
  {
    v21 = (UnityEngine_Component_o *)this->fields.timeLeftLabel;
    if ( v21 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( Parent )
      {
        v24 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        this->fields.MaskObj = v24;
        p_MaskObj = &this->fields.MaskObj;
        sub_B16F98((BattleServantConfConponent_o *)p_MaskObj, (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive(*p_MaskObj, 0, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B170D4();
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
  UnityEngine_Transform_o *v7; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  unsigned __int64 v14; // x10
  System_Collections_IEnumerator_c **v15; // x11
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0

  if ( (byte_40FC65E & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v5);
    byte_40FC65E = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_38;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  v7 = this->fields.effectParent;
  if ( !v7 )
LABEL_38:
    sub_B170D4();
  Enumerator = UnityEngine_Transform__GetEnumerator(v7, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 2;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_18:
      v16 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_37;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v17);
LABEL_37:
      sub_B170D4();
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  v20 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_32;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_32:
      v25 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
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

  if ( (byte_40FC65F & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, time);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5772, v5);
    byte_40FC65F = 1;
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5772, 0LL);
  v16 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  v15 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  v14 = v6;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  return System_String__Format_43744796(v9, v10, v11, v12, 0LL);
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
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v22; // x23
  int v23; // s0
  UnityEngine_Transform_o *v26; // x22
  int v27; // s0
  UnityEngine_Animation_o *runAnim; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC65D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, effect);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16770, v10);
    byte_40FC65D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)effect,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v11 )
    goto LABEL_13;
  v12 = v11;
  gameObject = UnityEngine_GameObject__get_gameObject(v11, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                gameObject,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.runAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  transform = UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, this->fields.effectParent, 0LL);
  v22 = UnityEngine_GameObject__get_transform(v12, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v22 )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = UnityEngine_GameObject__get_transform(v12, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
  if ( !v26
    || (UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
        runAnim = this->fields.runAnim,
        v33 = idx,
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33),
        v32 = System_String__Format((System_String_o *)StringLiteral_16770, v31, 0LL),
        !runAnim) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_Animation__Play_49744236(runAnim, v32, 0LL);
  this->fields.runAnimIdx = idx;
}


bool __fastcall EventExpeditionListViewItemDraw__SetEventPeriodTime(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  int64_t Time; // x0
  UILabel_o *eventPeriodRestText; // x20
  System_String_o *v15; // x0
  UILabel_o *eventPeriodRestTimeText; // x19
  System_String_o *RestTime2; // x0
  UILabel_o *v19; // x19
  System_String_o *v20; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC660 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, item);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_13342, v9);
    sub_B16FFC(&StringLiteral_5774, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40FC660 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_29;
  if ( item->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          item->fields.currentEventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !entity )
    goto LABEL_29;
  eventPeriodRestText = this->fields.eventPeriodRestText;
  if ( Time < *(_QWORD *)&entity->fields.eventId )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5774, 0LL);
    if ( eventPeriodRestText )
    {
      UILabel__set_text(eventPeriodRestText, v15, 0LL);
      if ( entity )
      {
        eventPeriodRestTimeText = this->fields.eventPeriodRestTimeText;
        RestTime2 = LocalizationManager__GetRestTime2(*(_QWORD *)&entity->fields.eventId, -1LL, 0LL);
        if ( eventPeriodRestTimeText )
        {
          UILabel__set_text(eventPeriodRestTimeText, RestTime2, 0LL);
          return 0;
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
  if ( !eventPeriodRestText )
    goto LABEL_29;
  UILabel__set_text(this->fields.eventPeriodRestText, (System_String_o *)StringLiteral_1, 0LL);
  v19 = this->fields.eventPeriodRestTimeText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13342, 0LL);
  if ( !v19 )
    goto LABEL_29;
  UILabel__set_text(v19, v20, 0LL);
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
  UILabel_o *placeNameLabel; // x0
  UILabel_o *rewardTitleLabel; // x23
  System_String_o *v43; // x0
  UILabel_o *consumeCountLabel; // x23
  System_String_o *v45; // x0
  UIWidget_o *v46; // x23
  int v47; // s0
  EventExpeditionListViewItemDraw_o *v51; // x0
  const MethodInfo *v52; // x2
  struct EventExpeditionEntity_o *v53; // x8
  UILabel_o *requiredTimeLabel; // x23
  System_String_o *ExpeditionTimeLabel; // x0
  ItemIconComponent_o *consumeIcon; // x0
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventExpeditionEntity_o *v59; // x8
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *ListById; // x22
  EventExpeditionListViewItemDraw___c_c *v65; // x8
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x23
  Il2CppObject *v68; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  const MethodInfo *v76; // x2
  int32_t *v77; // x8
  ItemIconComponent_o *rewardIcon; // x0
  int32_t v79; // w3
  UILabel_o *rewardCountLabel; // x0
  UIWidget_o *v81; // x22
  int v82; // s0
  UnityEngine_GameObject_o *MaskObj; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int32_t v93; // w22
  UISprite_o *progressGaugeF; // x23
  UnityEngine_GameObject_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  const MethodInfo *v97; // x1
  UILabel_o *v98; // x0
  System_String_o *v99; // x1
  UnityEngine_Component_o *progressBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *eventEndText; // x19
  System_String_o *v103; // x0
  int32_t currentEventId; // [xsp+8h] [xbp-48h] BYREF
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_40FC65B & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_System_Comparison_GiftEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_GiftEntity__TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v9);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, v17);
    sub_B16FFC(&EventExpeditionListViewItemDraw___c_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_22021, v19);
    sub_B16FFC(&StringLiteral_22020, v20);
    sub_B16FFC(&StringLiteral_18441, v21);
    sub_B16FFC(&StringLiteral_18446, v22);
    sub_B16FFC(&StringLiteral_5771, v23);
    sub_B16FFC(&StringLiteral_5763, v24);
    sub_B16FFC(&StringLiteral_1, v25);
    this = (EventExpeditionListViewItemDraw_o *)sub_B16FFC(&StringLiteral_18447, v26);
    byte_40FC65B = 1;
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
        sub_B17100(this, item, *(_QWORD *)&mode);
        sub_B170A0();
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
    v33 = System_String__Format((System_String_o *)StringLiteral_22021, v32, 0LL);
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
    AtlasManager__SetEventUI_28584872(v34, maskSprite, (System_String_o *)StringLiteral_22020, 0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_76;
    placeIconSprite = v6->fields.placeIconSprite;
    v38 = item->fields.currentEventId;
    v39 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_28584872(v38, placeIconSprite, v39, 0LL);
    AtlasManager__SetEventUI_28584872(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_18446,
      0LL);
    AtlasManager__SetEventUI_28584872(
      item->fields.currentEventId,
      v6->fields.progressGaugeB,
      (System_String_o *)StringLiteral_18441,
      0LL);
    v40 = item->fields.eventExpeditionEnt;
    if ( !v40 )
      goto LABEL_76;
    placeNameLabel = v6->fields.placeNameLabel;
    if ( !placeNameLabel )
      goto LABEL_76;
    UILabel__set_text(placeNameLabel, v40->fields.name, 0LL);
    rewardTitleLabel = v6->fields.rewardTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5771, 0LL);
    if ( !rewardTitleLabel )
      goto LABEL_76;
    UILabel__set_text(rewardTitleLabel, v43, 0LL);
    consumeCountLabel = v6->fields.consumeCountLabel;
    v45 = System_Int32__ToString((int32_t)&num, 0LL);
    if ( !consumeCountLabel )
      goto LABEL_76;
    UILabel__set_text(consumeCountLabel, v45, 0LL);
    v46 = (UIWidget_o *)v6->fields.consumeCountLabel;
    *(UnityEngine_Color_o *)&v47 = UnityEngine_Color__get_white(0LL);
    if ( !v46 )
      goto LABEL_76;
    UIWidget__set_color(v46, *(UnityEngine_Color_o *)&v47, 0LL);
    v53 = item->fields.eventExpeditionEnt;
    if ( !v53 )
      goto LABEL_76;
    requiredTimeLabel = v6->fields.requiredTimeLabel;
    ExpeditionTimeLabel = EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(v51, v53->fields.durationSec, v52);
    if ( !requiredTimeLabel )
      goto LABEL_76;
    UILabel__set_text(requiredTimeLabel, ExpeditionTimeLabel, 0LL);
    if ( objectId )
    {
      consumeIcon = v6->fields.consumeIcon;
      if ( !consumeIcon )
        goto LABEL_76;
      ItemIconComponent__SetItem(consumeIcon, objectId, -1, 0LL);
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_76;
    MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    v59 = item->fields.eventExpeditionEnt;
    if ( !v59 || !MasterData_WarQuestSelectionMaster )
      goto LABEL_76;
    ListById = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)GiftMaster__GetListById(
                                                                                         MasterData_WarQuestSelectionMaster,
                                                                                         v59->fields.giftId,
                                                                                         0LL);
    v65 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v65 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    static_fields = v65->static_fields;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      }
      v68 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_GiftEntity__TypeInfo,
                                                                             v60,
                                                                             v61,
                                                                             v62,
                                                                             v63);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__27_0,
        v68,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_GiftEntity___ctor__);
      v69 = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      v69->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v69->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    if ( !ListById )
LABEL_76:
      sub_B170D4();
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      ListById,
      (System_Comparison_T__o *)_9__27_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( ListById->fields._size >= 1 )
    {
      v77 = (int32_t *)ListById->fields._items->m_Items[0];
      if ( !v77 )
        goto LABEL_76;
      rewardIcon = v6->fields.rewardIcon;
      if ( !rewardIcon )
        goto LABEL_76;
      v79 = v77[7] <= 1 ? -1 : v77[7];
      ItemIconComponent__SetGift(rewardIcon, v77[5], v77[6], v79, 0, 0LL);
      rewardCountLabel = v6->fields.rewardCountLabel;
      if ( !rewardCountLabel )
        goto LABEL_76;
      UILabel__SetCondensedScale(rewardCountLabel, v6->fields.countLabelMaxWidth, 0LL);
    }
    switch ( mode )
    {
      case 1:
        goto LABEL_54;
      case 2:
        v81 = (UIWidget_o *)v6->fields.consumeCountLabel;
        *(UnityEngine_Color_o *)&v82 = UnityEngine_Color__get_gray(0LL);
        if ( !v81 )
          goto LABEL_76;
        UIWidget__set_color(v81, *(UnityEngine_Color_o *)&v82, 0LL);
LABEL_54:
        MaskObj = v6->fields.MaskObj;
        if ( !MaskObj )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive(MaskObj, 0, 0LL);
        v6->fields.runAnim = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&v6->fields.runAnim, 0LL, v87, v88, v89, v90, v91, v92);
        break;
      case 3:
        goto LABEL_60;
      case 4:
        v93 = item->fields.currentEventId;
        progressGaugeF = v6->fields.progressGaugeF;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI_28584872(v93, progressGaugeF, (System_String_o *)StringLiteral_18447, 0LL);
LABEL_60:
        v95 = v6->fields.MaskObj;
        if ( !v95 )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive(v95, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v76) )
    {
      v96 = v6->fields.MaskObj;
      if ( v96 )
      {
        UnityEngine_GameObject__SetActive(v96, 1, 0LL);
        if ( (unsigned int)(mode - 3) > 1 )
        {
          EventExpeditionListViewItemDraw__DestroyAnimObj(v6, v97);
          progressBar = (UnityEngine_Component_o *)v6->fields.progressBar;
          if ( progressBar )
          {
            gameObject = UnityEngine_Component__get_gameObject(progressBar, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
              eventEndText = v6->fields.eventEndText;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v103 = LocalizationManager__Get((System_String_o *)StringLiteral_5763, 0LL);
              if ( eventEndText )
              {
                v99 = v103;
                v98 = eventEndText;
                goto LABEL_74;
              }
            }
          }
        }
        else
        {
          v98 = v6->fields.eventEndText;
          if ( v98 )
          {
            v99 = (System_String_o *)StringLiteral_1;
LABEL_74:
            UILabel__set_text(v98, v99, 0LL);
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
  ExpeditionInfo_o *ExpeditionInfo; // x0
  int32_t pieceIdx; // w21
  UnityEngine_Object_o *runAnim; // x23
  ExpeditionAssetManager_o *asset; // x0
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x23
  const MethodInfo *v32; // x1
  ExpeditionAssetManager_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  const MethodInfo *v35; // x3
  unsigned int v36; // w28
  UnityEngine_Object_o *v37; // x23
  UnityEngine_Animation_o *v38; // x0
  UnityEngine_Animation_o *v39; // x23
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UnityEngine_GameObject_o *MaskObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ExpeditionInfo_o *v44; // x0
  int64_t endedAt; // x23
  System_String_o *RestTime; // x23
  System_String_o *v47; // x0
  bool v48; // w0
  UnityEngine_Transform_o *effectParent; // x0
  ExpeditionAssetManager_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  const MethodInfo *v52; // x3
  UnityEngine_Object_o *v53; // x23
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Animation_o *v56; // x23
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  int64_t Time; // x23
  const MethodInfo *v60; // x1
  ExpeditionInfo_o *v61; // x0
  const MethodInfo *v62; // x1
  __int64 v63; // x25
  ExpeditionInfo_o *v64; // x0
  const MethodInfo *v65; // x1
  uint32_t v66; // w27
  ExpeditionInfo_o *v67; // x0
  int64_t v68; // x23
  __int64 v69; // x8
  float v70; // s0
  float v71; // s8
  UnityEngine_Component_o *progressBar; // x0
  UnityEngine_GameObject_o *v73; // x0
  UIProgressBar_o *v74; // x0
  UnityEngine_Object_o *v75; // x22
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UILabel_o *timeLeftLabel; // x0
  WebViewManager_o *Instance; // x0
  EventExpeditionPieceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v81; // x4
  const MethodInfo *v82; // x1
  UILabel_o *v83; // x22
  System_String_o *v84; // x0
  const MethodInfo *v85; // x2
  Il2CppObject *name; // x25
  System_String_o *v87; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  System_String_o *v89; // x0
  WebViewManager_o *v90; // x0
  WarQuestSelectionMaster_o *v91; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v93; // x23
  const MethodInfo *v94; // x1
  ExpeditionInfo_o *v95; // x0
  const MethodInfo *v96; // x4
  struct UILabel_o *v97; // x21
  System_String_o *mText; // x22
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  ExpeditionInfo_o *v101; // x0
  int64_t v102; // x21
  System_String_o *v103; // x21
  System_String_o *v104; // x0
  int32_t v105; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v107; // x20
  System_String_o *v108; // x0
  UILabel_o *v109; // x0
  int32_t v110; // [xsp+Ch] [xbp-64h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FC65C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_5748, v14);
    sub_B16FFC(&StringLiteral_16770, v15);
    sub_B16FFC(&StringLiteral_5750, v16);
    sub_B16FFC(&StringLiteral_16771, v17);
    sub_B16FFC(&StringLiteral_13355, v18);
    sub_B16FFC(&StringLiteral_1, v19);
    sub_B16FFC(&StringLiteral_18447, v20);
    sub_B16FFC(&StringLiteral_5773, v21);
    byte_40FC65C = 1;
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
  pieceIdx = ExpeditionInfo->fields.pieceIdx;
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
      asset = item->fields.asset;
      if ( !asset )
        goto LABEL_107;
      RunEffect = ExpeditionAssetManager__GetRunEffect(asset, pieceIdx, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, pieceIdx, v30);
    }
  }
  v31 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) && this->fields.runAnimIdx != pieceIdx )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v32);
    v33 = item->fields.asset;
    if ( !v33 )
      goto LABEL_107;
    v34 = ExpeditionAssetManager__GetRunEffect(v33, pieceIdx, 0LL);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v34, pieceIdx, v35);
  }
  v36 = mode - 3;
  if ( mode == 3 )
  {
    v37 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
    {
      v38 = this->fields.runAnim;
      if ( !v38 )
        goto LABEL_107;
      if ( !UnityEngine_Animation__get_isPlaying(v38, 0LL) )
      {
        v39 = this->fields.runAnim;
        v110 = pieceIdx;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
        v41 = System_String__Format((System_String_o *)StringLiteral_16770, v40, 0LL);
        if ( !v39 )
          goto LABEL_107;
        UnityEngine_Animation__Play_49744236(v39, v41, 0LL);
      }
    }
  }
  MaskObj = this->fields.MaskObj;
  if ( !MaskObj || (gameObject = UnityEngine_GameObject__get_gameObject(MaskObj, 0LL)) == 0LL )
LABEL_107:
    sub_B170D4();
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
LABEL_105:
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v22);
    return;
  }
  v44 = EventExpeditionListViewItem__GetExpeditionInfo(item, v22);
  if ( !v44 )
    goto LABEL_107;
  endedAt = v44->fields.endedAt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime = LocalizationManager__GetRestTime(endedAt, 0LL);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13355, 0LL);
  if ( !RestTime )
    goto LABEL_107;
  v48 = System_String__Equals_43731072(RestTime, v47, 0LL);
  if ( pieceIdx >= 1 && v48 )
  {
    effectParent = this->fields.effectParent;
    if ( !effectParent )
      goto LABEL_107;
    if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) <= 0 )
    {
      v50 = item->fields.asset;
      if ( !v50 )
        goto LABEL_107;
      v51 = ExpeditionAssetManager__GetRunEffect(v50, pieceIdx, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v51, pieceIdx, v52);
    }
    v53 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
    {
      v54 = (UnityEngine_Component_o *)this->fields.runAnim;
      if ( !v54 )
        goto LABEL_107;
      v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
      GameObjectExtensions__SetLocalPositionX(v55, -(float)this->fields.runningRange, 0LL);
      v56 = this->fields.runAnim;
      v110 = pieceIdx;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
      v58 = System_String__Format((System_String_o *)StringLiteral_16771, v57, 0LL);
      if ( !v56 )
        goto LABEL_107;
      UnityEngine_Animation__Play_49744236(v56, v58, 0LL);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v61 = EventExpeditionListViewItem__GetExpeditionInfo(item, v60);
  if ( !v61 )
    goto LABEL_107;
  v63 = v61->fields.endedAt;
  v64 = EventExpeditionListViewItem__GetExpeditionInfo(item, v62);
  if ( !v64 )
    goto LABEL_107;
  v66 = v64->fields.endedAt;
  v67 = EventExpeditionListViewItem__GetExpeditionInfo(item, v65);
  if ( !v67 )
    goto LABEL_107;
  v68 = v63 - Time;
  v69 = v66 - v67->fields.startedAt;
  v70 = (float)(unsigned int)v69;
  v71 = (float)(v69 - v68) / v70;
  if ( v36 <= 1 )
  {
    progressBar = (UnityEngine_Component_o *)this->fields.progressBar;
    if ( !progressBar )
      goto LABEL_107;
    v73 = UnityEngine_Component__get_gameObject(progressBar, 0LL);
    if ( !v73 )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive(v73, 1, 0LL);
    v74 = (UIProgressBar_o *)this->fields.progressBar;
    if ( !v74 )
      goto LABEL_107;
    UIProgressBar__set_value(v74, v71, 0LL);
  }
  if ( mode == 3 )
  {
    v75 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
    {
      v76 = (UnityEngine_Component_o *)this->fields.runAnim;
      if ( !v76 )
        goto LABEL_107;
      v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
      GameObjectExtensions__SetLocalPositionX(v77, -(float)(v71 * (float)this->fields.runningRange), 0LL);
    }
  }
  timeLeftLabel = this->fields.timeLeftLabel;
  if ( !timeLeftLabel )
    goto LABEL_107;
  UILabel__set_text(timeLeftLabel, (System_String_o *)StringLiteral_1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  MasterData_WarQuestSelectionMaster = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_107;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         item->fields.currentEventId,
         pieceIdx,
         v81) )
  {
    v83 = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_5773, 0LL);
    if ( !entity )
      goto LABEL_107;
    name = (Il2CppObject *)entity->fields.name;
    v87 = v84;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)v84,
                                            v68,
                                            v85);
    v89 = System_String__Format_43739268(v87, name, ExpeditionTimeLabel, 0LL);
    if ( !v83 )
      goto LABEL_107;
    UILabel__set_text(v83, v89, 0LL);
    v90 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v90 )
      goto LABEL_107;
    v91 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v90,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v93 = (EventExpeditionMaster_o *)v91;
    v95 = EventExpeditionListViewItem__GetExpeditionInfo(item, v94);
    if ( !v95 || !v93 )
      goto LABEL_107;
    if ( EventExpeditionMaster__IsBestMatchPiece(v93, currentEventId, v95->fields.expeditionIdx, pieceIdx, v96) )
    {
      v97 = this->fields.timeLeftLabel;
      if ( !v97 )
        goto LABEL_107;
      mText = v97->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v99 = LocalizationManager__Get((System_String_o *)StringLiteral_5748, 0LL);
      v100 = System_String__Concat_43743732(mText, v99, 0LL);
      UILabel__set_text(v97, v100, 0LL);
    }
  }
  v101 = EventExpeditionListViewItem__GetExpeditionInfo(item, v82);
  if ( !v101 )
    goto LABEL_107;
  v102 = v101->fields.endedAt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v103 = LocalizationManager__GetRestTime(v102, 0LL);
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_13355, 0LL);
  if ( !v103 )
    goto LABEL_107;
  if ( System_String__Equals_43731072(v103, v104, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v105 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(v105, progressGaugeF, (System_String_o *)StringLiteral_18447, 0LL);
    v107 = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v108 = LocalizationManager__Get((System_String_o *)StringLiteral_5750, 0LL);
    if ( !v107 )
      goto LABEL_107;
    UILabel__set_text(v107, v108, 0LL);
  }
  if ( v36 >= 2 )
  {
    v109 = this->fields.timeLeftLabel;
    if ( v109 )
    {
      UILabel__set_text(v109, (System_String_o *)StringLiteral_1, 0LL);
      return;
    }
    goto LABEL_107;
  }
}


void __fastcall EventExpeditionListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6F92 & 1) == 0 )
  {
    sub_B16FFC(&EventExpeditionListViewItemDraw___c_TypeInfo, v1);
    byte_40F6F92 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventExpeditionListViewItemDraw___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}