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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *baseSprite; // x20
  UnityEngine_Component_o *Parent; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *timeLeftLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *v26; // x0
  struct UnityEngine_GameObject_o **p_MaskObj; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42EB1D3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1D3 = 1;
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
    v14 = this->fields.baseSprite;
    if ( !v14 )
      goto LABEL_19;
    mAtlas = v14->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseAtlas,
      (System_Int32_array **)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v22 = this->fields.baseSprite;
    if ( !v22 )
      goto LABEL_19;
    mSpriteName = v22->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
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
        v26 = UnityEngine_Component__get_gameObject(Parent, 0LL);
        this->fields.MaskObj = v26;
        p_MaskObj = &this->fields.MaskObj;
        sub_B5D560((BattleServantConfConponent_o *)p_MaskObj, (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
        Parent = (UnityEngine_Component_o *)*p_MaskObj;
        if ( *p_MaskObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Parent, 0, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B5D69C(Parent, v7);
  }
}


void __fastcall EventExpeditionListViewItemDraw__DestroyAnimObj(
        EventExpeditionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Transform_o *effectParent; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_IEnumerator_c *v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  UnityEngine_Component_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v31; // x0
  __int64 v32; // x3
  __int64 v33; // x8
  __int64 v34; // x19
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0

  if ( (byte_42EB1D7 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v11, v12, v13);
    byte_42EB1D7 = 1;
  }
  effectParent = this->fields.effectParent;
  if ( !effectParent )
    goto LABEL_38;
  if ( UnityEngine_Transform__get_childCount(effectParent, 0LL) < 1 )
    return;
  effectParent = this->fields.effectParent;
  if ( !effectParent )
LABEL_38:
    sub_B5D69C(effectParent, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(effectParent, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = (System_Collections_IEnumerator_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1].method;
    }
    else
    {
LABEL_18:
      v26 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
    }
    v27 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                       Enumerator,
                                       *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_37;
    v29 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (UnityEngine_Transform_c *)v27->klass->_2.typeHierarchy[v29 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B5D990(v27);
LABEL_37:
      sub_B5D69C(v27, v28);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v31 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v31 )
  {
    v33 = *(_QWORD *)v31;
    v34 = v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_32;
      }
      v37 = v33 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_32:
      v37 = sub_AF54C0(v31, System_IDisposable_TypeInfo, 0LL, v32);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
  }
}


System_String_o *__fastcall EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
        EventExpeditionListViewItemDraw_o *this,
        int64_t time,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  unsigned __int64 v11; // x22
  unsigned __int64 v12; // x21
  unsigned __int64 v13; // x20
  System_String_o *v14; // x19
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  unsigned __int64 v19; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v20; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v21; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42EB1D8 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, time, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5866/*"EXPEDITION_TIME_FORMAT"*/, v8, v9, v10);
    byte_42EB1D8 = 1;
  }
  if ( time < 1 )
  {
    v13 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
  }
  else
  {
    v11 = time % 0x3CuLL;
    v12 = time / 0x3CuLL % 0x3C;
    v13 = time / 0xE10uLL;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5866/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v21 = v13;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
  v20 = v12;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
  v19 = v11;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
  return System_String__Format_44578852(v14, v15, v16, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewItemDraw__PlayRunningAnim(
        EventExpeditionListViewItemDraw_o *this,
        UnityEngine_GameObject_o *effect,
        int32_t idx,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x22
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Transform_o *transform; // x23
  int v30; // s0
  UnityEngine_Transform_o *v33; // x22
  int v34; // s0
  UnityEngine_Animation_o *runAnim; // x21
  Il2CppObject *v38; // x0
  int32_t v39; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EB1D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)effect, idx, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17042/*"bit_runningdog_{0}_1"*/, v16, v17, v18);
    byte_42EB1D6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)effect,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v21 = gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                gameObject,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.runAnim = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.runAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)gameObject, this->fields.effectParent, 0LL);
  transform = UnityEngine_GameObject__get_transform(v21, 0LL);
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = UnityEngine_GameObject__get_transform(v21, 0LL);
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL);
  if ( !v33
    || (UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v34, 0LL),
        runAnim = this->fields.runAnim,
        v39 = idx,
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39),
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_17042/*"bit_runningdog_{0}_1"*/, v38, 0LL),
        !runAnim) )
  {
LABEL_13:
    sub_B5D69C(gameObject, v20);
  }
  UnityEngine_Animation__Play_51249124(runAnim, (System_String_o *)gameObject, 0LL);
  this->fields.runAnimIdx = idx;
}


