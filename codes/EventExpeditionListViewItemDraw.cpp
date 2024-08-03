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
  int32_t v5; // w2
  int32_t v6; // w3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v15; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A00064 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00064 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Parent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Parent & 1) != 0 )
  {
    v7 = this->fields.baseSprite;
    if ( !v7 )
      goto LABEL_17;
    mAtlas = v7->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v5, v6);
    v11 = this->fields.baseSprite;
    if ( !v11 )
      goto LABEL_17;
    mSpriteName = v11->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v9, v10);
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
        v15 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        this->fields.MaskObj = v15;
        p_MaskObj = &this->fields.MaskObj;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_MaskObj, (int32_t)v15, v17, v18);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1B64324(Parent);
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
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  if ( (byte_4A00068 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v5);
    byte_4A00068 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_37:
    sub_1B64324(effectParent);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_18:
      v15 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v16);
LABEL_36:
      sub_1B64324(v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  v19 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_31;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_31:
      v24 = sub_1BB60A8(v19, System_IDisposable_TypeInfo, 0LL);
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
  unsigned __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v15; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v16; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A00069 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, time);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_5757/*"EXPEDITION_TIME_FORMAT"*/, v5);
    byte_4A00069 = 1;
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5757/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v16 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  v15 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  v14 = v6;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  return System_String__Format_61389836(v9, v10, v11, v12, 0LL);
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
  UnityEngine_GameObject_o *v12; // x22
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x23
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Animation_o *runAnim; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A00067 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, effect);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_17239/*"bit_runningdog_{0}_1"*/, v10);
    byte_4A00067 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)effect,
                                             (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v12 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.runAnim, (int32_t)Component_object, v14, v15);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  v17 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7111 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_49F7111 = 1;
  }
  if ( !v17 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  v19 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7116 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F7116 = 1;
  }
  if ( !v19
    || (UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        runAnim = this->fields.runAnim,
        v22 = idx,
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17239/*"bit_runningdog_{0}_1"*/, v21, 0LL),
        !runAnim) )
  {
LABEL_16:
    sub_1B64324(gameObject);
  }
  UnityEngine_Animation__Play_68872828(runAnim, (System_String_o *)gameObject, 0LL);
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
  if ( (byte_4A0006A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, item);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_13267/*"TIME_REST_NONE"*/, v9);
    sub_1B640C8(&StringLiteral_5759/*"EXPEDITION_TIME_REST"*/, v10);
    this = (EventExpeditionListViewItemDraw_o *)sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_4A0006A = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_26;
  if ( item->fields.currentEventId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           item->fields.currentEventId,
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
                                                          (System_String_o *)StringLiteral_13267/*"TIME_REST_NONE"*/,
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
                                                        (System_String_o *)StringLiteral_5759/*"EXPEDITION_TIME_REST"*/,
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
      sub_1B64324(this);
    }
  }
  return 0;
}


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
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  __int64 v27; // x9
  CommonConsumeEntity_o *v28; // x8
  int32_t objectId; // w22
  UISprite_o *baseSprite; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x24
  int32_t v33; // w23
  UISprite_o *maskSprite; // x24
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  UISprite_o *placeIconSprite; // x23
  int32_t v37; // w24
  System_String_o *v38; // x0
  struct EventExpeditionEntity_o *v39; // x8
  UILabel_o *rewardTitleLabel; // x23
  UILabel_o *consumeCountLabel; // x23
  const MethodInfo *v42; // x2
  struct EventExpeditionEntity_o *v43; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v45; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_object__o *v48; // x22
  EventExpeditionListViewItemDraw___c_c *v49; // x8
  System_Comparison_T__o *_9__27_0; // x23
  Il2CppObject *v51; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  const MethodInfo *v55; // x2
  int32_t *v56; // x8
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w22
  UISprite_o *progressGaugeF; // x23
  const MethodInfo *v62; // x1
  EventExpeditionListViewItemDraw_o *v63; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  int32_t currentEventId; // [xsp+8h] [xbp-58h] BYREF
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4A00065 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&System_Comparison_GiftEntity__TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, v16);
    sub_1B640C8(&EventExpeditionListViewItemDraw___c_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_23181/*"shop_item_menu_{0}_2"*/, v18);
    sub_1B640C8(&StringLiteral_23180/*"shop_item_menu_mask"*/, v19);
    sub_1B640C8(&StringLiteral_19099/*"event_gauge_back"*/, v20);
    sub_1B640C8(&StringLiteral_19106/*"event_gauge_front"*/, v21);
    sub_1B640C8(&StringLiteral_5756/*"EXPEDITION_REWARD_TITLE_LABEL"*/, v22);
    sub_1B640C8(&StringLiteral_5748/*"EXPEDITION_EVENT_END"*/, v23);
    sub_1B640C8(&StringLiteral_1/*""*/, v24);
    this = (EventExpeditionListViewItemDraw_o *)sub_1B640C8(&StringLiteral_19107/*"event_gauge_front_complete"*/, v25);
    byte_4A00065 = 1;
  }
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (v27 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)v27 )
        sub_1B6432C(this, item);
      v28 = commonConsumeEntity->m_Items[0];
      if ( !v28 )
        goto LABEL_69;
      objectId = v28->fields.objectId;
      num = v28->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v6->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v32 = System_String__Format((System_String_o *)StringLiteral_23181/*"shop_item_menu_{0}_2"*/, v31, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v32, 0LL);
    v33 = item->fields.currentEventId;
    maskSprite = v6->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_37544692(
                                                  v33,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_23180/*"shop_item_menu_mask"*/,
                                                  0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_69;
    placeIconSprite = v6->fields.placeIconSprite;
    v37 = item->fields.currentEventId;
    v38 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_37544692(v37, placeIconSprite, v38, 0LL);
    AtlasManager__SetEventUI_37544692(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_19106/*"event_gauge_front"*/,
      0LL);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_37544692(
                                                  item->fields.currentEventId,
                                                  v6->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_19099/*"event_gauge_back"*/,
                                                  0LL);
    v39 = item->fields.eventExpeditionEnt;
    if ( !v39 )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.placeNameLabel;
    if ( !this )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)this, v39->fields.name, 0LL);
    rewardTitleLabel = v6->fields.rewardTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5756/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0LL);
    if ( !rewardTitleLabel )
      goto LABEL_69;
    UILabel__set_text(rewardTitleLabel, (System_String_o *)this, 0LL);
    consumeCountLabel = v6->fields.consumeCountLabel;
    this = (EventExpeditionListViewItemDraw_o *)System_Int32__ToString((int32_t)&num, 0LL);
    if ( !consumeCountLabel )
      goto LABEL_69;
    UILabel__set_text(consumeCountLabel, (System_String_o *)this, 0LL);
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeCountLabel;
    if ( !this )
      goto LABEL_69;
    v67.fields.r = 1.0;
    v67.fields.g = 1.0;
    v67.fields.b = 1.0;
    v67.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v67, 0LL);
    v43 = item->fields.eventExpeditionEnt;
    if ( !v43 )
      goto LABEL_69;
    requiredTimeLabel = v6->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v43->fields.durationSec,
                                                  v42);
    if ( !requiredTimeLabel )
      goto LABEL_69;
    UILabel__set_text(requiredTimeLabel, (System_String_o *)this, 0LL);
    if ( objectId )
    {
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeIcon;
      if ( !this )
        goto LABEL_69;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, objectId, -1, 0LL);
    }
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
    v45 = item->fields.eventExpeditionEnt;
    if ( !v45 || !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v45->fields.giftId, 0LL);
    v48 = (System_Collections_Generic_List_object__o *)this;
    v49 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v49 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    _9__27_0 = (System_Comparison_T__o *)v49->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        v49 = EventExpeditionListViewItemDraw___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v49->static_fields->__9;
      _9__27_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_GiftEntity__TypeInfo, v46, v47);
      System_Comparison_object____ctor(
        _9__27_0,
        v51,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        0LL);
      static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v53, v54);
    }
    if ( !v48 )
