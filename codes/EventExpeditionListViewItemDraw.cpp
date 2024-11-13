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
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  UnityEngine_Component_o *Parent; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v25; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B1A03E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A03E = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Parent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Parent & 1) != 0 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13 )
      goto LABEL_17;
    mAtlas = v13->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v7, v8, v9, v10, v11, v12);
    v21 = this->fields.baseSprite;
    if ( !v21 )
      goto LABEL_17;
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  timeLeftLabel = (UnityEngine_Object_o *)this->fields.timeLeftLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(timeLeftLabel, 0LL, 0LL) )
  {
    Parent = (UnityEngine_Component_o *)this->fields.timeLeftLabel;
    if ( Parent )
    {
      gameObject = UnityEngine_Component__get_gameObject(Parent, 0LL);
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( Parent )
      {
        v25 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        this->fields.MaskObj = v25;
        p_MaskObj = &this->fields.MaskObj;
        sub_1BCA784((PartyOrganizationUtility_o *)p_MaskObj, (int64_t)v25, v27, v28, v29, v30, v31, v32);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(Parent, v6);
  }
}


void __fastcall EventExpeditionListViewItemDraw__DestroyAnimObj(
        EventExpeditionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Transform_o *effectParent; // x0
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B1A042 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v8, v9);
    byte_4B1A042 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_37:
    sub_1BCAA3C(effectParent, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_18:
      v20 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v21);
LABEL_36:
      sub_1BCAA3C(v21, v22);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  v26 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_31;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_31:
      v31 = sub_1C1C7C0(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
}


System_String_o *__fastcall EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
        EventExpeditionListViewItemDraw_o *this,
        int64_t time,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned __int64 v8; // x22
  unsigned __int64 v9; // x21
  unsigned __int64 v10; // x20
  System_String_o *v11; // x19
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  unsigned __int64 v16; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v17; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v18; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1A043 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, time, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5895/*"EXPEDITION_TIME_FORMAT"*/, v6, v7);
    byte_4B1A043 = 1;
  }
  if ( time < 1 )
  {
    v10 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
  }
  else
  {
    v8 = time % 0x3CuLL;
    v9 = time / 0x3CuLL % 0x3C;
    v10 = time / 0xE10uLL;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, time);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5895/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v18 = v10;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
  v17 = v9;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  v16 = v8;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  return System_String__Format_62415660(v11, v12, v13, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewItemDraw__PlayRunningAnim(
        EventExpeditionListViewItemDraw_o *this,
        UnityEngine_GameObject_o *effect,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x22
  Il2CppObject *Component_object; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x2
  UnityEngine_Transform_o *v26; // x23
  __int64 v27; // x2
  UnityEngine_Transform_o *v28; // x22
  UnityEngine_Animation_o *runAnim; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1A041 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, effect, *(_QWORD *)&idx);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_17479/*"bit_runningdog_{0}_1"*/, v13, v14);
    byte_4B1A041 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effect);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)effect,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v17 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.runAnim,
    (int64_t)Component_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
  v26 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v25);
    byte_4B109C1 = 1;
  }
  if ( !v26 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
  v28 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C6 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v27);
    byte_4B109C6 = 1;
  }
  if ( !v28
    || (UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        runAnim = this->fields.runAnim,
        v31 = idx,
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17479/*"bit_runningdog_{0}_1"*/, v30, 0LL),
        !runAnim) )
  {
LABEL_16:
    sub_1BCAA3C(gameObject, v16);
  }
  UnityEngine_Animation__Play_69899248(runAnim, (System_String_o *)gameObject, 0LL);
  this->fields.runAnimIdx = idx;
}