bool __fastcall EventExpeditionListViewItemDraw__SetEventPeriodTime(
        EventExpeditionListViewItemDraw_o *this,
        EventExpeditionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventExpeditionListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UILabel_o *eventPeriodRestText; // x20
  UILabel_o *eventPeriodRestTimeText; // x19
  UILabel_o *v30; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42EB1D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_13554/*"TIME_REST_NONE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5868/*"EXPEDITION_TIME_REST"*/, v21, v22, v23);
    this = (EventExpeditionListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42EB1D9 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_29;
  if ( item->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_29;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          item->fields.currentEventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (EventExpeditionListViewItemDraw_o *)NetworkManager__getTime(0LL);
  if ( !entity )
    goto LABEL_29;
  eventPeriodRestText = v5->fields.eventPeriodRestText;
  if ( (__int64)this < *(_QWORD *)&entity->fields.eventId )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5868/*"EXPEDITION_TIME_REST"*/, 0LL);
    if ( eventPeriodRestText )
    {
      UILabel__set_text(eventPeriodRestText, (System_String_o *)this, 0LL);
      if ( entity )
      {
        eventPeriodRestTimeText = v5->fields.eventPeriodRestTimeText;
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
    sub_B5D69C(this, item);
  }
  if ( !eventPeriodRestText )
    goto LABEL_29;
  UILabel__set_text(v5->fields.eventPeriodRestText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v30 = v5->fields.eventPeriodRestTimeText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13554/*"TIME_REST_NONE"*/, 0LL);
  if ( !v30 )
    goto LABEL_29;
  UILabel__set_text(v30, (System_String_o *)this, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  __int64 v68; // x9
  CommonConsumeEntity_o *v69; // x8
  int32_t objectId; // w22
  UISprite_o *baseSprite; // x23
  Il2CppObject *v72; // x0
  System_String_o *v73; // x24
  int32_t v74; // w23
  UISprite_o *maskSprite; // x24
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  UISprite_o *placeIconSprite; // x23
  int32_t v78; // w24
  System_String_o *v79; // x0
  struct EventExpeditionEntity_o *v80; // x8
  UILabel_o *rewardTitleLabel; // x23
  UILabel_o *consumeCountLabel; // x23
  UIWidget_o *v83; // x23
  int v84; // s0
  const MethodInfo *v88; // x2
  struct EventExpeditionEntity_o *v89; // x8
  UILabel_o *requiredTimeLabel; // x23
  struct EventExpeditionEntity_o *v91; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v92; // x22
  EventExpeditionListViewItemDraw___c_c *v93; // x8
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x23
  Il2CppObject *v96; // x24
  struct EventExpeditionListViewItemDraw___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  const MethodInfo *v104; // x2
  int32_t *v105; // x8
  int32_t v106; // w3
  UIWidget_o *v107; // x22
  int v108; // s0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  int32_t v118; // w22
  UISprite_o *progressGaugeF; // x23
  System_String_o *v120; // x1
  EventExpeditionListViewItemDraw_o *eventEndText; // x19
  __int64 v122; // x0
  int32_t currentEventId; // [xsp+8h] [xbp-48h] BYREF
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_42EB1D4 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_System_Comparison_GiftEntity___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Comparison_GiftEntity__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v13, v14, v15);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__, v37, v38, v39);
    sub_B5D5C4(&EventExpeditionListViewItemDraw___c_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_22415/*"shop_item_menu_{0}_2"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_22414/*"shop_item_menu_mask"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_18739/*"event_gauge_back"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_18746/*"event_gauge_front"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_5865/*"EXPEDITION_REWARD_TITLE_LABEL"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_5857/*"EXPEDITION_EVENT_END"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_1/*""*/, v61, v62, v63);
    this = (EventExpeditionListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_18747/*"event_gauge_front_complete"*/, v64, v65, v66);
    byte_42EB1D4 = 1;
  }
  num = 0;
  if ( item && mode )
  {
    num = 0;
    commonConsumeEntity = item->fields.commonConsumeEntity;
    if ( commonConsumeEntity && (v68 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
    {
      if ( !(_DWORD)v68 )
      {
        v122 = sub_B5D6C8(this);
        sub_B5D668(v122, 0LL);
      }
      v69 = commonConsumeEntity->m_Items[0];
      if ( !v69 )
        goto LABEL_76;
      objectId = v69->fields.objectId;
      num = v69->fields.num;
    }
    else
    {
      objectId = 0;
    }
    baseSprite = v6->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v73 = System_String__Format((System_String_o *)StringLiteral_22415/*"shop_item_menu_{0}_2"*/, v72, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v73, 0LL);
    v74 = item->fields.currentEventId;
    maskSprite = v6->fields.maskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_31190412(
                                                  v74,
                                                  maskSprite,
                                                  (System_String_o *)StringLiteral_22414/*"shop_item_menu_mask"*/,
                                                  0LL);
    eventExpeditionEnt = item->fields.eventExpeditionEnt;
    if ( !eventExpeditionEnt )
      goto LABEL_76;
    placeIconSprite = v6->fields.placeIconSprite;
    v78 = item->fields.currentEventId;
    v79 = System_Int32__ToString((int)eventExpeditionEnt + 32, 0LL);
    AtlasManager__SetEventUI_31190412(v78, placeIconSprite, v79, 0LL);
    AtlasManager__SetEventUI_31190412(
      item->fields.currentEventId,
      v6->fields.progressGaugeF,
      (System_String_o *)StringLiteral_18746/*"event_gauge_front"*/,
      0LL);
    this = (EventExpeditionListViewItemDraw_o *)AtlasManager__SetEventUI_31190412(
                                                  item->fields.currentEventId,
                                                  v6->fields.progressGaugeB,
                                                  (System_String_o *)StringLiteral_18739/*"event_gauge_back"*/,
                                                  0LL);
    v80 = item->fields.eventExpeditionEnt;
    if ( !v80 )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)v6->fields.placeNameLabel;
    if ( !this )
      goto LABEL_76;
    UILabel__set_text((UILabel_o *)this, v80->fields.name, 0LL);
    rewardTitleLabel = v6->fields.rewardTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventExpeditionListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5865/*"EXPEDITION_REWARD_TITLE_LABEL"*/, 0LL);
    if ( !rewardTitleLabel )
      goto LABEL_76;
    UILabel__set_text(rewardTitleLabel, (System_String_o *)this, 0LL);
    consumeCountLabel = v6->fields.consumeCountLabel;
    this = (EventExpeditionListViewItemDraw_o *)System_Int32__ToString((int32_t)&num, 0LL);
    if ( !consumeCountLabel )
      goto LABEL_76;
    UILabel__set_text(consumeCountLabel, (System_String_o *)this, 0LL);
    v83 = (UIWidget_o *)v6->fields.consumeCountLabel;
    *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
    if ( !v83 )
      goto LABEL_76;
    UIWidget__set_color(v83, *(UnityEngine_Color_o *)&v84, 0LL);
    v89 = item->fields.eventExpeditionEnt;
    if ( !v89 )
      goto LABEL_76;
    requiredTimeLabel = v6->fields.requiredTimeLabel;
    this = (EventExpeditionListViewItemDraw_o *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                                  this,
                                                  v89->fields.durationSec,
                                                  v88);
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
    this = (EventExpeditionListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    v91 = item->fields.eventExpeditionEnt;
    if ( !v91 || !this )
      goto LABEL_76;
    this = (EventExpeditionListViewItemDraw_o *)GiftMaster__GetListById((GiftMaster_o *)this, v91->fields.giftId, 0LL);
    v92 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)this;
    v93 = EventExpeditionListViewItemDraw___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewItemDraw___c_TypeInfo);
      v93 = EventExpeditionListViewItemDraw___c_TypeInfo;
    }
    static_fields = v93->static_fields;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v93);
        static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      }
      v96 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_GiftEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__27_0,
        v96,
        Method_EventExpeditionListViewItemDraw___c__SetItem_b__27_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_GiftEntity___ctor__);
      v97 = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
      v97->__9__27_0 = (struct System_Comparison_GiftEntity__o *)_9__27_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v97->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
    if ( !v92 )