LABEL_69:
      sub_1B64324(this);
    System_Collections_Generic_List_object___Sort_55243320(
      v48,
      _9__27_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v48->fields._size >= 1 )
    {
      this = (EventExpeditionListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                    v48,
                                                    0,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_69;
      v56 = (int32_t *)this;
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardIcon;
      if ( !this )
        goto LABEL_69;
      v57 = v56[7] <= 1 ? -1 : v56[7];
      ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, v56[5], v56[6], v57, 0, 0LL);
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardCountLabel;
      if ( !this )
        goto LABEL_69;
      UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.countLabelMaxWidth, 0LL);
    }
    switch ( mode )
    {
      case 1:
        goto LABEL_49;
      case 2:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.consumeCountLabel;
        if ( !this )
          goto LABEL_69;
        v68.fields.r = 0.5;
        v68.fields.g = 0.5;
        v68.fields.b = 0.5;
        v68.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v68, 0LL);
LABEL_49:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v6->fields.runAnim = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.runAnim, 0, v58, v59);
        break;
      case 3:
        goto LABEL_54;
      case 4:
        v60 = item->fields.currentEventId;
        progressGaugeF = v6->fields.progressGaugeF;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI_37544692(v60, progressGaugeF, (System_String_o *)StringLiteral_19107/*"event_gauge_front_complete"*/, 0LL);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v55) )
    {
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( (unsigned int)(mode - 3) > 1 )
        {
          EventExpeditionListViewItemDraw__DestroyAnimObj(v6, v62);
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
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_5748/*"EXPEDITION_EVENT_END"*/,
                                                            0LL);
              if ( eventEndText )
              {
                v63 = this;
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
            v63 = (EventExpeditionListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_67:
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v63, 0LL);
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
  int32_t v26; // w21
  UnityEngine_Object_o *runAnim; // x23
  const MethodInfo *v28; // x2
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x23
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  UnityEngine_GameObject_o *v34; // x0
  const MethodInfo *v35; // x3
  unsigned int v36; // w26
  UnityEngine_Object_o *v37; // x23
  UnityEngine_Animation_o *v38; // x23
  Il2CppObject *v39; // x0
  int64_t v40; // x23
  System_String_o *RestTime; // x23
  bool v42; // w0
  const MethodInfo *v43; // x2
  UnityEngine_GameObject_o *v44; // x0
  const MethodInfo *v45; // x3
  UnityEngine_Object_o *v46; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v48; // x23
  Il2CppObject *v49; // x0
  int64_t Time; // x23
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  __int64 v53; // x25
  const MethodInfo *v54; // x1
  int v55; // w28
  int64_t v56; // x23
  float v57; // s8
  UnityEngine_Object_o *v58; // x22
  UnityEngine_GameObject_o *v59; // x0
  const MethodInfo *v60; // x1
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v62; // x2
  Il2CppObject *name; // x25
  System_String_o *v64; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v68; // x23
  const MethodInfo *v69; // x1
  struct UILabel_o *v70; // x21
  System_String_o *mText; // x22
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  int64_t v74; // x21
  System_String_o *v75; // x21
  int32_t v76; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v78; // x20
  int32_t v79; // [xsp+Ch] [xbp-74h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A00066 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&StringLiteral_5733/*"EXPEDITION_BEST_MATCH_LABEL"*/, v14);
    sub_1B640C8(&StringLiteral_17239/*"bit_runningdog_{0}_1"*/, v15);
    sub_1B640C8(&StringLiteral_5735/*"EXPEDITION_COMPLETE_LABEL"*/, v16);
    sub_1B640C8(&StringLiteral_17240/*"bit_runningdog_{0}_2"*/, v17);
    sub_1B640C8(&StringLiteral_13280/*"TIME_REST_TIMEOVER"*/, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    sub_1B640C8(&StringLiteral_19107/*"event_gauge_front_complete"*/, v20);
    sub_1B640C8(&StringLiteral_5758/*"EXPEDITION_TIME_LABEL"*/, v21);
    byte_4A00066 = 1;
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
  v26 = *((_DWORD *)ExpeditionInfo + 5);
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
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v26, v28);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v26, v30);
    }
  }
  v31 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) && this->fields.runAnimIdx != v26 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v32);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    v34 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v26, v33);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v34, v26, v35);
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
        v38 = this->fields.runAnim;
        v79 = v26;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17239/*"bit_runningdog_{0}_1"*/, v39, 0LL);
        if ( !v38 )
          goto LABEL_95;
        UnityEngine_Animation__Play_68872828(v38, (System_String_o *)ExpeditionInfo, 0LL);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL)) == 0LL )
  {
LABEL_95:
    sub_1B64324(ExpeditionInfo);
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
  v40 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime = LocalizationManager__GetRestTime(v40, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13280/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !RestTime )
    goto LABEL_95;
  v42 = System_String__Equals_61383712(RestTime, (System_String_o *)ExpeditionInfo, 0LL);
  if ( v26 >= 1 && v42 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0LL) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v44 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v26, v43);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v44, v26, v45);
    }
    v46 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0LL);
      v48 = this->fields.runAnim;
      v79 = v26;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17240/*"bit_runningdog_{0}_2"*/, v49, 0LL);
      if ( !v48 )
        goto LABEL_95;
      UnityEngine_Animation__Play_68872828(v48, (System_String_o *)ExpeditionInfo, 0LL);
    }
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v51);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v53 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v52);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v55 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v54);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v56 = v53 - Time;
  v57 = (float)(v55 - *((_DWORD *)ExpeditionInfo + 6) - v56)
      / (float)(unsigned int)(v55 - *((_DWORD *)ExpeditionInfo + 6));
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
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v57, 0LL);
  }
  if ( mode == 3 )
  {
    v58 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v59, v57 * (float)-(float)this->fields.runningRange, 0LL);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  ExpeditionInfo = DataManager__GetMasterData_object_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v26,
         0LL) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5758/*"EXPEDITION_TIME_LABEL"*/, 0LL);
    if ( !entity )
      goto LABEL_95;
    name = (Il2CppObject *)entity->fields.name;
    v64 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v56,
                                            v62);
    ExpeditionInfo = System_String__Format_61389768(v64, name, ExpeditionTimeLabel, 0LL);
    if ( !timeLeftLabel )
      goto LABEL_95;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0LL);
    ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_95;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)ExpeditionInfo,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v68 = (EventExpeditionMaster_o *)MasterData_object;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v69);
    if ( !ExpeditionInfo || !v68 )
      goto LABEL_95;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v68,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v26,
                               0LL);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v70 = this->fields.timeLeftLabel;
      if ( !v70 )
        goto LABEL_95;
      mText = v70->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v72 = LocalizationManager__Get((System_String_o *)StringLiteral_5733/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0LL);
      v73 = System_String__Concat_61375396(mText, v72, 0LL);
      UILabel__set_text(v70, v73, 0LL);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v60);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v74 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v75 = LocalizationManager__GetRestTime(v74, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13280/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !v75 )
    goto LABEL_95;
  if ( System_String__Equals_61383712(v75, (System_String_o *)ExpeditionInfo, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v76 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37544692(v76, progressGaugeF, (System_String_o *)StringLiteral_19107/*"event_gauge_front_complete"*/, 0LL);
    v78 = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5735/*"EXPEDITION_COMPLETE_LABEL"*/, 0LL);
    if ( !v78 )
      goto LABEL_95;
    UILabel__set_text(v78, (System_String_o *)ExpeditionInfo, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A0006B & 1) == 0 )
  {
    sub_1B640C8(&EventExpeditionListViewItemDraw___c_TypeInfo, v1);
    byte_4A0006B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventExpeditionListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventExpeditionListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventExpeditionListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}