bool __fastcall EventExpeditionListViewItemDraw__SetEventPeriodTime(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        const MethodInfo *method)
{
  EventExpeditionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  UILabel_o *eventPeriodRestText; // x20
  UILabel_o *v21; // x19
  __int64 v23; // x1
  UILabel_o *eventPeriodRestTimeText; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B1A044 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, item, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_13494/*"TIME_REST_NONE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5897/*"EXPEDITION_TIME_REST"*/, v15, v16);
    this = (EventExpeditionListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B1A044 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_26;
  if ( item->fields.currentEventId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           item->fields.currentEventId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
            this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13494/*"TIME_REST_NONE"*/,
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
          this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_5897/*"EXPEDITION_TIME_REST"*/,
                                                        0LL);
          if ( eventPeriodRestText )
          {
            UILabel__set_text(eventPeriodRestText, (System_String_o *)this, 0LL);
            if ( entity )
            {
              v21 = v4->fields.eventPeriodRestTimeText;
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__GetRestTime2(
                                                            (int64_t)entity[6].klass,
                                                            -1LL,
                                                            0LL);
              if ( v21 )
              {
                UILabel__set_text(v21, (System_String_o *)this, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_26:
      sub_1BCAA3C(this, item);
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
  EventExpeditionListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  __int64 v46; // x9
  CommonConsumeEntity_o *v47; // x8
  int32_t objectId; // w22
  UISprite_o *baseSprite; // x23
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  System_String_o *v52; // x24
  __int64 v53; // x1
  int32_t v54; // w23
  UISprite_o *maskSprite; // x24
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  UISprite_o *placeIconSprite; // x23
  int32_t v58; // w24
  System_String_o *v59; // x0
  struct EventExpeditionEntity_o *v60; // x8
  __int64 v61; // x1
  UILabel_o *rewardTitleLabel; // x23
  UILabel_o *consumeCountLabel; // x23
  const MethodInfo *v64; // x2
  struct EventExpeditionEntity_o *v65; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v67; // x8
  __int64 v68; // x2
  __int64 v69; // x3
  System_Collections_Generic_List_object__o *v70; // x22
  EventExpeditionListViewItemDraw___c_c *v71; // x8
  System_Comparison_T__o *_9__27_0; // x23
  Il2CppObject *v73; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  const MethodInfo *v81; // x2
  int32_t *v82; // x8
  int32_t v83; // w3
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int32_t v90; // w22
  UISprite_o *progressGaugeF; // x23
  EventExpeditionListViewItemDraw_o *v92; // x1
  __int64 v93; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  int32_t currentEventId; // [xsp+8h] [xbp-58h] BYREF
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4B1A03F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&System_Comparison_GiftEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v9, v10);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, v25, v26);
    sub_1BCA7E0(&EventExpeditionListViewItemDraw___c_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_23525/*"shop_item_menu_{0}_2"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_23524/*"shop_item_menu_mask"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_19376/*"event_gauge_back"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_19383/*"event_gauge_front"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_5894/*"EXPEDITION_REWARD_TITLE_LABEL"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_5886/*"EXPEDITION_EVENT_END"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    this = (EventExpeditionListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_19384/*"event_gauge_front_complete"*/, v43, v44);
    byte_4B1A03F = 1;
  }
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (v46 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)v46 )
        sub_1BCAA44(this, item);
      v47 = commonConsumeEntity->m_Items[0];
      if ( !v47 )
        goto LABEL_69;
      objectId = v47->fields.objectId;
      num = v47->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v6->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v52 = System_String__Format((System_String_o *)StringLiteral_23525/*"shop_item_menu_{0}_2"*/, v50, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v51);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v52, 0LL);
    v54 = item->fields.currentEventId;
    maskSprite = v6->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v53);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_38574572(
                                                  v54,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_23524/*"shop_item_menu_mask"*/,
                                                  0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_69;
    placeIconSprite = v6->fields.placeIconSprite;
    v58 = item->fields.currentEventId;
    v59 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_38574572(v58, placeIconSprite, v59, 0LL);
    AtlasManager__SetEventUI_38574572(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_19383/*"event_gauge_front"*/,
      0LL);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_38574572(
                                                  item->fields.currentEventId,
                                                  v6->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_19376/*"event_gauge_back"*/,
                                                  0LL);
    v60 = item->fields.eventExpeditionEnt;
    if ( !v60 )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.placeNameLabel;
    if ( !this )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)this, v60->fields.name, 0LL);
    rewardTitleLabel = v6->fields.rewardTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5894/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0LL);
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
    v97.fields.r = 1.0;
    v97.fields.g = 1.0;
    v97.fields.b = 1.0;
    v97.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v97, 0LL);
    v65 = item->fields.eventExpeditionEnt;
    if ( !v65 )
      goto LABEL_69;
    requiredTimeLabel = v6->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v65->fields.durationSec,
                                                  v64);
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
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    v67 = item->fields.eventExpeditionEnt;
    if ( !v67 || !this )
      goto LABEL_69;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v67->fields.giftId, 0LL);
    v70 = (System_Collections_Generic_List_object__o *)this;
    v71 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo, item);
      v71 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    _9__27_0 = (System_Comparison_T__o *)v71->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v71->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v71, item);
        v71 = EventExpeditionListViewItemDraw___c_TypeInfo;
      }
      v73 = (Il2CppObject *)v71->static_fields->__9;
      _9__27_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_GiftEntity__TypeInfo, item, v68, v69);
      System_Comparison_object____ctor(
        _9__27_0,
        v73,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        0LL);
      static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
        (int64_t)_9__27_0,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    if ( !v70 )