LABEL_76:
      sub_B5D69C(this, item);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v92,
      (System_Comparison_T__o *)_9__27_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
    if ( v92->fields._size >= 1 )
    {
      v105 = (int32_t *)v92->fields._items->m_Items[0];
      if ( !v105 )
        goto LABEL_76;
      this = (EventExpeditionListViewItemDraw_o *)v6->fields.rewardIcon;
      if ( !this )
        goto LABEL_76;
      v106 = v105[7] <= 1 ? -1 : v105[7];
      ItemIconComponent__SetGift((ItemIconComponent_o *)this, v105[5], v105[6], v106, 0, 0LL);
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
        v107 = (UIWidget_o *)v6->fields.consumeCountLabel;
        *(UnityEngine_Color_o *)&v108 = UnityEngine_Color__get_gray(0LL);
        if ( !v107 )
          goto LABEL_76;
        UIWidget__set_color(v107, *(UnityEngine_Color_o *)&v108, 0LL);
LABEL_54:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v6->fields.runAnim = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&v6->fields.runAnim, 0LL, v112, v113, v114, v115, v116, v117);
        break;
      case 3:
        goto LABEL_60;
      case 4:
        v118 = item->fields.currentEventId;
        progressGaugeF = v6->fields.progressGaugeF;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI_31190412(v118, progressGaugeF, (System_String_o *)StringLiteral_18747/*"event_gauge_front_complete"*/, 0LL);
LABEL_60:
        this = (EventExpeditionListViewItemDraw_o *)v6->fields.MaskObj;
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        break;
      default:
        break;
    }
    if ( EventExpeditionListViewItemDraw__SetEventPeriodTime(v6, item, v104) )
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
                                                            (System_String_o *)StringLiteral_5857/*"EXPEDITION_EVENT_END"*/,
                                                            0LL);
              if ( eventEndText )
              {
                v120 = (System_String_o *)this;
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
            v120 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_74:
            UILabel__set_text((UILabel_o *)this, v120, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  void *ExpeditionInfo; // x0
  const MethodInfo *v56; // x1
  int32_t v57; // w21
  UnityEngine_Object_o *runAnim; // x23
  UnityEngine_GameObject_o *RunEffect; // x0
  const MethodInfo *v60; // x3
  UnityEngine_Object_o *v61; // x23
  UnityEngine_GameObject_o *v62; // x0
  const MethodInfo *v63; // x3
  unsigned int v64; // w28
  UnityEngine_Object_o *v65; // x23
  UnityEngine_Animation_o *v66; // x23
  Il2CppObject *v67; // x0
  int64_t v68; // x23
  System_String_o *RestTime; // x23
  bool v70; // w0
  UnityEngine_GameObject_o *v71; // x0
  const MethodInfo *v72; // x3
  UnityEngine_Object_o *v73; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *v75; // x23
  Il2CppObject *v76; // x0
  int64_t Time; // x23
  const MethodInfo *v78; // x1
  __int64 v79; // x25
  int v80; // w27
  int64_t v81; // x23
  __int64 v82; // x8
  float v83; // s0
  float v84; // s8
  UnityEngine_Object_o *v85; // x22
  UnityEngine_GameObject_o *v86; // x0
  const MethodInfo *v87; // x4
  UILabel_o *timeLeftLabel; // x22
  const MethodInfo *v89; // x2
  Il2CppObject *name; // x25
  System_String_o *v91; // x24
  Il2CppObject *ExpeditionTimeLabel; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t currentEventId; // w22
  EventExpeditionMaster_o *v95; // x23
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x4
  struct UILabel_o *v98; // x21
  System_String_o *mText; // x22
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  int64_t v102; // x21
  System_String_o *v103; // x21
  int32_t v104; // w20
  UISprite_o *progressGaugeF; // x21
  UILabel_o *v106; // x20
  int32_t v107; // [xsp+Ch] [xbp-64h] BYREF
  EventExpeditionPieceEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EB1D5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v10, v11, v12);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&NetworkManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_5842/*"EXPEDITION_BEST_MATCH_LABEL"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17042/*"bit_runningdog_{0}_1"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_5844/*"EXPEDITION_COMPLETE_LABEL"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_17043/*"bit_runningdog_{0}_2"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_13567/*"TIME_REST_TIMEOVER"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_1/*""*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_18747/*"event_gauge_front_complete"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_5867/*"EXPEDITION_TIME_LABEL"*/, v49, v50, v51);
    byte_42EB1D5 = 1;
  }
  entity = 0LL;
  if ( !item || !item->fields.eventExpeditionEnt )
    return;
  if ( !EventExpeditionListViewItem__GetExpeditionInfo(item, (const MethodInfo *)item) )
    goto LABEL_105;
  if ( !mode )
    return;
  EventExpeditionListViewItemDraw__SetEventPeriodTime(this, item, v53);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v54);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v57 = *((_DWORD *)ExpeditionInfo + 5);
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
      RunEffect = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v57, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, RunEffect, v57, v60);
    }
  }
  v61 = (UnityEngine_Object_o *)this->fields.runAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) && this->fields.runAnimIdx != v57 )
  {
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v56);
    ExpeditionInfo = item->fields.asset;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    v62 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v57, 0LL);
    EventExpeditionListViewItemDraw__PlayRunningAnim(this, v62, v57, v63);
  }
  v64 = mode - 3;
  if ( mode == 3 )
  {
    v65 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)ExpeditionInfo, 0LL) )
      {
        v66 = this->fields.runAnim;
        v107 = v57;
        v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
        ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17042/*"bit_runningdog_{0}_1"*/, v67, 0LL);
        if ( !v66 )
          goto LABEL_107;
        UnityEngine_Animation__Play_51249124(v66, (System_String_o *)ExpeditionInfo, 0LL);
      }
    }
  }
  ExpeditionInfo = this->fields.MaskObj;
  if ( !ExpeditionInfo
    || (ExpeditionInfo = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL)) == 0LL )
  {
LABEL_107:
    sub_B5D69C(ExpeditionInfo, v56);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ExpeditionInfo, 0LL) )
  {
LABEL_105:
    EventExpeditionListViewItemDraw__DestroyAnimObj(this, v52);
    return;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v52);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v68 = *((unsigned int *)ExpeditionInfo + 7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime = LocalizationManager__GetRestTime(v68, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !RestTime )
    goto LABEL_107;
  v70 = System_String__Equals_44565128(RestTime, (System_String_o *)ExpeditionInfo, 0LL);
  if ( v57 >= 1 && v70 )
  {
    ExpeditionInfo = this->fields.effectParent;
    if ( !ExpeditionInfo )
      goto LABEL_107;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ExpeditionInfo, 0LL) <= 0 )
    {
      ExpeditionInfo = item->fields.asset;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      v71 = ExpeditionAssetManager__GetRunEffect((ExpeditionAssetManager_o *)ExpeditionInfo, v57, 0LL);
      EventExpeditionListViewItemDraw__PlayRunningAnim(this, v71, v57, v72);
    }
    v73 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, -(float)this->fields.runningRange, 0LL);
      v75 = this->fields.runAnim;
      v107 = v57;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
      ExpeditionInfo = System_String__Format((System_String_o *)StringLiteral_17043/*"bit_runningdog_{0}_2"*/, v76, 0LL);
      if ( !v75 )
        goto LABEL_107;
      UnityEngine_Animation__Play_51249124(v75, (System_String_o *)ExpeditionInfo, 0LL);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v78);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v79 = *((unsigned int *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v56);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v80 = *((_DWORD *)ExpeditionInfo + 7);
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v56);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v81 = v79 - Time;
  v82 = (unsigned int)(v80 - *((_DWORD *)ExpeditionInfo + 6));
  v83 = (float)(unsigned int)v82;
  v84 = (float)(v82 - v81) / v83;
  if ( v64 <= 1 )
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
    UIProgressBar__set_value((UIProgressBar_o *)ExpeditionInfo, v84, 0LL);
  }
  if ( mode == 3 )
  {
    v85 = (UnityEngine_Object_o *)this->fields.runAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v85, 0LL, 0LL) )
    {
      ExpeditionInfo = this->fields.runAnim;
      if ( !ExpeditionInfo )
        goto LABEL_107;
      v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ExpeditionInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v86, -(float)(v84 * (float)this->fields.runningRange), 0LL);
    }
  }
  ExpeditionInfo = this->fields.timeLeftLabel;
  if ( !ExpeditionInfo )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)ExpeditionInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ExpeditionInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  ExpeditionInfo = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)ExpeditionInfo,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  if ( EventExpeditionPieceMaster__TryGetEntity(
         (EventExpeditionPieceMaster_o *)ExpeditionInfo,
         &entity,
         item->fields.currentEventId,
         v57,
         v87) )
  {
    timeLeftLabel = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5867/*"EXPEDITION_TIME_LABEL"*/, 0LL);
    if ( !entity )
      goto LABEL_107;
    name = (Il2CppObject *)entity->fields.name;
    v91 = (System_String_o *)ExpeditionInfo;
    ExpeditionTimeLabel = (Il2CppObject *)EventExpeditionListViewItemDraw__GetExpeditionTimeLabel(
                                            (EventExpeditionListViewItemDraw_o *)ExpeditionInfo,
                                            v81,
                                            v89);
    ExpeditionInfo = System_String__Format_44573324(v91, name, ExpeditionTimeLabel, 0LL);
    if ( !timeLeftLabel )
      goto LABEL_107;
    UILabel__set_text(timeLeftLabel, (System_String_o *)ExpeditionInfo, 0LL);
    ExpeditionInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ExpeditionInfo )
      goto LABEL_107;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ExpeditionInfo,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    currentEventId = item->fields.currentEventId;
    v95 = (EventExpeditionMaster_o *)MasterData_WarQuestSelectionMaster;
    ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v96);
    if ( !ExpeditionInfo || !v95 )
      goto LABEL_107;
    ExpeditionInfo = (void *)EventExpeditionMaster__IsBestMatchPiece(
                               v95,
                               currentEventId,
                               *((_DWORD *)ExpeditionInfo + 4),
                               v57,
                               v97);
    if ( ((unsigned __int8)ExpeditionInfo & 1) != 0 )
    {
      v98 = this->fields.timeLeftLabel;
      if ( !v98 )
        goto LABEL_107;
      mText = v98->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v100 = LocalizationManager__Get((System_String_o *)StringLiteral_5842/*"EXPEDITION_BEST_MATCH_LABEL"*/, 0LL);
      v101 = System_String__Concat_44577788(mText, v100, 0LL);
      UILabel__set_text(v98, v101, 0LL);
    }
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(item, v56);
  if ( !ExpeditionInfo )
    goto LABEL_107;
  v102 = *((unsigned int *)ExpeditionInfo + 7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v103 = LocalizationManager__GetRestTime(v102, 0LL);
  ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TIME_REST_TIMEOVER"*/, 0LL);
  if ( !v103 )
    goto LABEL_107;
  if ( System_String__Equals_44565128(v103, (System_String_o *)ExpeditionInfo, 0LL) )
  {
    ActionExtensions__Call(item->fields.updateNoticeNum, 0LL);
    v104 = item->fields.currentEventId;
    progressGaugeF = this->fields.progressGaugeF;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(v104, progressGaugeF, (System_String_o *)StringLiteral_18747/*"event_gauge_front_complete"*/, 0LL);
    v106 = this->fields.timeLeftLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ExpeditionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5844/*"EXPEDITION_COMPLETE_LABEL"*/, 0LL);
    if ( !v106 )
      goto LABEL_107;
    UILabel__set_text(v106, (System_String_o *)ExpeditionInfo, 0LL);
  }
  if ( v64 >= 2 )
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventExpeditionListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_42E64F8 & 1) == 0 )
  {
    sub_B5D5C4(&EventExpeditionListViewItemDraw___c_TypeInfo, v1, v2, v3);
    byte_42E64F8 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventExpeditionListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventExpeditionListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventExpeditionListViewItemDraw___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}