LABEL_69:
      sub_1BCAA3C(this, item);
    System_Collections_Generic_List_object___Sort_56244000(
      v70,
      _9__27_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v70->fields._size >= 1 )
    {
      this = (EventExpeditionListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                    v70,
                                                    0,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_69;
      v82 = (int32_t *)this;
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardIcon;
      if ( !this )
        goto LABEL_69;
      v83 = v82[7] <= 1 ? -1 : v82[7];
      ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, v82[5], v82[6], v83, 0, 0LL);
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
        v98.fields.r = 0.5;
        v98.fields.g = 0.5;
        v98.fields.b = 0.5;
        v98.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v98, 0LL);
LABEL_49:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v6->fields.runAnim = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.runAnim, 0LL, v84, v85, v86, v87, v88, v89);
        break;
      case 3:
        goto LABEL_54;
      case 4:
        v90 = item->fields.currentEventId;
        progressGaugeF = v6->fields.progressGaugeF;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
        AtlasManager__SetEventUI_38574572(v90, progressGaugeF, (System_String_o *)StringLiteral_19384/*"event_gauge_front_complete"*/, 0LL);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v81) )
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
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
              this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_5886/*"EXPEDITION_EVENT_END"*/,
                                                            0LL);
              if ( eventEndText )
              {
                v92 = this;
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
            v92 = (EventExpeditionListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_67:
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v92, 0LL);
            return;
          }
        }
      }
      goto LABEL_69;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewItemDraw__UpdateItem(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  void *ExpeditionInfo; // x0
  const MethodInfo *v41; // x1
  int32_t v42; // w21
  UnityEngine_Object_o *runAnim; // x23
  const MethodInfo *v44; // x2
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v46; // x3
  UnityEngine_Object_o *v47; // x23
  const MethodInfo *v48; // x2
  UnityEngine_GameObject_o *v49; // x0
  const MethodInfo *v50; // x3
  unsigned int v51; // w26
  UnityEngine_Object_o *v52; // x23
  UnityEngine_Animation_o *v53; // x23
  Il2CppObject *v54; // x0
  int64_t v55; // x23
  System_String_o *RestTime; // x23
  bool v57; // w0
  const MethodInfo *v58; // x2
  UnityEngine_GameObject_o *v59; // x0
  const MethodInfo *v60; // x3
  UnityEngine_Object_o *v61; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v63; // x23
  Il2CppObject *v64; // x0
  int64_t Time; // x23
  const MethodInfo *v66; // x1
  __int64 v67; // x25
  int v68; // w28
  int64_t v69; // x23
  float v70; // s8
  UnityEngine_Object_o *v71; // x22
  UnityEngine_GameObject_o *v72; // x0
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v74; // x2
  Il2CppObject *name; // x25
  System_String_o *v76; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v80; // x23
  const MethodInfo *v81; // x1
  struct UILabel_o *v82; // x21
  System_String_o *mText; // x22
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  int64_t v86; // x21
  System_String_o *v87; // x21
  __int64 v88; // x1
  int32_t v89; // w20
  UISprite_o *progressGaugeF; // x21
  __int64 v91; // x1
  UILabel_o *v92; // x20
  int32_t v93; // [xsp+Ch] [xbp-74h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1A040 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_5871/*"EXPEDITION_BEST_MATCH_LABEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17479/*"bit_runningdog_{0}_1"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_5873/*"EXPEDITION_COMPLETE_LABEL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17480/*"bit_runningdog_{0}_2"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_13512/*"TIME_REST_TIMEOVER"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_19384/*"event_gauge_front_complete"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5896/*"EXPEDITION_TIME_LABEL"*/, v35, v36);
    byte_4B1A040 = 1;
  }
  entity = 0LL;
  if ( !item || !item->fields.eventExpeditionEnt )
    return;
  if ( !EventExpeditionListViewItem__GetExpeditionInfo(item, (const MethodInfo *)item) )
    goto LABEL_93;
  if ( !mode )
    return;
  EventExpeditionListViewItemDraw__SetEventPeriodTime(this, item, v38);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v39);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v42 = *((_DWORD *)ExpeditionInfo + 5);
  if ( mode == 3 )
  {
    runAnim = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( UnityEngine_Object__op_Equality(runAnim, 0LL, 0LL) )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v42, v44);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v42, v46);
    }
  }
  v47 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) && this->fields.runAnimIdx != v42 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v41);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    v49 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v42, v48);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v49, v42, v50);
  }
  v51 = mode - 3;
  if ( mode == 3 )
  {
    v52 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)ExpeditionInfo, 0LL) )
      {
        v53 = this->fields.runAnim;
        v93 = v42;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17479/*"bit_runningdog_{0}_1"*/, v54, 0LL);
        if ( !v53 )
          goto LABEL_95;
        UnityEngine_Animation__Play_69899248(v53, (System_String_o *)ExpeditionInfo, 0LL);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL)) == 0LL )
  {
LABEL_95:
    sub_1BCAA3C(ExpeditionInfo, v41);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL) )
  {
LABEL_93:
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v37);
    return;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v37);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v55 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  RestTime = LocalizationManager__GetRestTime(v55, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13512/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !RestTime )
    goto LABEL_95;
  v57 = System_String__Equals_62409536(RestTime, (System_String_o *)ExpeditionInfo, 0LL);
  if ( v42 >= 1 && v57 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_95;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0LL) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v59 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v42, v58);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v59, v42, v60);
    }
    v61 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0LL);
      v63 = this->fields.runAnim;
      v93 = v42;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17480/*"bit_runningdog_{0}_2"*/, v64, 0LL);
      if ( !v63 )
        goto LABEL_95;
      UnityEngine_Animation__Play_69899248(v63, (System_String_o *)ExpeditionInfo, 0LL);
    }
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
  Time = NetworkManager__getTime(0LL);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v66);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v67 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v41);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v68 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v41);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v69 = v67 - Time;
  v70 = (float)(v68 - *((_DWORD *)ExpeditionInfo + 6) - v69)
      / (float)(unsigned int)(v68 - *((_DWORD *)ExpeditionInfo + 6));
  if ( v51 <= 1 )
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
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v70, 0LL);
  }
  if ( mode == 3 )
  {
    v71 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_95;
      v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v72, v70 * (float)-(float)this->fields.runningRange, 0LL);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  ExpeditionInfo = DataManager__GetMasterData_object_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v42,
         0LL) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5896/*"EXPEDITION_TIME_LABEL"*/, 0LL);
    if ( !entity )
      goto LABEL_95;
    name = (Il2CppObject *)entity->fields.name;
    v76 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v69,
                                            v74);
    ExpeditionInfo = System_String__Format_62415592(v76, name, ExpeditionTimeLabel, 0LL);
    if ( !timeLeftLabel )
      goto LABEL_95;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0LL);
    ExpeditionInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_95;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)ExpeditionInfo,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v80 = (EventExpeditionMaster_o *)MasterData_object;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v81);
    if ( !ExpeditionInfo || !v80 )
      goto LABEL_95;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v80,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v42,
                               0LL);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v82 = this->fields.timeLeftLabel;
      if ( !v82 )
        goto LABEL_95;
      mText = v82->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_5871/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0LL);
      v85 = System_String__Concat_62401220(mText, v84, 0LL);
      UILabel__set_text(v82, v85, 0LL);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v41);
  if ( !ExpeditionInfo )
    goto LABEL_95;
  v86 = *((unsigned int *)ExpeditionInfo + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  v87 = LocalizationManager__GetRestTime(v86, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13512/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !v87 )
    goto LABEL_95;
  if ( System_String__Equals_62409536(v87, (System_String_o *)ExpeditionInfo, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v89 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v88);
    AtlasManager__SetEventUI_38574572(v89, progressGaugeF, (System_String_o *)StringLiteral_19384/*"event_gauge_front_complete"*/, 0LL);
    v92 = this->fields.timeLeftLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5873/*"EXPEDITION_COMPLETE_LABEL"*/, 0LL);
    if ( !v92 )
      goto LABEL_95;
    UILabel__set_text(v92, (System_String_o *)ExpeditionInfo, 0LL);
  }
  if ( v51 >= 2 )
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A045 & 1) == 0 )
  {
    sub_1BCA7E0(&EventExpeditionListViewItemDraw___c_TypeInfo, v1, v2);
    byte_4B1A045 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventExpeditionListViewItemDraw___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventExpeditionListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventExpeditionListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}